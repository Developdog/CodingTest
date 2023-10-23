#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
    int test_case;
    int T = 10;
    cin >> T;

    for (test_case = 1; test_case <= T; ++test_case)
    {
        int A, B;
        cin >> A >> B;

        cout << "#" << test_case << " ";
        
        if (A >= 10 || B >= 10) cout << -1;
        else cout << A * B;

        cout << endl;
    }
    return 0;
}