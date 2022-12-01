#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> vec;
int n, k, temp, en;
int flag = 0;
int res = 2147483647;

int	main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> k;

	for(int i = 0; i < n; i++)
	{
		cin >> temp;
		vec.push_back(temp);
	}

	int st, en;
	int temp2;
	for(int i = 0; i < n; i++)
	{
		if(vec[i] == k) // if vec[i] = target value;
		{
			flag = 1;
			cout << '1';
			break;
		}
		st = i;
		en = i + 1;
		temp2 = vec[st] + vec[en];
		while(vec[en] && temp2 < k)
		{
			en++;
			temp2 += vec[en];
		}
		if(temp2 >= k)
		{
			flag= 2;
			res = min(res, (en - st + 1));
		}
	}
	if(!flag) cout << '0';
	else if(flag == 2) cout << res;
}