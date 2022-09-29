#include <iostream>
#include <stack>

using namespace std;

int main (void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string s;
	getline(cin, s);
	
	stack <char> a;

	int flag = 1;
	int i = 0;

	while(s[i])
	{
		if(s[i] == '(' || s[i] == '[')
			a.push(s[i]);
		i++;
	}	
		if(s[i] == '(' || s[i] == '[') 			// (, [ 입력시
			a.push(s[i]);						// 스택에 저장

		else if(s[i] == ')')					// ) 입력시
		{
			if(!a.empty() && a.top() == '(')	// 근데 top 스택이 (이라면
				a.pop();

			else								// ) 입력시  top 스택이 (이 아니면?
			{
				flag = 0;						// flag = false
				break;							// while break;
			}
		}
	}
}

