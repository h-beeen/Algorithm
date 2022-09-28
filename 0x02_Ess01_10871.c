#include <stdio.h>

int main()
{
	int res, N, X;
	scanf("%d %d",&N, &X);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &res);
		if(res < X)
			printf("%d ", res);
	}
}

// 맞았습니다!!	1112kb	4ms
