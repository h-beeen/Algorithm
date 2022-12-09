#include <iostream>
#include <stack>
using namespace std;

stack <char> vps;
string s;
int n;
bool flag = true;

void clear_stack()
{
	while(!vps.empty())
		vps.pop();
}


int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	while(n--) // n회 반복 구문
	{
		clear_stack();
		flag = true;
		cin >> s;
		if(s[0] == ')')
			flag = false;
		else
			vps.push('(');

		for(int i = 1; i < s.length(); i++)
		{
			if (s[i] == '(')	// input ()
				vps.push('(');
			else			// input )
			{
				if(!vps.empty() && vps.top() == '(')
					vps.pop();
				else
					flag = false;
			}
		}
		if(vps.empty() && flag == true)	cout << "YES" << '\n';
		else cout << "NO" << '\n';
	}
}