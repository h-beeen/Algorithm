#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector <string> v;
    
    string ipt, temp;
    cin >> ipt;

    for(int i = 0; i < ipt.size(); i++)
    {
        temp = ipt.substr(i,ipt.size());
        v.push_back(temp);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++)
        cout << v[i] << '\n';
}