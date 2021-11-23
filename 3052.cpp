#include <iostream>
#include <vector>
#include <set>
#define endl "\n"
using namespace std;

auto count_distinct(const vector<int>& v) 
{
	return set<int>(v.cbegin(), v.cend()).size();
}

int main()
{
	vector<int> A(10);
	for (int i = 0; i < 10; i++)
	{
		cin >> A[i];
		A[i] %= 42;
	}
	cout << count_distinct(A);
}