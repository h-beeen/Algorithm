#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

struct STUDENT
{
    string name;
    int kor, eng, math;
};

int num;
string temp1;
int temp2, temp3, temp4;

bool compare(STUDENT a, STUDENT b)
{
    if(a.kor == b.kor && a.eng == b.eng && a.math == b.math)
        return a.name < b.name;
    if(a.kor == b.kor && a.math == b.math)
        return a.math > b.math;
    if(a.kor == b.kor)
        return a.eng < b.eng;
    return a.kor > b.kor;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> num;
    vector<STUDENT> v(num);

    for(int i = 0; i < num; i++)
        cin >> v[i].name >> v[i].kor >> v[i].eng >> v[i].math;

    sort(v.begin(), v.end(), compare);
    
    for(int i = 0; i < num; i++)
        cout << v[i].name << endl;
}