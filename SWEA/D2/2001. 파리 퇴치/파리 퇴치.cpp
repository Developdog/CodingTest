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
		int N, M, answer = 0, temp;

		cin >> N >> M;

		vector<vector<int>> N_sq(N, vector<int>(N, 0));

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				cin >> N_sq[i][j];
			}
		}


		for (int i = 0; i <= N - M; i++)
		{
			for (int j = 0; j <= N - M; j++)
			{
				temp = 0;
				for (int k = 0; k < M; k++)
				{
					for (int l = 0; l < M; l++)
					{
						temp += N_sq[k+i][l+j];
					}
				}
				if (answer < temp) answer = temp;
			}
		}

		cout << "#" << test_case << " " << answer << "\n";
	}
	return 0;
}