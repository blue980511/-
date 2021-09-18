#include <iostream>
using namespace std;

int main()
{
	int peace[6];

	for (int i = 0; i < 6; i++)
		cin >> peace[i];

	for (int i = 0; i < 2; i++)
	{
		if (peace[i] == 1)
			peace[i] = 0;
		else
			peace[i] = 1 - peace[i];
	}
	for (int i = 2; i < 5; i++)
	{
		if (peace[i] == 2)
			peace[i] = 0;
		else
			peace[i] = 2 - peace[i];
	}
	if (peace[5] == 8)
		peace[5] = 0;
	else
		peace[5] = 8 - peace[5];
	for (int i = 0; i < 6; i++)
		cout << peace[i] << " ";
}