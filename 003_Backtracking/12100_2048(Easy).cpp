#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int n;
int	arr[25][25] = {}; // 원본 배열
int tmp[25][25] = {};
int ind[5] = {};
int mx_val = -2147483648;

void push_lt() // 왼쪽으로 푸쉬 했을 때
{
	for(int i = 0; i < n; i++) // 전체 공백 푸쉬 완전탐색
	{
		for(int j = 0; j < n - 1; j++)
		{
			if(!tmp[i][j]) // 내 현 Value가 0이라면
			{
				for(int k = j + 1; k < n; k++)
				{	
					if(tmp[i][k]) // 뒤에 존재하는 처음 등장하는 유효한 Value랑 Swap
					{
						swap(tmp[i][j], tmp[i][k]);
						break;
					}
				}
			} 
		}
	}

	for(int i = 0; i < n; i++) // 합쳐질 값 탐색
	{
		for(int j = 0; j < n - 1; j++)
		{
			if (tmp[i][j] == tmp[i][j+1])
			{
				tmp[i][j] *= 2;
				tmp[i][j+1] = 0;
				for(int k = j+1; k < n-1; k++)
					swap(tmp[i][k], tmp[i][k+1]);
			}
		}
	}
	for(int i = 0; i < n; i++)
		mx_val = max(mx_val, *max_element(tmp[i], tmp[i] + n));
}

void push_rt() // 왼쪽으로 푸쉬 했을 때
{
	for(int i = 0; i < n; i++) // 전체 공백 푸쉬 완전탐색
	{
		for(int j = n - 1; j > 0; j--)
		{
			if(!tmp[i][j]) // 내 현 Value가 0이라면
			{
				for(int k = j - 1; k > -1; k--)
				{	
					if(tmp[i][k]) // 뒤에 존재하는 처음 등장하는 유효한 Value랑 Swap
					{
						swap(tmp[i][j], tmp[i][k]);
						break;
					}
				}
			} 
		}
	}

	for(int i = 0; i < n; i++) // 합쳐질 값 탐색
	{
		for(int j = n - 1; j > 0; j--)
		{
			if (tmp[i][j] == tmp[i][j-1])
			{
				tmp[i][j] *= 2;
				tmp[i][j-1] = 0;
				for(int k = j-1; k > -1; k--)
					swap(tmp[i][k], tmp[i][k-1]);
			}
		}
	}
	for(int i = 0; i < n; i++)
		mx_val = max(mx_val, *max_element(tmp[i], tmp[i] + n));
}

void push_fd() // 위쪽으로 푸쉬 했을 때
{
	for(int j = 0; j < n; j++) // 전체 공백 푸쉬 완전탐색
	{
		for(int i = 0; i < n-1; i++)
		{
			if(!tmp[i][j]) // 내 현 Value가 0이라면
			{
				for(int k = i + 1; k < n; k++)
				{	
					if(tmp[k][j]) // 아래에 존재하는 처음 등장하는 유효한 Value랑 Swap
					{
						swap(tmp[i][j], tmp[k][j]);
						break;
					}
				}
			} 
		}
	}
	
	for(int j = 0; j < n; j++) // 합쳐질 값 탐색
	{
		for(int i = n - 1; i > 0; i--)
		{
			if (tmp[i][j] == tmp[i+1][j])
			{
				tmp[i][j] *= 2;
				tmp[i+1][j] = 0;
				for(int k = i + 1; k < n - 1; k++)
					swap(tmp[k][j], tmp[k+1][j]);
			}
		}
	}
	for(int i = 0; i < n; i++)
		mx_val = max(mx_val, *max_element(tmp[i], tmp[i] + n));
}


void push_bd() // 아래쪽으로 푸쉬 했을 때
{
	for(int j = n - 1; j > -1; j--) // 전체 공백 푸쉬 완전탐색
	{
		for(int i = n - 1; i > 0; i--)
		{
			if(!tmp[i][j]) // 내 현 Value가 0이라면
			{
				for(int k = i - 1; k > -1; k--)
				{	
					if(tmp[k][j]) // 위에 존재하는 처음 등장하는 유효한 Value랑 Swap
					{
						swap(tmp[i][j], tmp[k][j]);
						break;
					}
				}
			} 
	
		for(int k = i - 1; k > -1; k--)
			if(tmp[i][j] == tmp[k][j])
			{
				tmp[i][j] *= 2;
				tmp[k][j] = 0;
				break;
			}
		}
	}

	for(int i = 0; i < n; i++)
		mx_val = max(mx_val, *max_element(tmp[i], tmp[i] + n));
}

void dfs(int depth)	// 상하좌우 완전탐색
{
	if(depth == 5)
	{
		for(int i = 0; i < 4; i++)
		{
			if(ind[i] == 1) push_lt();
			else if(ind[i] == 2) push_rt();
			else if(ind[i] == 3) push_fd();
			else if(ind[i] == 4)push_bd();
			// cout << ind[i];
		}
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				if(mx_val < tmp[i][j]) {
					mx_val = tmp[i][j];
				}
			}
		}
		copy(&arr[0][0], &arr[n][n], &tmp[0][0]);
		return;
	}
	for(int i = 1; i < 5; i++)
	{
		ind[depth] = i;
		dfs(depth + 1);
	}
}

int	main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for(int i = 0; i < n; i++) // 세로 : 1~n
		for(int j = 0; j < n; j++) // 가로 : 1~n 
			cin >> arr[i][j];

	copy(&arr[0][0], &arr[n][n], &tmp[0][0]);	

	push_bd();
	for(int i = 0; i < n; i++)
	{
		cout << endl;
		for(int j = 0; j < n; j++)
			cout << tmp[i][j];
	}

	// dfs(0);
	cout << mx_val;
}
