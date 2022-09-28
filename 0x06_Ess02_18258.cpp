#include <iostream>
#include <queue>
using namespace std;

int main (void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	queue<int> que;

	int a;
	cin >> a;

	while(a--)
	{
		string s;
		cin >> s;

		if(s == "push")
		{
			int val;
			cin >> val;
			que.push(val);
		}
		
		else if(s == "pop" && !que.empty()) // pop && Not empty
		{
			cout << que.front() << '\n';
			que.pop();
		}

		else if(s == "pop" && que.empty()) // pop && empty
			cout << -1 << '\n';

		else if(s == "size")
			cout << que.size() << '\n';

		else if(s == "empty")
			cout << (int)que.empty() << '\n';

		else if(s == "front")
		{
			if(que.empty()) cout << -1 << '\n';
			else cout << que.front() << '\n';
		}

		else if(s == "back")
		{
			if(que.empty()) cout << -1 << '\n';
			else cout << que.back() << '\n';
		}
	}
}
