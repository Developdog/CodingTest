#include <iostream>
#include <string>

using namespace std;

int main()
{
	string temp;
	int one = 0, zero = 0;
	bool num; // 1이면 true, 0이면 false

	cin >> temp;

	if (temp[0] == '0')
	{
		num = false;
		zero++;
	}
	else
	{
		num = true;
		one++;
	}

	for (int i = 1; i < temp.size(); i++)
	{
		if (temp[i] == '1' && num == false)
		{
			one++;
			num = true;
		}
		else if (temp[i] == '0' && num == true)
		{
			zero++;
			num = false;
		}
	}

	if (zero > one) cout << one;
	else cout << zero;
}