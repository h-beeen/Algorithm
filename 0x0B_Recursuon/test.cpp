#include <iostream>
using namespace std;

int n;
int i = 0;

void rec(int n)
{
	if(n == 0) return;
	cout << n << ' ';
	rec(n-1);	
}

int	main(void)
{
	cin >> n;
	rec(n);
}
