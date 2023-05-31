#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int temp, count = 0, div;

	cin >> temp;

	count;
	
	for (int i = temp; i > 0; i--)
	{
		div = i;
		for (;;)
		{
			if (div % 5 == 0)
			{
				div = div / 5;
				count++;
			}
			else break;
		}
	}

	cout << count;
}