#include <iostream>
#include <string>
#include <vector>

using namespace std;

using ll = long long;

int main(int argc, char** argv)
{
    int test_case, T;
    cin >> T;

    for (test_case = 1; test_case <= T; ++test_case)
    {
        string arr;
        cin >> arr;
        int up = 1, down = 1;

        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == 'L') down = down + up;
            else up = up + down;
        }
        cout << "#" << test_case << " " << up << " " << down << endl;
    }
    return 0;
}