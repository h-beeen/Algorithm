#include <iostream>
#include <cmath>
using namespace std;

int v[3];
int a, b, c;
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	while(true)
	{
		cin >> v[0] >> v[1] >> v[2];
		sort(v, v + 3);
		if (v[0] == 0 && v[1] == 0 && v[2] == 0)
			return (0);
		else if(pow(v[0], 2) + pow(v[1], 2) == pow(v[2], 2))
			cout << "right" << '\n';
		else
			cout << "wrong" << '\n';
	}
}