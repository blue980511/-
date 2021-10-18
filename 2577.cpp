#include <iostream>
#include <string>
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
		switch (number[10])
		{
		case 1:
			number[1]++;
			break;
		case 2:
			number[2]++;
			break;
		case 3:
			number[3]++;
			break;
		case 4:
			number[4]++;
			break;
		case 5:
			number[5]++;
			break;
		case 6:
			number[6]++;
			break;
		case 7:
			number[7]++;
			break;
		case 8:
			number[8]++;
			break;
		case 9:
			number[9]++;
			break;
		default:
			number[0]++;
			break;
		}
	}
	for (int i = 0; i < 10; i++)
		cout << number[i] << endl;
}