#include <iostream> // Counting Sort
#include <vector>
using namespace std;

const int MXN = 2000000;
const int HALF = 1000000;
char c = '0';

int main (void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector <int> v(MXN+2);
    int a, num;
    cin >> a;

    while(a--)
    {
        cin >> num;
        v[num+HALF]++;
    }

    for(int i = 0; i < MXN; i++)
    {
        while(v[i]--)
            cout << i - HALF << '\n';
    }
}


// num == -1,000,000 일 때 -> arr_num = 0
// num == 0 일 때 -> arr_num = 1,000,000
// num == 1,000,000 일 때 arr_num = 2,000,000