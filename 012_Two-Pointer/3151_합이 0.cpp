#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector <int> arr;
int n, temp, res = 0;
int main (void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		arr.push_back(temp);
	}
	sort(arr.begin(), arr.end());

	for(int i = 0; i < n; i++)
	{
		int st = 0;
		int en = n - 1;
	}
}