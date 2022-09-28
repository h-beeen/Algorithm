#include <iostream>
using namespace std;

int main()
{
	int N;
	int max = 0;

	cin.tie(0);
	cout.tie(0);

	cin >> N; // Scanf N

	int d[10] = {}; // 배열 초기화
	while(N)
	{
		d[N%10]++;
		N /= 10;	
	}
	d[6] += d[9]; // d[6]에 6과 9의 갯수 합 저장
	d[9] = 0; // d[9] 헷갈리지 않게 초기화

	if(d[6] % 2 == 1) //2로 나눴을 때 홀수면 소수점 1 절상	
		d[6] = d[6]/2 + 1;
	else // 2로 나눴을 때 짝수면 그대로 
		d[6] /= 2;

	for(int i = 0; i < 10; i++)
	{
		if(d[i] >= max)
			max = d[i];
	}
	
	cout << max;
}
