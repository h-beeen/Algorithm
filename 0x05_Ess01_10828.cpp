#include <iostream>
#include <stack>
#define max_i 1000005
using namespace std;

int my_stack[max_i];
int pos;

void push(int value)
{
	my_stack[pos++] = value;
}

int top()
{
	return(my_stack[pos-1]);
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a; // 첫째 줄 변수 a 선언
	cin >> a; // input a

	while(a--) // a번 반복
	{
		string s; // a번째 string s 선언
		cin >> s; // a번째 input a

		if(s == "push")
		{
			int n; // Push 뒤 정수 n
			cin >> n; // input n
			push(n); // 해당 n값 Push
		}

		else if(s=="pop") // top값을 터칠거야.
		{
			if(pos == 0) // 근데 top이 없으면?
				cout << -1 << "\n"; // printf -1
			else
			{
				cout << top() << "\n"; // printf top(), pos --
				pos--;
			}
		}

		else if(s == "size")
		{
			cout << pos << "\n";
		}

		else if(s == "empty")
		{
			if(pos == 0)
				cout << -1 << "\n";
			else
				cout << 0 << "\n";	
		}
		
		else if(s == "top")
		{
			if(pos == 0)
				cout << -1 << "\n";
			else
				cout << top() << "\n"; 
		}
	}
}
