#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int board[10][10];
int vis[10][10];
int	cpy[10][10];
bool isused[10][10];
int arr[3][2];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int n, m, virus, wall = 0;
int sm = -214748364;
int num = 0;

int BFS(void)
{
	virus = 0;
	for(int i= 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(cpy[i][j] != 2 || vis[i][j])		// 찾을 필요 없는 구역이라면
				continue;							// 다음 반복문 continue			
			queue<pair<int, int> > q;				// 바이러스 큐 생성
			vis[i][j] = 1;							// 나 왔어!
			q.push(make_pair(i, j));				// 시작점 큐에 Push

			while(!q.empty())						// 큐에 아무 노드도 남지 않을 때 까지 Loop
			{
				virus++;
				pair<int, int> temp = q.front();	// 큐의 Front값 pair형으로 저장
				q.pop();							// 저장 후 Pop
				
				for(int dir = 0; dir < 4; dir++)
				{
					int nx = temp.first + dx[dir];
					int ny = temp.second + dy[dir];

					if(nx < 0 || nx > n-1 || ny < 0 || ny > m-1)	// 범위 밖 조건
						continue;								// 다음 반복문으로 continue
					if(cpy[nx][ny] != 0 || vis[nx][ny])
						continue;
					
					vis[nx][ny] = 1;
					q.push(make_pair(nx,ny));
				}
			}
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			virus += (cpy[i][j] == 0);
		}
	}
	sm = max(virus, sm);
	return (sm);
}

void DFS(int k)
{
	if(k == 3)
	{
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cpy[i][j] = board[i][j];

		for(int t = 0; t < 3; t++)
			cpy[arr[t][0]][arr[t][1]] = 1;

		int ans = BFS();
		if(ans < sm)
			sm = ans;
		return;
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(board[i][j] != 0) continue;
			{
				isused[i][j] = 1;
				DFS(k+1);
				isused[i][j] = 0;
			}
		}
	}
}


int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cin >> board[i][j];
			if(board[i][j] == 1) wall++;
		}
	}

	DFS(0);
	cout << sm;
}