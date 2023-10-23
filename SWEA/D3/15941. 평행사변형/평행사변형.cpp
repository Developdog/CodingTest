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
        int N;
        cin >> N;
        cout << "#" << test_case << " " << N*N << "\n";
    }
    return 0;
}