#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare1(pair<int,int> a, pair<int,int> b)
{
    return a.first < b.first;
}

bool compare2(pair<int,int> a, pair<int,int> b)
{
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
        stable_sort(v.begin(), v.end(), compare1);
        stable_sort(v.begin(), v.end(), compare2);

    for(int i = 0; i < num; i++)
        cout << v[i].first << ' ' << v[i].second << '\n';
}