#include <iostream>
using namespace std;

int n, v, cnt;
int m[102];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> m[i];
    }
    cin >> v;
    cnt = 0;
    for(int i = 0; i < n; i++)
        if(m[i] == v)    cnt++;
    cout << cnt;
}