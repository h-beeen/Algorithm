#include <iostream>
#include <vector>
using namespace std;

int n, k, temp;
vector <int> lis;
int	main(void)
{
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> temp;
		lis.push_back(temp);
	}

	int a = *min_element(lis.begin(), lis.end());
	int b = *max_element(lis.begin(), lis.end());

	cout << a * b;
}