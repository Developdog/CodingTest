#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int count;

	cin >> count;

	vector<vector<int>> COUNTBA(46, vector<int>(2, 0));

	COUNTBA[0][0] = 0;
	COUNTBA[0][1] = 1;

	for (int i = 1; i < 46; i++)
	{
		COUNTBA[i][0] = COUNTBA[i - 1][1];
		COUNTBA[i][1] = COUNTBA[i - 1][0] + COUNTBA[i - 1][1];
	}

	cout << COUNTBA[count - 1][0] << " " << COUNTBA[count - 1][1];

	return 0;
}