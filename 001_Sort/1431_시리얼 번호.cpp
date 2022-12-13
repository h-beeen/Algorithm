#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, cnt;
vector <pair <string, int> > v;
string s;

bool cmp(pair <string, int> a, pair <string, int>b)
{
	if(a.first.length() != b.first.length())
		return a.first.length() < b.first.length();

	if(a.second != b.second)
		return a.second < b.second;

	return a.first < b.first;

}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> s;
		cnt = 0;
		for(int i = 0; i < s.length(); i++)
			if(s[i] >= '1' && s[i] <= '9')
				cnt += s[i] - '0';
		v.push_back(make_pair(s, cnt));
	}

	stable_sort(v.begin(), v.end(), cmp);

	for(int i  = 0; i < n; i++)
		cout << v[i].first << '\n';
}