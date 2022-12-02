#include <iostream>
#include <queue>
using namespace std;

int R, C;
char board[1005][1005];

int fire_board[1005][1005] = {}; // 불의 확산 시간
int person_board[1005][1005] = {}; // 지훈이의 이동 시간 

int fire_visit[1005][1005] = {};
int person_visit[1005][1005] = {};

int dx[4] = {0, 1, -1, 0};
int dy[4] = {1, 0, 0, -1};
int res = 2147483647;
string s;

// board에 미로 배열 input
// fire_q에 불의 위치 전부 push -> 불의 확산 시간 int형 저장 -> fire_board


int	main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> R >> C;

	queue<pair<int,int> > fire_q; // fire_q -> 불의 시작 점 전부 Push
	pair<int,int> person; // 사람은 무조건 1명. 사람 위치 pair형 저장

	for(int i = 0; i < R; i++)
	{
		cin >> s;
		for(int j = 0; j < C; j++)
		{
			board[i][j] = s[j];
			if(s[j] == 'F')
			{
				fire_q.push(make_pair(i,j));
				fire_visit[i][j] = 1;
			}

			if(s[j] == 'J')
			{
				person.first = i;
				person.second = j;
			}
		}
	}

	// Now : 보드에 배열 저장, 불의 위치 fire_q스택 전부 Push, 사람 위치 pair형 저장
	// BFS [1] -> 지훈이 이동 경로 BFS

	queue<pair <int, int> > person_q;						// 지훈이 큐 선언
	person_q.push(make_pair(person.first, person.second));	// 지훈이 시작점 푸쉬
	person_visit[person.first][person.second] = 1;

	while(!person_q.empty())
	{
		person = person_q.front();
		person_q.pop();
		
		for(int dir = 0; dir < 4; dir++)
		{
			int nx = person.first + dx[dir];
			int ny = person.second + dy[dir];

			if(nx > 0 && ny > 0 && nx < R || ny < C) // 범위 내 값
			{
				if(person_visit[nx][ny] == 0 && (board[nx][ny] == 'F' || board[nx][ny] == '.')) // 방문한 적 없고, BFS pos가 벽이 아닐 때  
				{
					person_q.push(make_pair(nx, ny));
					person_visit[nx][ny] = person_visit[person.first][person.second] + 1;
				}
			}
		}
	}

	// BFS [2] -> 불의 이동 경로 BFS

	pair<int,int> fire_temp;
	while(!fire_q.empty())
	{
		fire_temp = fire_q.front();
		fire_q.pop();

		for(int dir = 0; dir < 4; dir++)
		{
			int nx2 = fire_temp.first + dx[dir];
			int ny2 = fire_temp.second + dy[dir];

			if(nx2 > 0 && ny2 > 0 && nx2 < R || ny2 < C)
			{
				if(fire_visit[nx2][ny2] == 0 && (board[nx2][ny2] == 'J' || board[nx2][ny2] == '.'))
				{
					fire_q.push(make_pair(nx2, ny2));
					fire_visit[nx2][ny2] = fire_visit[fire_temp.first][fire_temp.second] + 1;
				}
			}
		}
	}

	// 최단 탈출 경로
	for(int i = 0; i < R; i++)
	{
		for(int j = 0; j < C; j++)
		{
			if(i == 0 || j == 0 || i == (R - 1) || j == (C - 1)) // [탈출조건]  X = 0 or Y = 0 or X = R-1 or Y = C -1
			{
				if(person_visit[i][j] > 0 && (person_visit[i][j] < fire_visit[i][j])) // 탈출조건 만족하면서, 지훈이가 탈출할 수 있다면
				{
					if(res > person_visit[i][j])
						res = person_visit[i][j];
				}

				if(person_visit[i][j] > 0 && fire_visit[i][j] == 0)
				{
					if(res > person_visit[i][j])
						res = person_visit[i][j];
				}
			}
		}
	}	

/*
	// 지훈의 이동 경로 출력
	cout << "지훈이의 이동 경로 ";
	for(int i = 0; i < R; i++)
	{
		cout << '\n';
		for(int j = 0; j < C; j++)
			cout << person_visit[i][j];
	}

	// 불의 이동 경로 출력
	cout << '\n' << '\n' << "불의 이동 경로";
	for(int i = 0; i < R; i++)
	{
		cout << '\n';
		for(int j = 0; j < C; j++)
			cout << fire_visit[i][j];
	}

*/

/* Exception Case

3 4
###F
.J#.
###.

*/
	if(res == 2147483647) cout << "IMPOSSIBLE";
	else cout << res;
}
