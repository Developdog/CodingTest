#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
    int test_case;
    int T;
    cin >> T;

    for (test_case = 1; test_case <= T; ++test_case)
    {
        string temp, ans = "";
        cin >> temp;
        for (int i = 0; i < temp.size(); i++)
        {
            if (temp[i] == 'a' || temp[i] == 'e' || temp[i] == 'i' ||
                temp[i] == 'o' || temp[i] == 'u');
            else ans += temp[i];
        }
        cout << "#" << test_case << " " << ans << endl;
    }
    return 0;
}