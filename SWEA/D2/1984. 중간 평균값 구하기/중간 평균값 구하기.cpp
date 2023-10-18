#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
    int test_case;
    int T;
    cin >> T;

    for (test_case = 1; test_case <= T; ++test_case)
    {
        vector<double> num(10, 0);
        double temp, answer = 0;

        for (int i = 0; i < 10; i++)
        {
            cin >> temp;
            num[i] = temp;
        }

        sort(num.begin(), num.end());
        
        for (int i = 1; i <= 8; i++)
        {
            answer += num[i];
        }

        cout << "#" << test_case << " " << (int) round(answer / 8) << endl;
    }
    return 0;
}