#include <iostream>
#include <deque>
using namespace std;

int main (void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m, val, a, cnt, res = 0;
	cin >> n >> m;

	deque <int> dq;
	for(int i = 1; i<=n; i++) dq.push_back(i); // 1~i까지의 수 덱에 저장

	while(m--)
	{
		cin >> val;
		a = 0;
		while(val != dq[a]) a++; // a = val이 위치한 인덱스
	
		if(a-1 < dq.size() - a-1) // mv right 조건
		{
			dq.push_back(dq.front());
			dq.pop_front();
		}
		else // mv left 조건
		{
			dq.push_front(dq.back());
			dq.pop_back();
		}
		cnt++;
	}
	cout << cnt;
}
