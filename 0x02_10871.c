#include <stdio.h>

int main()
{
	int N, X, res;
	scanf("%d %d",&N, &X);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &res);
		if(res < X)
			printf("%d", res);
	}
}
