#include <iostream>
#include <vector>
using namespace std;
string s;
int alph[26];
int hol_cnt, val_cnt = 0;
char hol_val;
vector <char> res;

int main (void)
{
	cin >> s;
	for(int i = 0; i < s.length(); i++)
		alph[s[i] - 65]++;

	for(int i = 0; i < 26; i++)
		if(alph[i] % 2 == 1)
			hol_cnt++;

	if(hol_cnt > 1) // 홀수개인 개수가 2개 이상이라면
	{
		cout << "I'm Sorry Hansoo";
		return 0;
	}
	
	for(int i = 0; i < 26; i++)
		for(int j = 0; j < alph[i] / 2; j++)
			cout << (char) (i + 'A');

	for(int i = 0; i < 26; i++)
		if(alph[i] % 2)
			cout << (char) (i + 'A');
		
	for(int i = 25; i >= 0; i--)
		for(int j = 0; j < alph[i] / 2; j++)
			cout << (char) (i + 'A');
}