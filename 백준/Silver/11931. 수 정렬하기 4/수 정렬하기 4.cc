#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int count;

	cin >> count;

	vector<int> num (count, 0);

	for (int i = 0; i < count; i++)
	{
		cin >> num[i];
	}

	sort(num.begin(), num.end(), greater<>());

	for (auto loop : num)
	{
		cout << loop << "\n";
	}

	return 0;
}