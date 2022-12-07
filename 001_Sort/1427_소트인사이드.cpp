#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string s;
vector <char> a;
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> s;
	for(int i = 0; i < s.size(); i++)
		a.push_back(s[i]);
	
	sort(a.begin(), a.end(), greater <char>());

	for(int i = 0; i < s.size(); i++)
		cout << a[i];
}