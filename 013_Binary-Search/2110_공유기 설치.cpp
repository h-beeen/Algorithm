#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, c, temp;
vector <int> v;

bool binary_dfs(int k)
{

}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> c;
	for(int i = 0; i < n; i++)
	{
		cin >> temp;
		v.push_back(temp); 
	}
	sort(v.begin(), v.end());

	int st = 0;
	int en = 1000000000;
	int mid;
	while (st < en)
	{
		mid = (st + en) / 2;
		if(binary_dfs(mid))
			st = mid + 1;
		else
			en = mid - 1;
	}
}