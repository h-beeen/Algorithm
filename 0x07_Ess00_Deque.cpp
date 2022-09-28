#include <iostream>
#include <deque>

using namespace std;

int main (void)
{
	deque<int> dq;
	dq.push_front(10); // 10
	dq.push_back(50); // 10, 50
	dq.push_front(24); // 24, 10, 50
	dq.pop_back(); // 24, 10
	dq.insert(dq.begin()+1, 33); // 24, 33, 10
	dq.erase(dq.begin()+2); // 24, 33
	cout << dq[0] << ' ';
	cout << dq[1] << ' ';
	dq.clear(); // dq의 모든 원소 제거
}
