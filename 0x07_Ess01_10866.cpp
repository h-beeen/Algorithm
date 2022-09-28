#include <iostream>
#include <deque>
using namespace std;

int main (void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	deque <int> dq;
	int num, k = 0;
	string s;
	cin >> num;

	while(num--)
	{
		cin >> s;
		if(s == "push_front")
		{
			cin >> k;
			dq.push_front(k);
		}

		else if(s == "push_back")
		{
			cin >> k;
			dq.push_back(k);
		}

		else if(s == "pop_front")
		{
			if(dq.size())
			{
				cout << dq.front() << '\n';
				dq.pop_front();
			}
			else cout << -1 << '\n';
		}
		
		else if(s == "pop_back")
		{
			if(dq.size())
			{
				cout << dq.back() << '\n';
				dq.pop_back();
			}
			else cout << -1 << '\n';
		}

		else if(s == "size")
			cout << dq.size() << '\n';

		else if(s == "empty")
			cout << (int) dq.empty() << '\n';

		else if(s == "front")
		{
			if(dq.size())
				cout << dq.front() << '\n';
			else cout << -1 << '\n';
		}
		else if(s == "back")
		{
			if(dq.size())
				cout << dq.back() << '\n';
			else cout << -1 << '\n';
		}
	}
}
