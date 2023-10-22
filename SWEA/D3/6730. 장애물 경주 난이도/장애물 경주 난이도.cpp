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
        int N, N_num, up = 0, down = 0;
        cin >> N;
        vector<int> num(N, 0);
        for (int i = 0; i < N; i++)
        {
            cin >> num[i];
        }

        for (int i = 0; i < N-1; i++)
        {
            if (num[i] > num[i + 1])
            {
                if (down < num[i] - num[i + 1]) down = num[i] - num[i + 1];
            }
            else if(num[i] < num[i+1])
            {
                if (up < num[i+1] - num[i]) up = num[i+1] - num[i];
            }
        }

        if (up < 0) up = 0;
        if (down < 0) down = 0;

        cout << "#" << test_case << " " << up << " " << down << endl;
    }
    return 0;
}