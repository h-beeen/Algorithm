#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long n, temp_a, temp_b, temp, k2, k3 = 0;
vector <pair <long long, long long> > dr;
long long res[10005][10005];
long long res2[10005];

bool cmp(pair<long long, long long> a,\
		 pair<long long, long long> b)
{
	if (a.second == b.second)
		return a.first > b.first;
	return a.second > b.second;
}

int main (void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> temp_a >> temp_b;
		dr.push_back(make_pair(temp_a, temp_b));
	}

	stable_sort(dr.begin(), dr.end(), cmp);
	for(int i = 0; i < n; i++)
			res[0][i] = dr[i].second;
	for(int i = 1; i < n; i++)
		for(int j = 0; j < n; j++)
			res[i][j] = res[i-1][j] + dr[j].first;

	cout << res[0][0] << '\n';

	long long k1 = 1;
	while (k1 < n)	// k1 = 1 ~ n-1;
	{
		k2 = 0;		// k2 = 0;
		temp = 0;
		k3 = k1;
		while(k3 >= 0 && k2 < n)
			temp += res[k3--][k2++];
		cout << temp << '\n';
		k1++;
	}

	cout << endl;
	for(int i = 0; i < n; i++) 
	{
		cout << '\n';
		for(int j = 0; j < n; j++)
			cout << res[i][j] << ' ';
	}
}