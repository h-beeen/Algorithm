#include <iostream>
#include <stack>
using namespace std;

int main (void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // ( 레이저 or 막대의 시작
    // ) 레이저 or 막대의 끝 

    int res = 0;
    string s;
    stack <char> a;
    cin >> s;

    int i = 0;
    while(s[i])
    {
        if(s[i] == '(')                         // if 막대 dest
            a.push(s[i]);
        else if(s[i-1] == '(' && s[i] == ')')   // else if laser
        {
            a.pop();                            // 레이저 dest pop
            res += a.size();
        }                                      // 레이저를 제외한 막대 dest 개수 만큼 +
        else
        {                                     // 레이저의 끝은 아니면서, 막대 end일 때
            res++;                             // 막대가 끝나면 뒤 자투리 막대 +1;
            a.pop();
        }
        i++;
    } 
    cout << res; 
}