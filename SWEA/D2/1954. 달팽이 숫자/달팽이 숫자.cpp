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
		int x = 1, y = 0, arrow = 1, num = 1, N, numx = 0, numy = 0;

		cin >> N;

		vector<vector<int>> sq(N, vector<int>(N, 0));

		sq[0][0] = num;

		for (int i = 0; i < N - 1; i++)
		{
			numx += x;
			numy += y;
			num++;
			sq[numy][numx] = num;
		}

		for (int i = N - 1; 0 < i; i--)
		{
			for(int k = 0; k < 2; k++)
			{
				if (arrow % 4 == 0) { x = 1; y = 0; }
				else if (arrow % 4 == 1) { x = 0; y = 1; }
				else if (arrow % 4 == 2) { x = -1; y = 0; }
				else if (arrow % 4 == 3) { x = 0; y = -1; }
				for (int j = 0; j < i; j++)
				{
					numx += x;
					numy += y;
					num++;
					sq[numy][numx] = num;
				}
				arrow++;
			}
		}

		cout << "#" << test_case << "\n";
		for (auto loop : sq)
		{
			for (auto t_loop : loop)
			{
				cout << t_loop << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}