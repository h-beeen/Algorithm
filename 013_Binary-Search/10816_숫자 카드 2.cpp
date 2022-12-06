#include <iostream>
#include <vector>
using namespace std;

vector <int> card;
int n, m, tmp, target;

int	main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		card.push_back(tmp); 
	}
	sort(card.begin(), card.end());

	cin >> m;
	while (m--)
	{
		cin >> target;
		int a = upper_bound(card.begin(), card.end(), target) - card.begin();
		int b = lower_bound(card.begin(), card.end(), target) - card.begin();
		cout << a - b << ' ';
	}
}