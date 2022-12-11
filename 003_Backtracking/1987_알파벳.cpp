#include <iostream>
using namespace std;

int n, m;
bool isused[30] = {false};
char board[30][30];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};
int mx = 0;

void dfs(int x, int y, int cnt){
	if(cnt > mx)
		mx = cnt;
	for(int i = 0; i < 4; i++)
	{
		int nx = dx[i] + x;
		int ny = dy[i] + y;
		if(nx >= 0 && nx < n && ny > 0 && ny < m)
		{
			if(!isused[(int)board[nx][ny] - 'A'])
			{
				isused[(int)board[nx][ny]- 'A'] = true;
				dfs(nx, ny, cnt + 1);
				isused[(int)board[nx][ny]- 'A'] = false;
			}
		}
	}
}

int	main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;

	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin >> board[i][j];

	isused[(int)board[0][0] - 'A'] = true;
	dfs(0, 0, 1);
	cout << mx;
	return (0);
}