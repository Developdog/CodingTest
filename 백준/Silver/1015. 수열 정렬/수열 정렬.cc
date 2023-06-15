#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
	if (a.second == b.second) return a.first < b.first;
	return a.second < b.second;
}

int main()
{
	vector<pair<int, int>> num;

	int temp, count;

	cin >> count;

	for (int i = 0; i < count; i++)
	{
		cin >> temp;
		num.push_back(make_pair(i, temp));
	}

	sort(num.begin(), num.end(), compare);

	for (int i = 0; i < count; i++)
	{
		num[i].second = i;
	}

	sort(num.begin(), num.end());

	for (auto loop : num)
	{
		cout << loop.second << " ";
	}
}