#include<iostream>
using namespace std;
	int arr[101];
int main() {

	int n, a;
	cin >> n >> a;
	a--;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int sum=0;
	sum += arr[a];
	for (int i = 1; i < n; i++)
	{
		if (a - i >= 0 && a - i < n)
		{
			if (a + i >= 0 && a + i < n)
			{
				if (arr[a - i] == 0 ||arr[a + i] == 0)
					continue;
				else
				{
					sum += arr[a + i];
					sum += arr[a - i];
				}
			}
			else
				sum += arr[a - i];

		 }
		else
			if (a + i >= 0 && a + i < n)
				sum += arr[a + i];


	}
	cout << sum << endl;
}