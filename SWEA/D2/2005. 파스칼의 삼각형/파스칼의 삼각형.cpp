#include <iostream>
#include <vector>

using namespace std;

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
		vector<vector<int>> sq(11, vector<int>(11, 0));
		int N;

		cin >> N;

		sq[0][0] = 1;
		sq[1][0] = 1;
		sq[1][1] = 1;

		for (int i = 2; i <= 10; i++)
		{
			for (int j = 0; j < i; j++)
			{
				if (j == 0) sq[i][j] = 1;
				else if (j == i - 1) sq[i][j] = 1;
				else sq[i][j] = sq[i-1][j-1] + sq[i-1][j];
			}
		}

		cout << "#" << test_case;
		for (int i = 0; i <= N; i++)
		{
			for (int j = 0; j < i; j++)
			{
				cout << sq[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}