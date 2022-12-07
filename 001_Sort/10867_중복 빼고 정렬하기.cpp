#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, temp;
vector <int> arr;
int main(void)
{
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> temp;
		arr.push_back(temp);
	}

	sort(arr.begin(), arr.end());
	arr.erase(unique(arr.begin(), arr.end()), arr.end());
	
	for(int i = 0; i < arr.size(); i++)
		cout << arr[i] << ' ';
}