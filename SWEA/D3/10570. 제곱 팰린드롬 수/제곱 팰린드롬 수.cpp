#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

using ll = long long;

int main(int argc, char** argv)
{
    int test_case, T;
    cin >> T;

    for (test_case = 1; test_case <= T; ++test_case)
    {
        ll A, B, num, ans = 0;
        double num_d;
        string temp;
        cin >> A >> B;

        for (ll i = A; i <= B; i++)
        {
            temp = to_string(i);
            reverse(temp.begin(), temp.end());
            // 뒤집은 값과 같은 수인지 확인한다.
            if (i == stoi(temp) && int(sqrt(i)) == sqrt(i))
            {
                // 루트를 해줬을 경우 소수점이 있는지 없는지 확인한다.
                num = sqrt(i);
                temp = to_string(num);
                reverse(temp.begin(), temp.end());
                if (num == stoi(temp))
                {
                    ans++;
                }
            }
        }
        cout << "#" << test_case << " " << ans << endl;
    }
    return 0;
}