#include <iostream>
#include<algorithm>
	long long aon[100000];
	long long poa1[100000];
	long long poa2[100000];
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> aon[i];
	}
	poa1[0] = aon[0];
	for (int i = 1; i < n; i++)
	{
		poa1[i] = poa1[i - 1] + aon[i];
	}
	sort(aon, aon + n);
	poa2[0] = aon[0];
	for (int i = 1; i < n; i++)
	{
		poa2[i] = poa2[i - 1] + aon[i];
	}
	int m;
	cin >> m;
	int t, l, r;
	for (int i = 0; i < m; i++)
	{
		cin >> t >> l >> r;
		l--;
		r--;
		if (t == 1)
		{
			if (l > 0)
				cout << poa1[r] - poa1[l - 1] << endl;
			else
				cout << poa1[r] << endl;

		}
		else
		{
			if (l > 0)
				cout << poa2[r] - poa2[l - 1] << endl;
			else
				cout << poa2[r] << endl;
		}


	}

	
}