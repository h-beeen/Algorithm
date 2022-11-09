#include <iostream>
using namespace std;

int n, total, res, cnt, k, t[10];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    cin >> n >> total;

    for(int i = 0; i < n; i++)
        cin >> t[i];

    for(int i = n-1; i >= 0; i--)
    {
        if(total >= t[i])
        {
            cnt = cnt + (total/t[i]);
            total = total % t[i];
        }
    }  
    cout << cnt;
}