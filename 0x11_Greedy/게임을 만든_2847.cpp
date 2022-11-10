#include <iostream>
#include <algorithm>
using namespace std;

int n, k[105], cnt;
int main(void)
{
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> k[i];

    reverse(k, k+n);        // 배열을 뒤집어 ex 5, 3, 2, 1 순 정렬할 예정인데

    for(int i = 1; i < n; i++)  // 전체 배열을 검사하되
    {
        while(k[i] >= k[i-1])   // 내 이전항보다는 작아야하니, 같거나 크다면 While
        {
            cnt++;
            k[i]--;
        }
    }
    cout << cnt;
}