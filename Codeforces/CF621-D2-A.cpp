#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int N, X;
	cin >> N;
	long long S = 0, C = 0;
	long long odd[100000];
	for (int i = 0; i < N; i++)
	{
		cin >> X;
		S = S + X;
		if (X % 2 != 0)
		{
			odd[C] = X;
			C++;
		}
	}
	sort(odd, odd + C);
	if (S % 2 == 0)
		cout << S << endl;
	else
		cout << S - odd[0] << endl;
}