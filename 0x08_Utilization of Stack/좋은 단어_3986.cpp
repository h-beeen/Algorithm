#include <iostream>
#include <stack>

using namespace std;

int main (void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    int num;
    int cnt = 0;
    cin >> num;
    
    while(num--)
    {
    	string s;
	    stack <char> a;

	    cin >> s;
	    int i = 0;
		while(s[i])
		{
            if(s[i] == 'A') // if input == A;
            {
                if(!a.empty() && a.top() == 'A') // 이미 A가 스택에 있다면
                    a.pop();        // 원래 스택에 존재하던 A pop
                else                // A가 스택에 없으면
                    a.push(s[i]);    // A Push
            }

            if(s[i] == 'B') // if input == B;
            {
                if(!a.empty() && a.top() == 'B') // 이미 B가 스택에 있다면
                    a.pop();        // 원래 스택에 존재하던 B pop
                else                // B가 스택에 없으면
                    a.push(s[i]);    // B Push
            }
            i++;
		}
        if(a.empty()) cnt++;
    }
    cout << cnt;
}