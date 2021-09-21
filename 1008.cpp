#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int A, B;
	
	cin >> A >> B;
	cout << setprecision(16) << (double)A / (double)B;
}