#include <iostream>
#include <queue>
using namespace std;

int board[505][505];
bool vis[505][505];
int n, m;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			cin >> board[i][j];

	int dx[4] = {1, 0, -1, 0};
	int dy[4] = {0, 1, 0, -1};	
	int mx = 0;
	int num = 0;

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(board[i][j] == 0 || vis[i][j]) // 이미 갔거나, 색칠 안되어 있다면
				continue;
			num++;
			queue<pair<int,int> > Q;
			vis[i][j] = 1;
			Q.push(make_pair(i,j));

			int area = 0; // 그림의 넓이;
			while(!Q.empty())
			{
				area++;
				pair<int,int> cur = Q.front;
				Q.pop();

				for(int dir = 0; dir < 4; dir++)
				{
					int nx = cur.first + dx[dir];
					int dy = cur.second + dy[dir];

					if(nx < 0 || nx >= n || ny < 0 || ny >= m)
						continue;
					if(vis[nx][ny] || board[nx][ny] != 1)
						continue;
					vis[nx][ny] = 1;
					Q.push(make_pair(nx,ny));
				}
			}
			mx = max(mx, area);
		}
	}
	cout << num << '\n' << mx;
}
