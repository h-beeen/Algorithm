#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	stack<int> my_stack;
	int a, result;
	cin >> a;

	while(a--)
	{
		int temp;
		cin >> temp;

		if(temp != 0)
			my_stack.push(temp);
		else
			my_stack.pop();
	}

	while(!my_stack.empty())
	{
		result += my_stack.top();
		my_stack.pop();
	}
	cout << result;
}

// 백준 오답..근데 반례가 뭘까요..?
// 2시간 붙잡았는데 반례 못잡아서 Pass..ㅎㅅㅎ
