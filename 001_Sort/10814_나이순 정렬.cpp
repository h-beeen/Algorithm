#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

typedef tuple <int, string, int> ids;
ids temp4;
int n, temp;
string temp2;
vector <ids> v;

bool cmp(ids a, ids b)
{
	if(get<0>(a) == get<0>(b))
		return get<2>(a) < get<2>(b);
	return get<0>(a) < get<0>(b);
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> temp >> temp2;
		v.push_back(make_tuple(temp, temp2, i));
	}

	stable_sort(v.begin(), v.end(), cmp);
	
	for(int i = 0; i < n; i++)
		cout << get<0>(v[i]) << ' ' << get<1>(v[i]) << '\n';
}