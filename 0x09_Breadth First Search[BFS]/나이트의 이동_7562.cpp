#include <iostream>
#include <queue>
using namespace std;


int tc_count, i, dest_x, dest_y, arr_x, arr_y;

int dx[8] = {1, -1, 2, 2, 1, 1, -2, -2};
int dy[8] = {2, 2, -1, 1, -2, 2, -1, 1};


int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> tc_count;
	// tc_count 만큼 반복

	while(tc_count--)
	{
		int board[305][305] = {};
		int vis[305][305] = {};
		cin >> i;					// i * i 의 보드
		cin >> dest_x >> dest_y;	// dest_x와 dest_y 입력
		board[dest_x][dest_y] = 1;	// 보드에 시작점 표시
		cin >> arr_x >> arr_y;		// arr_x와 arr_y 입력
	
		queue<pair<int, int> > q;
		vis[dest_x][dest_y] = 1;
		q.push(make_pair(dest_x, dest_y));

		while(!q.empty() && !vis[arr_x][arr_y])
		{
			pair<int, int> temp = q.front();
			q.pop();
	
			for(int dir = 0; dir < 8; dir++)
			{
				int nx = temp.first + dx[dir];
				int ny = temp.second + dy[dir];
	
				if(nx < 0 || nx > i || ny < 0 || ny > i)
					continue;
	
				if(vis[nx][ny])
					continue;
	
				vis[nx][ny] = vis[temp.first][temp.second] + 1;
				q.push(make_pair(nx,ny));		
			}	
		}	
		cout << vis[arr_x][arr_y] -1 << '\n';
	} 

/*	
	cout << "\n\n" << "VISIT" << '\n';
	for(int j = 0; j < i; j++)
	{
		cout << '\n';
		for(int k = 0; k < i; k++)
			cout << vis[j][k];
	}*/	
}
