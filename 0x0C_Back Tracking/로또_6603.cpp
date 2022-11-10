#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[30]; // 인덱스
int num[30]; // 실제 입력받은 배열
bool isused[30];

void func(int k){
  if(k == 6){
    bool flag = true;
    int tmp = 50;
    for(int i = 0; i < 6; i++){
      if(tmp > num[arr[i]])
        flag = false;
      tmp = num[arr[i]];
    }

    if(flag){
      for(int i = 0; i < 6; i++)
        cout << num[arr[i]] << " ";
      cout << "\n";
    }
    return;
  }
  for(int i = 0; i < n; i++){
    if(!isused[i]){
      arr[k] = i;
      isused[i] = 1;
      func(k+1);
      isused[i] = 0;
    }
  }
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  while(1){
    cin >> n;
    if(n == 0) break;
    for(int i = 0; i < n; i++)
      cin >> num[i];
    sort(num, num+n);
    func(0);
    cout << "\n";

    for(int i = 0; i < n; i++)
    {
        num[i] = 0;
        arr[i] = 0;
    }
  }
}