#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> l1;	// unique value
vector <int> l2;	// input value
int n, temp;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> temp;
		l1.push_back(temp);
		l2.push_back(temp);
	}
	
	sort(l1.begin(), l1.end());
	l1.erase(unique(l1.begin(), l1.end()), l1.end());

	for(int i = 0; i < n; i++)
		cout << lower_bound(l1.begin(), l1.end(), l2[i]) - l1.begin() << ' ';

}