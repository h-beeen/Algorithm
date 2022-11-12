#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, tmp1, tmp2;
vector <pair<int, int> > v;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if(a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> tmp1 >> tmp2;
        v.push_back(make_pair(tmp1, tmp2));
    }

    stable_sort(v.begin(), v.end(), cmp);

    // 정렬 테스트 구문
    cout << endl;
    for(int i = 0; i < n; i++)
        cout << v[i].first << ' ' << v[i].second << endl;


    int flag = 0;
    int res = 1;
    for(int i = 0; i < n; i++) // 제일 일찍 끝나는 회의 탐색
    {
        if(v[flag].second <= v[i].first) // 회의가 끝난 직후 시작할 수 있는 회의라면
        {
            flag = i;   // 현 회의 인덱스
            res++;
        }
    }
    cout << res;
}