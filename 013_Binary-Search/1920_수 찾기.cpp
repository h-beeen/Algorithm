#include <iostream>
using namespace std;

int intg[100005];
int n, m, target;

int binary_search(int t)
{
	int st = 0;
	int en = n - 1;

	while (st <= en)
	{
		int mid = (st + en) / 2;
		if (intg[mid] < t)
			st = mid + 1;
		else if (intg[mid] > t)
			en = mid - 1;
		else
			return 1;
	}
	return 0;
}

int	main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;

	for(int i = 0; i < n; i++)
		cin >> intg[i];

	sort(intg, intg + n);
	cin >> m;

	while(m--)
	{
		cin >> target;
		cout << binary_search(target) << '\n';
	}
}