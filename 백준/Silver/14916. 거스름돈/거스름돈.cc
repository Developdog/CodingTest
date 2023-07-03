#include <iostream>

using namespace std;

int main()
{
	int min = NULL, count, cost, five = 1;

	cin >> cost;

	if (cost % 2 == 0) min = cost / 2;

	while (1)
	{
		if (five * 5 > cost) break;
		count = cost - (five * 5);
		if (count % 2 == 0)
		{
			if (min == NULL) min = count / 2 + five;
			else
			{
				if (min > count / 2 + five) min = count / 2 + five;
			}
		}
		five++;
	}
	if (min == NULL) min = -1;

	cout << min;

}