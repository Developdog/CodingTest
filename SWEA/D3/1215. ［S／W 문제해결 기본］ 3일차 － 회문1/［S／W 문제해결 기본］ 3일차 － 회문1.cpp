#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
    int test_case;
    int T = 10;
    //cin >> T;

    for (test_case = 1; test_case <= T; ++test_case)
    {
        string temp, r_temp;
        int num, ans = 0;
        vector<vector<char>> square(8, vector<char>(8, 0));
        
        cin >> num;

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> square[i][j];
            }
        }

        for (int i = 0; i <= 8 - num; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                temp = "";
                for (int k = 0; k < num; k++)
                {
                    temp += square[i+k][j];
                }
                r_temp = temp;
                reverse(r_temp.begin(), r_temp.end());
                if (r_temp == temp) ans++;

                temp = "";
                for (int k = 0; k < num; k++)
                {
                    temp += square[j][i + k];
                }
                r_temp = temp;
                reverse(r_temp.begin(), r_temp.end());
                if (r_temp == temp) ans++;
            }
        }

        cout << "#" << test_case << " " << ans << endl;
    }
    return 0;
}