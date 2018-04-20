#include<iostream>
#include<string>
	int arr[26];
using namespace std;
void str(string &n) {
	for (int i = 0; i < n.size(); i++)
	{
		if (n[i] > 64 && n[i] < 91)
			n[i] += 32;
	}
}
int main(){
	int N;
	cin >> N;
	string s;
	cin >> s;
	str(s);
	for (int i = 0; i < N; i++)
	{
		arr[s[i] - 'a'] = 1;

	}
		int C=0;
	for (int i = 0; i < 26; i++)
	{
		if (arr[i] == 0)
		{
			C = 1;
			break;
		}
	}
	if (C == 1)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;

		

}