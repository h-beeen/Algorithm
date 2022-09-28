#include <iostream>
#include <queue>

using namespace std;

int main (void)
{
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);

	queue<int> q;
	int num, k;
	cin >> num;

	for(int i = 0; i < num; i++) 	// [1, 2, 3, 4] // 1이 맨 윗장
		q.push(++i);
	while(q.size() != 1)
	{
		q.pop();					// [2, 3, 4] // 맨 윗장 pop
		q.push(q.front());			// [2, 3, 4, 2] // 맨 윗장 제일 밑으로 push
		q.pop();					// [3, 4, 2] // 맨 윗장 pop
	}

	cout << q.back();
}
