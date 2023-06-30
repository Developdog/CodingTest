#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isEqual(const pair<string, double>& element, string temp)
{
	return element.first == temp;
}

int main()
{
	vector<pair<string, double>> Credit;
	string temp;
	double num, answer = 0, count = 0;

	Credit.push_back(make_pair("A+", 4.5));
	Credit.push_back(make_pair("A0", 4.0));
	Credit.push_back(make_pair("B+", 3.5));
	Credit.push_back(make_pair("B0", 3.0));
	Credit.push_back(make_pair("C+", 2.5));
	Credit.push_back(make_pair("C0", 2.0));
	Credit.push_back(make_pair("D+", 1.5));
	Credit.push_back(make_pair("D0", 1.0));
	Credit.push_back(make_pair("F", 0.0));

	for (int i = 0; i < 20; i++)
	{
		cin >> temp;
		cin >> num >> temp;
		if (temp != "P")
		{
			for (auto loop : Credit)
			{
				if (loop.first == temp)
				{
					answer += loop.second * num;
					break;
				}
			}
			count += num;
		}
	}

	cout << fixed;
	cout.precision(6);
	cout << answer/count << endl;

	return 0;
}