#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m, x, a, result = 0;
	int num[2000005] = {};

	cin >> n;
	for(int i=1; i<=n; i++)
	{
		cin >> a;
		num[a] = 1; // input value를 index로 활용
	}
	
	cin >> x; // 목표값 x

	for(int i=0; i < (x+1)/2; i++) // 합계의 중간 값까지만 검사하면, 중복 X
		if(num[i] && num[x-i])
			result++;	

	cout << result;
}
