#include <iostream>
#include <cmath>
using namespace std;

int tcs, a, b, c, rn;
int main(void)
{
	cin >> tcs;
	for(int i = 0; i < tcs; i++)
	{
		cin >> a >> b >> c;
		int floor = c % a;
		if(floor == 0) floor = a;
		rn = ceil((float) c / a);
		cout << floor * 100 + rn << '\n';
	}
}