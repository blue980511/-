#include <iostream>
using namespace std;
int main()
{
	int N[9];
	for (int i = 0; i < 9; i++)
	{
		cin >> N[i];
	}
	int max;
	if (N[0] < N[1])
		max = N[1];
	else
		max = N[0];
	for (int j = 2; j < 9; j++)
	{
		if (max < N[j])
			max = N[j];
		else
			continue;
	}
	cout << max << endl;
	int number;
	for (int k = 0; k < 9; k++)
	{
		if (max == N[k])
			number = k + 1;
	}
	cout << number;
}