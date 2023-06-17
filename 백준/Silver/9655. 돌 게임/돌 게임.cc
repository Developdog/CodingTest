#include <iostream>

using namespace std;

int main()
{
	int i, count = 0;
	cin >> i;
	count = i / 3 + i % 3;

	if (count % 2 == 0) cout << "CY";
	else cout << "SK";
}