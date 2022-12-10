#include <iostream>
#include <stack>
using namespace std;

//만약 스택에 넣을 값이 A이고 다음 값이 P라면
//스택에 PP가 저장되어 있다면 pop && pop
//else return NP;

stack <char> st;
string s;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> s;
	if(s[0] == 'A')
	{
		cout << "NP";
		return 0;
	}

	for(int i = 0; i < s.length(); i++)
	{
		if(s[i] == 'P')
			st.push('P');

		else if(s[i] == 'A' && st.size() > 1 && s[i+1] == 'P')
		{
			st.pop(); // P 2개 POP
			st.pop();
		}
		else
		{
			cout << "NP";
			return 0;
		}
	}
	if(st.size() == 1)
		cout << "PPAP";
	else
		cout << "NP";
	return 0;
}