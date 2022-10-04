#include <iostream>
#include <queue>
using namespace std;

int n, m;
int box[1005][1005];

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int result = 0;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	queue <pair<int,int> > q;

	// box에 토마토 주입, 익은 토마토(1)이라면 바로 queue push.
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cin >> box[i][j];
			if(box[i][j] == 1)
				q.push(make_pair(i,j));
		}
	}

	// BFS 출발!
	while(!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for(int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];

			if(nx>=0 && nx<n && ny>=0 && ny<m && box[nx][ny] == 0)
			{
				box[nx][ny] = box[x][y] + 1;
				q.push(make_pair(nx,ny));
			}
		}
	}
	
	// 일수 세러 출발!!
	for(int i =0; i<n; i++)
	{
		
		for(int j = 0; j<m; j++)
		{
			// 다 익었니?
			if(box[i][j] == 0)
			{
				cout << -1 << '\n';
				return 0;
			}
			// 그럼 얼마만에 익었니?
			if(result < box[i][j])
				result = box[i][j];
		}
	}
	cout << result-1 << '\n';
	return 0;
}
