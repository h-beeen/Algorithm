#include <iostream>
#include <vector>

using namespace std;


int main(void)
{
    int n, k, res[1005];
    int outp = 0;

    vector <int> d;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> k;
        d.push_back(k);
    }

    sort(d.begin(), d.end());
    res[0] = d[0];

    for(int i = 1; i < n; i++)  // DP Logic
        res[i] = res[i-1] + d[i]; // 누적 합 계산 (i번째 사람의 필요 시간 DP)

    for(int i = 0; i < n; i++) // 전체 사람이 필요한 시간 총합 계산 Logic
        outp += res[i]; 
        
    cout << outp;
}