#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
    int test_case;
    int T;
    cin >> T;

    for (test_case = 1; test_case <= T; ++test_case)
    {
        int A, B;
        cin >> A >> B;
        cout << "#" << test_case << " ";
        cout << (A + B) % 24 << endl;
    }
    return 0;
}