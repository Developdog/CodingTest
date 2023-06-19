#include <iostream>
#include <vector>

using namespace std;

#define ll long long int

int main()
{
	int temp = 0;

	vector<ll> fibo(91, 0);

	cin >> temp;

	fibo[0] = 0;
	fibo[1] = 1;

	for (int i = 2; i < 91; i++)
	{
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}

	cout << fibo[temp];
}