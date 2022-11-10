#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, C, num;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if(a.first == b.first)
        return a.second > b.second;
    return a.first > b.first;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> C;
    vector <pair<int, int> > v(C+1); // 빈도, 숫자
    vector <pair<int, int> > ind(C+1); // 숫자, 숫자 

    
    for(int i = 0; i < N; i++)
    {
        cin >> num;
        if(ind[num-1].second == 0) // 숫자, 숫자
        {
            ind[num-1].first = num-1;
            ind[num-1].second = num-1; 
        }   

        v[num-1].first++;         // first == 빈도
        v[num-1].second = num;    // second == 숫자
    }

    stable_sort(v.begin(), v.end(), cmp);

    for(int i = 0; i < C; i++)
    {   
        while(v[i].first)
        {
            v[i].first--;
            cout << v[i].second << ' ';
        }
    }
}