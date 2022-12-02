#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int temp1, temp2;
vector <int> vec;

int	main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> temp1 >> temp2;
	temp1 += temp2;

	for(int i = 0; i < temp1; i++)
	{
		cin >> temp2;
		vec.push_back(temp2);
	}

	sort(vec.begin(), vec.end());
	
	for(int i = 0; i < temp1; i++)
		cout << vec[i] << ' ';
}