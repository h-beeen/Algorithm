#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, p;
int first_castle[10];
queue <pair <char, char> > issues;
char board[1005][1005];



int	main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m >> p;
	for(int i = 1; i <= p; i++)
		cin >> first_castle[i];	// i번째 플레이어가 갖는 초기 성의 개수

	for(int i = 0; i < n; i++)
		cin >> board[i];


	

}