#include<iostream>
	int a[100001];
	int fa[100001];
	int s[100001];
using namespace std;
int main() {
	int N;
	int m,l;
	cin >> N;
	cin >> m;
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}
	for (int i = N-1; i >= 0; i--)
	{	if(fa[a[i]]==0)
		s[i] = s[i + 1] + 1;
	    else
		s[i] = s[i + 1] + 0;
		fa[a[i]]=1;
	}
	for (int i = 0; i < m; i++)
	{
		cin >> l;
		l--;
		cout << s[l] << endl;
	}
}