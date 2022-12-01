#include <iostream>
#include <queue>
using namespace std;


int n, m;
string s;
int	board[105][105] = {};
int vis[105][105] = {};

int dx[4] = {0, 1, -1, 0};
int dy[4] = {1, 0, 0, -1};

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
			board[i][j] = s[j] - 48;
	}

	queue <pair<int,int> > q;
	vis[0][0] = 1;
	q.push(make_pair(0, 0));

	while(!q.empty())
	{
		pair<int,int> temp = q.front();
		q.pop();

		for(int dir = 0; dir < 4; dir++)
		{
			int nx = temp.first + dx[dir];
			int ny = temp.second + dy[dir];

			if(nx < 0 || nx > n || ny < 0 || ny > m)
				continue;
			if(!board[nx][ny] || vis[nx][ny])
				continue;
	
			vis[nx][ny] = vis[temp.first][temp.second] + 1;
			q.push(make_pair(nx, ny));
		}
	}
	cout << vis[n-1][m-1];

/*	visit 경로 출력 구문
	for(int i =0; i < n; i++)
	{
		cout << '\n';
		for(int j=0; j < m; j++)
			cout << vis[i][j];
	}
*/
}
