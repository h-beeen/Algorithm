#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int TC, n, m;
int temp;

int main (void)
{
    cin >> TC;


    while(TC--)
    {
        cin >> n >> m;
        vector <int> a;
        vector <int> b;

        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }

        for(int i = 0; i < m; i++)
        {
            cin >> temp;
            b.push_back(temp);
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int count = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(a[i] > b[j]) count++;
                else break;
            }
        }
        cout << count << endl;
    }
}
