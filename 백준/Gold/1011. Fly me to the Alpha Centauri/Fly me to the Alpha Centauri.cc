#include <iostream>
#include <string>
using namespace std;

int main()
{
	long long int count, temp, jumpcount = 0, x, y, l;

	cin >> count;

	for (int i = 0; i < count; i++)
	{
		jumpcount = 0;
		l = 1;
		cin >> x >> y;

		temp = y - x;

		for (;;)
		{
			if (temp <= l * l)
			{
				if (temp != l * l) l--;
				temp -= l * l;
				break;
			}
			l++;
		}

		jumpcount += l * 2 - 1;

		for (;;)
		{
			if (temp == 0) break;
			else if (temp >= l)
			{
				temp -= l;
				jumpcount++;
			}
			else l--;
		}

		cout << jumpcount << endl;

	}

}