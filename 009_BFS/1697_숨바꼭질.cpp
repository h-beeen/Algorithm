#include <iostream>
#include <queue>
using namespace std;

int N, K, temp, nx2, nx3;
int vis[1000001] = {};
int dx[2] = {1, -1};

int main (void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> K;

    queue <int> q;
    vis[N] = 1;
    q.push(N);

    while(!q.empty() && !vis[K])    // 큐가 비거나, 보드에 visit 시간이 기록될 때 까지
    {
        temp = q.front();         
        q.pop();
        nx3 = temp * 2;
        for(int dir = 0; dir < 2; dir++)
        {
            nx2 = temp + dx[dir];
            if(nx2 < 1000000 && !vis[nx2] && nx2 >= 0)
            {
                q.push(nx2);
                vis[nx2] = vis[temp] + 1;
            }
        }

        if(nx2 < 100000 && !vis[nx3] && nx3 >= 0)
        {
            q.push(nx3);
            vis[nx3] = vis[temp] + 1;
        }
    }
    cout << vis[K]-1;
/*
    for(int i = 0; i < K*2; i++)
        cout << "i = " << i << "일 때, visit 시간" << vis[i] << '\n';
*/

}