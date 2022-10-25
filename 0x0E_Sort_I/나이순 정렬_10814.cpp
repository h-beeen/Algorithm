#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool compare(pair<int,string> a, pair<int,string> b)
{
    return a.first < b.first;
}

int main (void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int num, temp_a;
    string temp_b;

    cin >> num;
    vector <pair<int, string> > v;
    for(int i = 0; i < num; i++)
    {
        cin >> temp_a >> temp_b;
        v.push_back(make_pair(temp_a, temp_b));
    }
    
    stable_sort(v.begin(), v.end(), compare);
    for(int i = 0; i < num; i++)
        cout << v[i].first << ' ' << v[i].second << endl;
}