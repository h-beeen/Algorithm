#include <iostream>
#include <queue>
using namespace std;

int T, M, N, K, X, Y;
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};

int main (void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> T;
	while(T--)
	{
		int area = 0;
		int vis[55][55] = {};
		int board[55][55] = {};

		cin >> M >> N >> K;				// 이번 TC의 M(가로), N(세로), K(이번 TC의 배추 개수)
		queue <pair<int, int> > q;
		for(int i = 0; i < K; i++)
		{
			cin >> X >> Y;
			board[X][Y] = 1;
			q.push(make_pair(X,Y));
		}

		while(!q.empty())
		{
			
			pair<int,int> temp = q.front();
			if(vis[temp.first][temp.second] == 1)
			{
				q.pop();
				continue;
			}
			else
			{
				area++;
				q.pop();
			}

			for(int dir = 0; dir < 4; dir++)
			{
				int nx = temp.first + dx[dir];
				int ny = temp.second + dy[dir];

				if(nx >= 0 && nx < M && ny >= 0 && ny < N && !vis[nx][ny])
				{
					q.push(make_pair(nx,ny));
					vis[nx][ny] = 1;
				}
			}
		}
		cout << area << '\n'; 
	}
}