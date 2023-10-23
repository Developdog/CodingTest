#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int test_case;
    int T = 10;
    //cin >> T;

    for (test_case = 1; test_case <= T; ++test_case)
    {
        int N, M, ans, temp;
        
        cin >> temp >> N >> M;
        ans = N;

        for (int i = 0; i < M-1; i++) ans *= N;

        cout << "#" << test_case << " " << ans << endl;
    }
    return 0;
}