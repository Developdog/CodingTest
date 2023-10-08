#include <iostream>
#include <vector>

using namespace std;

bool check(int sq_check[9]);

int main(int argc, char** argv)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int sq_check[9] = { 0 };
		bool uniq = false;

		vector<vector<int>> sq(9, vector<int>(9, 0));

		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				cin >> sq[i][j];
			}
		}

		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				sq_check[sq[i][j] - 1]++;
			}
			if (!uniq) uniq = check(sq_check);
		}

		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				sq_check[sq[j][i] - 1]++;
			}
			if (!uniq) uniq = check(sq_check);
		}

		for (int i = 0; i < 9; i += 3)
		{
			for (int j = 0; j < 9; j += 3)
			{
				for (int k = 0; k < 3; k++)
				{
					for (int l = 0; l < 3; l++)
					{
						sq_check[sq[i + k][j + l] - 1]++;
					}
				}
				if (!uniq) uniq = check(sq_check);
			}
		}

		cout << "#" << test_case << " ";
		if (!uniq) cout << "1";
		else cout << "0";
		cout << "\n";
	}
	return 0;
}

bool check(int sq_check[9])
{
	int temp = sq_check[0];
	for (int i = 1; i < 9; i++)
	{
		if (temp != sq_check[i])
		{
			return true;
		}
	}
	return false;
}