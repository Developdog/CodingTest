#include <iostream>
#include <vector>

using namespace std;

typedef unsigned long long int ll;

int main()
{
	vector<ll> num;

	ll answer = 0, result = 0, temp;

	cin >> result;

	for (int i = 1; i <= result; i++)
	{
		answer += i;
		num.push_back(i);
		if (answer == result)
		{
			cout << num.size();
			return 0;
		}
		else if (answer > result) break;
	}

	while (answer != result)
	{
		temp = num.back();
		num.pop_back();
		answer -= temp;

		for (int i = temp + 1; i <= result; i++)
		{
			if (answer + i > result) break;
			else if (answer + i == result)
			{
				answer += i;
				num.push_back(i);
				break;
			}
		}
	}

	cout << num.size();

	return 0;
}