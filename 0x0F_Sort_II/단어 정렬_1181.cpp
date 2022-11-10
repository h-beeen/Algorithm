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

    sort(v.begin(), v.end());                       // 알파벳 순 선 정렬
    stable_sort(v.begin(), v.end(), compare);       // 알파벳 순 정렬 후, 글자 순 정렬
    v.erase(unique(v.begin(), v.end()), v.end());   // 전체 정렬 후, 글자 수 제거

    for(int i = 0; i < v.size(); i++)
        cout << v[i] << endl;
}

// 단어 개수 n (1 <= n <= 20,000)
// 소문자 alphabet [string s] 1 <= s <= 50