#include <iostream>
#include <algorithm>
using namespace std;

int n, k, temp, d[502][502], res[502];
int main(void)
{
    cin.tie(0);
    cout.tie(0);

    cin >> n;   // Triangle Count;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cin >> temp;
            d[i][j] = temp;
            cout << "d[" << i << "][" << j << "] = " << d[i][j] << endl;
        }
    }

    res[1] = d[1][1];
    res[2] = max(d[2][1], d[2][2]);


    if(d[2][1] >= d[2][2])
        k = 1;
    else
        k = 2;

    for(int i = 3; i <= n; i++)
    {
        res[i] = max(d[i-1][k], d[i-1][k+1]);
        if(d[i-1][k] >= d[i-1][k])
            k = 1;
        else
            k = 2;
    }

    for(int i = 1; i <= n; i++)
        cout << "res[" << i << "] = " << res[i] << endl;
}
