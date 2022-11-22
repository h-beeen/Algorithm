#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> dp;
vector<bool> mal(10, false);

bool check(int now)
{
    string s = to_string(now);
    for(int i = 0; i < s.length(); i++)
        if(mal[s[i] - 48])
            return false;
    return true;
}

int main(void)
{
    int n, c, t;
    cin >> n >> c;

    for(int i = 0; i < c; i++)
	{
        cin >> t;
        mal[t] = true;
    }
    string st = to_string(n);
    int minimum = abs(n - 100);
    for(int i = 0; i <= 1000000; i++)
	{
        if(check(i))
		{
            int t = abs(n - i) + to_string(i).length();
            minimum = min(minimum,t);
        }
    }
    cout << minimum <<endl;
    return (0);
    {

    }
}