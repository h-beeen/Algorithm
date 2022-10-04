#include <iostream>
#include <queue>
#include <string>
#define X first
#define Y second
using namespace std;

int board[105][105]; // 미로
int visit[105][105]; // 방문 표시
int check[105][105]; // 시작점으로 부터 거리 표시

int n, m;
string s;
int board_source[105];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	for(int i = 0; i < n; i++)
	{
		cin >> s;
		for(int j = 0; j < m; j++)
			board[i][j] = (int) s[j] - 48;
	}

	// BFS
	visit[0][0] = 1; // 시작점 방문 표시
	queue<pair<int,int> > q; // 큐 생성
	q.push(make_pair(0,0));

	while(!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;

		q.pop();
		for(int i = 0; i < 4; i++)
		{
			int next_x = x + dx[i];
			int next_y = y + dy[i];
			
			if(next_x < n && next_x >= 0 && next_y < m && next_y >= 0) // 미로의 범위 내
			{
				if(board[next_x][next_y] == 1 && visit[next_x][next_y] == 0)
				{
					check[next_x][next_y] = check[x][y] + 1;
					visit[next_x][next_y] = 1;
					q.push(make_pair(next_x, next_y));
				}
			}
		}
	}
	cout << check[n-1][m-1] + 1;
}
