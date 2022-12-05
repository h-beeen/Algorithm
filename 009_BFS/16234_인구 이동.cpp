#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;

int dx[4] = {1, 0 ,-1, 0};
int dy[4] = {0, 1, 0, -1};
int N, L, R;
bool flag = true;
int board[52][52];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> N >> L >> R;
	for(int i = 0; i < N; i++)
		for(int j = 0; j < N; j++)
			cin >> board[i][j];

	while(flag)
	{
		for(int i = 0; i < N; i++)
		{
			for(int j = 0; j < N; j++)
			{

			}
		}
	}
}