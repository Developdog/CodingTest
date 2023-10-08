#include <iostream>
#include <cmath>

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
		int n, answer = 0, answer_num = 100000, temp;

		cin >> n;

		for (int i = 0; i < n; i++)
		{
			cin >> temp;
			temp = abs(temp);

			if (temp < answer_num)
			{
				answer_num = temp;
				answer = 1;
			}
			else if (temp == answer_num) answer++;
		}

		cout << "#" << test_case << " " << answer_num << " " << answer << "\n";
	}
	return 0;
}