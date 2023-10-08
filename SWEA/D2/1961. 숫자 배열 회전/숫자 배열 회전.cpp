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

			int n;

			cin >> n;

			vector<int> n_num(n*n, 0);

			for (int i = 0; i < n * n; i++)
			{
				cin >> n_num[i];
			}

			cout << "#" << test_case << "\n";

			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					cout << n_num[n * (n - 1) + i - n * j];
				}

				cout << " ";

				for (int j = 0; j < n; j++)
				{
					cout << n_num[n * (n - i) - 1 - j];
				}

				cout << " ";

				for (int j = 0; j < n; j++)
				{
					cout << n_num[n - (i + 1) + n * j];
				}

				cout << "\n";
			}
		}
		return 0;
	}