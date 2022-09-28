#include <iostream>
#include <stack>

using namespace std;
// Stack
// push, pop, top, empty, size

int main(void)
{
	stack<int> S;
	cout << S.size() << '\n';
	if(S.empty())
		cout << "S is empty\n";
	else
		cout << S.top() << "\n";
}
