#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <tuple>

using namespace std;

int num;
vector <tuple <string, int, int, int> > v;
string name;
int kor, mat, eng;

bool compare(tuple<string, int, int, int> a,\
             tuple<string, int, int, int> b)
{
    if      (get<1>(a) != get<1>(b))
        return get<1>(a) > get<1>(b);
                                        // 국어점수 동일
    else if (get<2>(a) != get<2>(b))
        return get<2>(a) < get<2>(b); 
                                        // 국어, 영어점수 동일
    else if (get<3>(a) != get<3>(b))
        return get<3>(a) > get<3>(b);
                                        // 국어, 영어, 수학 점수 동일                
    else
        return get<0>(a) < get<0>(b);
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> num;

    for(int i = 0; i < num; i++)
    {
        cin >> name >> kor >> mat >> eng;
        v.push_back(make_tuple(name, kor, mat, eng));
    }

    stable_sort(v.begin(), v.end(), compare);
    for(int i = 0; i < num; i++)
        cout << get<0>(v[i]) << '\n';
}