#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool compare(vector<int> a, vector<int> b)
{
	if (a[1] == b[1])
	{
		if (a[2] == b[2])
		{
			return a[3] > b[3];
		}
		else return a[2] > b[2];
	}
	else return a[1] > b[1];
}

int main()
{
	int count, findrank, temp;

	cin >> count >> findrank;

	vector<vector<int>> rank(count, vector<int>(5, 0));

	for (int j = 0; j < count; j++)
	{
		for (int i = 0; i < 4; i++)
		{
			cin >> rank[j][i];
		}
	}

	sort(rank.begin(), rank.end(), compare);

	rank[0][4] = 1;
	if (rank[0][4] == findrank)
	{
		cout << 1;
		return 0;
	}

	for (int i = 1; i < count; i++)
	{
		if (rank[i-1][1] == rank[i][1] && rank[i - 1][2] == rank[i][2] && rank[i - 1][3] == rank[i][3])
		{
			rank[i][4] = rank[i - 1][4];
		}
		else rank[i][4] = rank[i - 1][4]+1;

		if (rank[i][0] == findrank)
		{
			cout << rank[i][4];
			break;
		}
	}

	return 0;
}	