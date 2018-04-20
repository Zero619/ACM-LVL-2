#include<iostream>
using namespace std;
int main() {
	long long n, x;
	int c = 0;
	cin >> n >> x;
	for (int i = 1; i <= n; i++)
	{
		if (x%i == 0)
		{
			if (x <= n*i)
				c++;
		}
	}
	cout << c << endl;
}