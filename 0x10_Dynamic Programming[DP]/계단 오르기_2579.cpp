#include <iostream>
#include <algorithm>
using namespace std;

int d[305][3];
int point[305];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n;
    for(int i = 1; i <=n; i++)
    {
        cin >> k;
        point[i] = k;   // point[i]에 input값 저장
    }

    d[1][1] = point[1];
    d[1][2] = 0;
    d[2][1] = point[2];
    d[2][2] = point[1] + point[2];
}