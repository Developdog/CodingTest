#include <iostream>
#include <vector>
#include <string>

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
		int total, coin[8] = { 50000, 10000, 5000, 1000, 500, 100, 50, 10 }, N;
		cin >> total;

		cout << "#" << test_case << " " << endl;
		for (int i = 0; i < 8; i++)
		{
			N = 1;
			for (;;)
			{
				if (coin[i] * N > total)
				{
					cout << N-1 << " ";
					total -= coin[i] * (N-1);
					break;
				}
				N++;
			}
		}
        cout << "\n";
	}
	return 0;
}