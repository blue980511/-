#include <iostream>
using namespace std;
int main()
{
	int a[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
		a[i] *= a[i];
	}
	int sum = 0;
	for (int i = 0; i < 5; i++)
		sum += a[i];
	sum %= 10;
	cout << sum;
}