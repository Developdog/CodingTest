#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int test_case;
    int T;
    cin >> T;

    for (test_case = 1; test_case <= T; ++test_case)
    {
        string num;
        char ch = '0';
        int ans = 0;

        cin >> num;

        for (int i = 0; i < num.size(); i++)
        {
            if (ch != num[i])
            {
                ans++;
                ch = num[i];
            }
        }
        cout << "#" << test_case << " " << ans << endl;
    }
    return 0;
}