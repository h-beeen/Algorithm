#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int cnt;
string s;
char temp;

int main(void)
{
    cin >> s;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == s[i+1]) continue; // 첫 항과 다음 항이 같다면 continue;
        else cnt++;
    }
    cout << cnt/2;
}