#include <iostream>
#include <vector>

#define ll long long int

using namespace std;

int main()
{
	ll N, M, temp, max = 0, count = 0;

	cin >> N >> M;

	vector <ll> A(N, 0);

	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		A[i] = temp;
	}

	ll left = 0, right = 0;

	max += A[0];

	while (left <= right && right < N)
	{
		if (max <= M)
		{
			if (max == M) count++;
			max += A[++right];
		}
		else if (max > M)
        {
            max -= A[left++];
            if (left > right && left < N)
            {
                right = left;
                max = A[left];
            }
        }
	}

	cout << count;
	return 0;
}