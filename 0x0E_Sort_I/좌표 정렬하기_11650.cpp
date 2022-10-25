#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int,int> a, pair<int,int> b)
{
    if(a.first != b.first)
        return a.first < b.first;
    else
        return a.second < b.second;
}

int num;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector <pair<int, int> > v;
    pair<int, int> temp;
    cin >> num;

    for(int i = 0; i < num; i++)
    {
        cin >> temp.first >> temp.second;
        v.push_back(temp);
    }
        stable_sort(v.begin(), v.end(), compare);

    for(int i = 0; i < num; i++)
        cout << v[i].first << ' ' << v[i].second << '\n';
}