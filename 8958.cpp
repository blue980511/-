#include <iostream>
#define endl "\n"
using namespace std;

int main()
{
	int problem_num;
	cin >> problem_num;
	string answer;
	int O = 0;
	int sum = 0;
	for (int j = 0; j < problem_num; j++)
	{
		cin >> answer;
		for (int i = 0; i < answer.length(); i++)
		{
			if (answer[i] == 'O')
				sum += ++O;
			else if (answer[i] == 'X')
				O = 0;
		}
		cout << sum << endl;
		O = 0;
		sum = 0;
	}
}