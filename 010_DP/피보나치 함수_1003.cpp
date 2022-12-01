#include <iostream>
#include <algorithm>
using namespace std;

int k;
int fib[42][2];

int	main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    fib[0][0] = 1;
    fib[0][1] = 0;
    fib[1][0] = 0;
    fib[1][1] = 1;

    for(int i = 2; i <= 40; i++)
    {
        fib[i][0] = fib[i-1][0] + fib[i-2][0];
        fib[i][1] = fib[i-1][1] + fib[i-2][1];
    }

    while(n--)
    {
        cin >> k;
        cout << fib[k][0] << ' ' << fib[k][1] << endl; 
    }
}
