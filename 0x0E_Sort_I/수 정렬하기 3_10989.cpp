#include <iostream>
#include <algorithm>

using namespace std;

int main (void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int arr[10005] = {};
    int a, num = 0;
    cin >> a;
    
    for(int i = 0; i < a; i++)
    {
        cin >> num;
        arr[num]++; // input 3 -> arr[3]++;
    }

    for(int i = 0; i < 10005; i++)
    {
        while(arr[i]--)
            cout << i << '\n';
    }
}