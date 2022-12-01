#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long long n, m, minus_value;
long long res = 3000000000;


int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	vector <long long> vec(n);
	for(int i = 0; i < n; i++)
		cin >> vec[i];

	sort(vec.begin(), vec.end());

	long long st, en;

	while(st < n && en < n)
	{
		minus_value = vec[en] - vec[st];
		if(vec[en] - vec[st] < m)
			en++;
		else
		{
			res = min(res, vec[en] - vec[st]);
			st++;
		}
	}
	cout << res;
}