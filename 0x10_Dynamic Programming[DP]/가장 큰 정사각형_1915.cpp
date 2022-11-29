#include <iostream>
#include <algorithm>
using namespace std;

int board[1005][1005], n, m;
int	sq[1005][1005];
string s[1005];
int res = 0;

int	main(void)
{
	cin >> n >> m;
	for(int i = 0; i < n; i++)
		cin >> s[i];

	for(int i = 0; i < n; i ++)
		for(int j = 0; j < n; j++)
			board[i][j] = s[i][j];

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if (board[i][j])
			{
				sq[i][j] = min(min(sq[i-1][j], sq[i][j-1]), sq[i-1][j-1]) + 1;
				res = max(res, sq[i][j]);
			}
		}
	}
	cout << res * res;
}