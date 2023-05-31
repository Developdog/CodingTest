#include <iostream>
#include <algorithm>

using namespace std;

//int alpha[1000001] = {0};

int main()
{
	int alpha[1000001] = {0};
	int temp;

	cin >> temp;

	for (int i = 2; i <= temp; i++)
	{
		alpha[i] = alpha[i - 1] + 1;

		if (i % 2 == 0) alpha[i] = min(alpha[i], alpha[i / 2] + 1);
		if (i % 3 == 0) alpha[i] = min(alpha[i], alpha[i / 3] + 1);
	}

	cout << alpha[temp];

	return 0;

}