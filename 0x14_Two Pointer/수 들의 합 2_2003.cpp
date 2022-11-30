#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, m, cnt, sum_val;
int res[10005];
int vec[10005];

int	main(void)
{
	cin >> n >> m;
	for(int i = 0; i < n; i++)
		cin >> vec[i];

	sort(vec, vec + n);
	int st = 0;
	int en = 1;

	while(st <= n && en <= n)
	{
		sum_val = 0;
		for(int i = st; i < en; i++)
			sum_val += vec[i];

		if(sum_val < m)
			en++;
		else if(sum_val > m)
		{
			st++;
			en = st+1;
		}
		else if(sum_val == m)
		{
			cnt++;
			st++;
			en = st+1;
		}
	}
	cout << cnt;
}