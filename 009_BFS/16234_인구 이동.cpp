#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;

int dx[4] = {1, 0 ,-1, 0};
int dy[4] = {0, 1, 0, -1};
bool flag;
int board[105][105], vis[52][52], N, L, R;
int cnt, nx, ny = 0;
queue <pair<int, int> > Q;	

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> N >> L >> R;
	for(int i = 0; i < N; i++)
		for(int j = 0; j < N; j++)
			cin >> board[i][j];

	while(1)
	{
		flag = false;
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (!vis[i][j])
					Q.push(make_pair(i, j));
				int sum = 0;
				vector<pair<int, int> > tmp;

				while(!Q.empty())
				{
					int temp1 = Q.front().first;
					int temp2 = Q.front().second;
					Q.pop();

					for(int dir = 0; dir < 4; dir++)
					{
						nx = temp1 + dx[dir];
						ny = temp2 + dy[dir];
					}
					int differ = abs(board[temp1][temp2] - board[nx][ny]);
					if(differ >= L && differ <= R)
					{
						flag = true;
						if(!vis[temp1][temp2])
						{
							tmp.push_back(make_pair(temp1, temp2));
						}
					}
				}
			}
		}
	}
}