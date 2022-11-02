#include <iostream>
#include <algorithm>
using namespace std;

int r[1005], g[1005], b[1005];
int real[1005][3]; // R = 0, G = 1, B = 2;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
        cin >> r[i] >> g[i] >> b[i];

    real[1][0] = r[1];
    real[1][1] = g[1];
    real[1][2] = b[1];

    for(int i = 2; i <= n; i++)
    {
        real[i][0] = min(real[i-1][1], real[i][2]) + r[i];
        real[i][1] = min(real[i-1][0], real[i][2]) + g[i];
        real[i][2] = min(real[i-1][0], real[i][1]) + b[i];
    }

    cout << min(real[n][0], real[n][1], real[n][2]);
    return 0;
}