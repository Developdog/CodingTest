#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct birth
{
	string name;
	int year;
	int month;
	int day;
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int count;

	cin >> count;

	//vector<birth> name(count, { "", 0, 0, 0 });
	//birth initialBirth = { "", 0, 0, 0 };
	birth downBirth = { "", 0, 0, 0 }, upBirth, temp;
	//vector<birth> name (count, initialBirth);

	cin >> downBirth.name;
	cin >> downBirth.day;
	cin >> downBirth.month;
	cin >> downBirth.year;

	upBirth = downBirth;

	for (int i = 0; i < count-1; i++)
	{
		cin >> temp.name;
		cin >> temp.day;
		cin >> temp.month;
		cin >> temp.year;

		if (downBirth.year > temp.year)
		{
			downBirth = temp;
		}
		else if (downBirth.year == temp.year)
		{
			if (downBirth.month > temp.month)
			{
				downBirth = temp;
			}
			else if (downBirth.month == temp.month)
			{
				if (downBirth.day > temp.day)
				{
					downBirth = temp;
				}
			}
		}

		if (upBirth.year < temp.year)
		{
			upBirth = temp;
		}
		else if (upBirth.year == temp.year)
		{
			if (upBirth.month < temp.month)
			{
				upBirth = temp;
			}
			else if (upBirth.month == temp.month)
			{
				if (upBirth.day < temp.day)
				{
					upBirth = temp;
				}
			}
		}
	}

	cout << upBirth.name << "\n";
	cout << downBirth.name;
}