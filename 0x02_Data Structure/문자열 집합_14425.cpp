#include <cstring>
#include <iostream>
using namespace std;

int n, m, cnt;
char temp1[10005][505];
char temp2[10005][505];
string temp3;

int	main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	for(int i = 0; i < n; i++)
	{
		cin >> temp3;
		int k = 0;
		while(!temp3[k])
			temp1[i][k] = temp3[k];
	}

	for(int i = 0; i < m; i++)
	{
		cin >> temp3;
		int k = 0;
		while(!temp3[k])
			temp2[i][k] = temp3[k];
	}

	for(int i = 0; i < n; i++)
		for(int j = i + 1; j < m; j++)
			if(strrchr(temp1[i], temp2[j])) cnt++;

	cout << cnt;
}