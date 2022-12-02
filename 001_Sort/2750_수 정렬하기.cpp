#include <iostream>
using namespace std;

int a, num;
int arr[1000005];

int main (void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a;
    
    for(int i = 0; i < a; i++)
    {
        cin >> num;
        arr[i] = num;
    }

    int temp;
    for(int i = 0; i < a; i++)
    {
        for(int j = i + 1; j < a; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i = 0; i < a; i++)
        cout << arr[i] << '\n';
}