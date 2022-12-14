#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int lst_num, src_num;
map <string, string> m;
string temp1, temp2;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> lst_num >> src_num;
	for(int i = 0; i < lst_num; i++)
	{
		cin >> temp1 >> temp2;
		m[temp1] = temp2;
	}
	
	for(int i = 0; i < src_num; i++)
	{
		cin >> temp1;
		cout << m[temp1] << '\n';
	}
}