#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
using ll = long long;

int main(int argc, char** argv)
{
    int test_case;
    int T;
    cin >> T;

    for (test_case = 1; test_case <= T; ++test_case)
    {
        ll N, temp, h_value = 0, answer = 0;
        cin >> N;
        vector<ll> d_cost(N, 0);
        for (ll i = 0; i < N; i++)
        {
            cin >> temp;
            d_cost[i] = temp;
        }

        for (ll i = N - 1; 0 <= i; i--)
        {
            if (h_value < d_cost[i]) h_value = d_cost[i];
            else answer += h_value - d_cost[i];
        }
        cout << "#" << test_case << " " << answer << "\n";
    }
    return 0;
}