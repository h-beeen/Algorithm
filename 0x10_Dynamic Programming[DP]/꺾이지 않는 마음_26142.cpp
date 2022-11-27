#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

unsigned long n, temp_a, temp_b;
unsigned long day[10005], dr_len[10005], res[10005];

int main (void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
	for(int i = 0; i < n; i++)
		cin >> day[i] >> dr_len[i];

	sort(dr_len, dr_len + n, greater<int>());
	res[0] = dr_len[0];
	for(int i = 1; i < n; i++)
	{
		res[i] = res[i-1] + day[i-1] + dr_len[i];
		day[i] += day[i-1];
	}

	for(int i = 0; i < n; i++)
		cout << '\n' << res[i];
}