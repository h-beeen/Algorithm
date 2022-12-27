#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, m, temp;
vector <int> vec;
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	for(int i = 0; i < n; i++)
	{
		cin >> temp;
		vec.push_back(temp);
	}
}