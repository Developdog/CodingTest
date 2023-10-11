#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

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
		string score[10] = { "A+", "A0", "A-", "B+", "B0", "B-", "C+", "C0", "C-", "D0" };
		int N, K, count = 0;
		double n1, n2, n3;

		cin >> N >> K;
		vector<double> student(N, 0);

		for (int i = 0; i < N; i++)
		{
			cin >> n1 >> n2 >> n3;
			student[i] = n1 * 0.35 + n2 * 0.45 + n3 * 0.2;
		}

		for (int i = 0; i < N; i++)
		{
			if (student[K - 1] < student[i]) count++;
		}

		cout << "#" << test_case << " " << score[count / (N / 10)] << endl;
	}
	return 0;
}