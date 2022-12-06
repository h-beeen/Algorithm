#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector <int> a, res;

int na, nb, temp, cnt, res2;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> na >> nb;
	for(int i = 0; i < na; i++)
	{
		cin >> temp;
		a.push_back(temp);
	}

	for(int i = 0; i < nb; i++)
	{
		cin >> temp;
		res.push_back(temp);
	}

	sort(a.begin(), a.end());
	sort(res.begin(), res.end());

	vector <int> ans;
	for(int num : a)
	{
		if(binary_search(res.begin(), res.end(), num))
			continue;
		ans.push_back(num);
	}
	cout << ans.size() << '\n';
	for(int num : ans)
		cout << num << ' ';
}