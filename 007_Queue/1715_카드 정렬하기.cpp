#include <iostream>
#include <queue>
using namespace std;

priority_queue <int, vector<int>, greater<int> > pq;
int a, b, n, temp, cnt, sm = 0;
int main(void)
{
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> temp;
		pq.push(temp);
	}

	for(int i = 0; i < n - 1; i++)
	{
		if(pq.size() > 1)
		{
			a = pq.top();
			pq.pop();
			b = pq.top();
			pq.pop();
			int temp = a + b;
			sm += temp;
			pq.push(temp);
		}
	}
	cout << sm;
}