#include <iostream>
using namespace std;

int n, m, temp;
int arr[10];
int num[10];
bool isused[10];

void func(int k)
{
	if(k == m)
	{
		for(int i = 0; i < m; i++)
			cout << num[arr[i]] << ' ';
		cout << '\n';
		return;
	}

	for(int i = 0; i < n; i++)
	{
		if(!isused[i])
		{
			arr[k] = i;
			isused[i] = 1;
			func(k+1);
			isused[i] = 0;
		}
	} 
}

int	main (void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for(int i = 0; i < n; i++)
		cin >> num[i];

	for(int i = 0; i < n; i++)
	{
		for(int j = i; j < n ; j++)
		{
			if(num[i] > num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	func(0);
}
