#include <iostream>
#include <queue>
using namespace std;

long long n, k, a, temp, res; 
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    priority_queue <long long, vector<long long>, greater<long long> > q; // 우선순위 큐 내림차순 정렬 정의
    cin >> n >> k;

    for(int i = 0 ; i < n; i++)
    {
        cin >> temp;
        q.push(temp);
    }

    for(int i = 0; i < k; i++)
    {
        a = q.top();
        q.pop();
        a += q.top();
        q.pop();
        
        q.push(a);  // switch small num 1
        q.push(a);  // switch small num 2
    }

   for(int i = 0; i < n; i++)
   {
       res += q.top();
       q.pop();
   }
   cout << res;
}