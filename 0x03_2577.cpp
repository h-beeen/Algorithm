#include <iostream> // Input Output Stream

using namespace std; // namespace에 저장된 std 클래스 사용 선언
					 // using std::cout -> std에 있는 cout라는 특정 함수 사용 선언

int main()
{
	ios::sync_with_stdio(0); // C 표준 stream과 c++ 표준 동기화를 중단

	cin.tie(0); // cin을 cout으로부터 untie
	cout.tie(0); 
					// cin, cout는 scanf, printf에 비해 많이 느리다.
					// 그래서 속도를 가속시키기 위해 활용

	int A, B, C;
	cin >> A >> B >> C; // c++의 scanf + 변수에 해당 값 대입
	int t = A * B * C ;
	int d[10] = {}; // c++ 배열 값 초기화 (Default = 0)
	
	while (t > 0)
	{
		d[t%10]++; // 10으로 나누었을 때 나머지, 즉 끝자리
		t /= 10; // t를 10으로 나눈 몫, 끝 자리 절삭
	}
	
	for(int i = 0; i<10; ++i)
		cout << d[i] << '\n';
}
