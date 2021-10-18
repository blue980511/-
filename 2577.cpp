#include <iostream>
using namespace std;
int main()
{
	int A, B, C;
	cin >> A >> B >> C;
	int mul = A * B * C;
	int number[11] = { 0 };
	while (mul != 0)
	{
		number[10] = mul % 10;
		mul /= 10;
        number[number[10]]++;
	}
	for (int i = 0; i < 10; i++)
		cout << number[i] << endl;
}
