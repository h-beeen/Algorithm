#include <stdio.h>
#include <string.h>

int main(void)
{
	char array[101];
	int alpha[26];
	scanf("%s", array);

	for(int i = 0; i < 26; i++)
		alpha[i] = 0;	
	for(int i = 0; i < strlen(array); i++)
	{
		if(array[i] >= 97 && array[i] <= 122)
		{
			alpha[(array[i]-97)]++;
		}
	}
	for(int i = 0; i < 26; i++)
	{
		printf("%d ",alpha[i]);
	}
}
