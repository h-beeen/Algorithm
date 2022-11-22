#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector <string> hp;		// hp[0] long, hp[1] false	
vector <string> res;
string k, temp;
int n;
int flag = -1;

bool cmp(string a, string b)
{
	if (a.length() != b.length())
		return a.length() > b.length();
	else
		return a > b;
}

void dfs_search(vector <string> hp, string dest, int srt)
{
	if(srt == hp.size())
	{
		cout << res.size();
		if(res.size() == 0)
			cout << "No solution." << '\n';
		else
			for(int i = 0; i < res.size(); i++)
				cout << res[i] << '\n';
		return;
	}
	for(int i = srt; i <= k.length(); i++)
	{
		if(hp[i][0] == dest[i] && hp[i][hp[i].length()-1] == dest[srt + hp[i].length()-1])
		{
			res[++flag] += hp[i];
			srt += hp[i].length();
			dfs_search(hp, dest, srt);
			break; 
		}
		i++;
	}
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> k >> n;

	for(int i = 0; i < n; i++)
	{
		cin >> temp;
		hp.push_back(temp);
	}

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < hp[i].length(); j++)
		{
			if(hp[i][j] <= 99)			// a, b, c
			{
				hp[i][j] = '2';
				continue;
			}
			else if(hp[i][j] <= 102)	// d, e, f
			{
				hp[i][j] = '3';
				continue;
			}
			else if(hp[i][j] <= 104)		// g, h
			{
				hp[i][j] = '4';
				continue;
			}
			else if(hp[i][j] <= 106)		// i, j
			{
				hp[i][j] = '1';
				continue;
			}
			else if(hp[i][j] <= 108)		// k, l
			{
				hp[i][j] = '5';
				continue;
			}
			else if(hp[i][j] <= 110)		// m, n
			{
				hp[i][j] = '6';
				continue;
			}
			else if(hp[i][j] == 'o' || hp[i][j] == 'q' || hp[i][j] == 'z')
			{
				hp[i][j] = '0';
				continue;
			}
			else if(hp[i][j] == 'p' || hp[i][j] == 'r' || hp[i][j] == 's')
			{
				hp[i][j] = '7';
				continue;
			}
			else if(hp[i][j] == 't' || hp[i][j] == 'u' || hp[i][j] == 'v')
			{
				hp[i][j] = '8';
				continue;
			}
			else if(hp[i][j] == 'x' || hp[i][j] == 'y' || hp[i][j] == 'z')
			{
				hp[i][j] = '9';
				continue;
			}
		}
	}

	sort(hp.begin(), hp.end(), cmp);
	dfs_search(hp, k, 0);
	cout << res.size() << '\n';
}
