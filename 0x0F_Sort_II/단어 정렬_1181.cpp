#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int num;
vector <string> v;
string s;

bool compare2(string a, string b)
{
    return a < b;
}

bool compare(string a, string b)
{
    return a.length() < b.length();
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        cin >> s;
        v.push_back(s);
    }

    sort(v.begin(), v.end());
    stable_sort(v.begin(), v.end(), compare);
    v.erase(unique(v.begin(), v.end()), v.end());

    for(int i = 0; i < v.size(); i++)
        cout << v[i] << endl;
}

// 단어 개수 n (1 <= n <= 20,000)
// 소문자 alphabet [string s] 1 <= s <= 50