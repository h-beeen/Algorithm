#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int num;
long long temp2;
string temp;
vector <long long> v;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> num;

    for(int i = 0; i < num; i++)
    {
        cin >> temp;
        reverse(temp.begin(), temp.end());
        v.push_back(stoll(temp));
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < num; i++)
        cout << v[i] << endl;
}

