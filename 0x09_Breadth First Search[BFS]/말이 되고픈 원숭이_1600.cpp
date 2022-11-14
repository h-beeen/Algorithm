#include <iostream>
#include <queue>
using namespace std;

int board[205][205];
int vis[205][205];

int dx[4] = {1, 0, -1, 0};						// 원숭이의 x축 이동 경로
int dy[4] = {0, 1, 0, -1};						// 원숭이의 y축 이동 경로
int knight_x[8] = {-1, 1, 2, 2, -1, 1, -2, -2};	// 나이트의 x축 이동 경로
int knight_y[8] = {2, 2, 1, -1, -2, -2, 1, -1};	// 나이트의 y축 이동 경로

int k, n, m, area, mx = 0;
int num = 0;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> k >> n >> m;							// 동작수, 가로 길이, 세로 길이

	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
			cin >> board[i][j];					// 1. 보드에 Input Value 저장

	// for(int i= 0; i < n; i++)
	// {
	// 	for(int j = 0; j < m; j++)
	// 	{
	// 		if(!(board[i][j]) || vis[i][j])		// 찾을 필요 없는 구역이라면
	// 			continue;							// 다음 반복문 continue

	// 		num++;									// num = 찾은 시작점의 개수, 즉 그림의 개수				
	// 		queue<pair<int, int> > q;				// 그 그림의 큐 생성
	// 		vis[i][j] = 1;						// 나 왔어!
	// 		q.push(make_pair(i, j));				// 시작점 큐에 Push

	// 		area = 0;
	// 		while(!q.empty())						// 큐에 아무 노드도 남지 않을 때 까지 Loop
	// 		{
	// 			area++;
	// 			pair<int, int> temp = q.front();	// 큐의 Front값 pair형으로 저장
	// 			q.pop();							// 저장 후 Pop
				
	// 			for(int dir = 0; dir < 4; dir++)
	// 			{
	// 				int nx = temp.first + dx[dir];
	// 				int ny = temp.second + dy[dir];

	// 				if(nx < 0 || nx > n || ny < 0 || ny > m)	// 범위 밖 조건
	// 					continue;								// 다음 반복문으로 continue
	// 				if(!board[nx][ny] || vis[nx][ny])
	// 					continue;
					
	// 				vis[nx][ny] = vis[temp.first][temp.second];
	// 				q.push(make_pair(nx,ny));
	// 			}
	// 		}
	// 		if(mx <= area)
	// 			mx = area;
	// 	}
	// }

	cout << endl;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout <<  board[i][j];
		}
		cout << endl;
	}
}
