#include <iostream>
#include <stack>

using namespace std;

int main (void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	while(true)
	{
	string s;
	stack <char> a;

	getline(cin, s);
	
	if(s == ".")
		break;

	int flag = 1;
	int i = 0;

	
		while(s[i])
		{
			if(flag == 0)
				break;

			if(s[i] == '(' || s[i] == '[')	// 만약 여는 괄호가 나온다면
				a.push(s[i]);				// 해당 괄호 push

			else if(s[i] == ']')
			{
				if(a.empty())				// 스택이 비어있는데 닫는 기호가 나온다면
				{
					flag = 0;				// Flag = 0
					break;					// Break;
				}
				else if(a.top() == '[')
					a.pop();
			}

			else if(s[i] == ')')
			{
				if(a.empty())
				{
					flag = 0;
					break;	
				}
				else if(a.top() == '(')
					a.pop();
			}
			i++;
		}
		if(flag && a.empty()) cout << "yes\n";
		else
			cout << "no\n";
	}
}
