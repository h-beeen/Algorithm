#include <iostream>
#include <vector>
using namespace std;

int n, res;
int a[52], b[52];

int main(void)
{
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int j = 0; j < n; j++)
        cin >> b[j];

    sort(a, a+n);
    sort(b, b+n);
    reverse(b, b+n);

    for(int i = 0; i < n; i++)
        res = res + (a[i] * b[i]);
    cout << res;
}