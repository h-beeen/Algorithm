#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, sum_value, min_value, real_value, st, en;
vector <int> res(2);

int main(void)
{
    cin >> n;
    vector <int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    st = 0;                     // 투 포인터 start index
    en = n - 1;                 // 투 포인터 end index 
    min_value = 2147483647;

    sort(arr.begin(), arr.end());

    while(st < en)
    {
        sum_value = arr[st] + arr[en];
        if(min_value > abs(sum_value))
        {
            min_value = abs(sum_value);
            real_value = sum_value;
            res[0] = arr[st];
            res[1] = arr[en];
        }

        if(sum_value == 0)
            break;

        if(sum_value < 0)
            st++;
        else
            en--;
    }
    cout << real_value;
}