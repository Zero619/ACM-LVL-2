#include<iostream>
using namespace std;
	int arr[101];
int main() {

	int a1, a2, a3, b1, b2, b3;
	cin >> a1 >> a2 >> a3;
	cin >> b1 >> b2 >> b3;
	int sum1, sum2;
	if ((a1 + a2 + a3) % 5 == 0)
		sum1 = (a1 + a2 + a3) / 5;
	else
		sum1 = (a1 + a2 + a3) / 5 + 1;
	if ((b1 + b2 + b3) % 10 == 0)
		sum2 = (b1 + b2 + b3) / 10;
	else
		sum2 = (b1 + b2 + b3) / 10 + 1;
	int sum3 = sum1 + sum2;

	int n;
	cin >> n;
	if (sum3 > n)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
}