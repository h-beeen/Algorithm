#include <iostream> // Counting Sort
#include <vector>
#include <algorithm>

using namespace std;

int main (void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int arr[2000002] = {};
    int a, num;
    cin >> a;
    
    for(int i = 0; i < a; i++)
    {
        cin >> num;
        arr[i] = num;
    }

    sort(arr, arr + a);

    for(int i = 0; i < a; i++)
        cout << arr[i] << '\n';
}