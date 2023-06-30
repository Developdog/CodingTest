#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int count, temp;
	cin >> count;
	vector<int> arr(count, 0);

	for (int i = 0; i < count; i++)
	{
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end());

	arr.erase(unique(arr.begin(), arr.end()), arr.end());

	for (auto loop : arr) cout << loop << " ";
}