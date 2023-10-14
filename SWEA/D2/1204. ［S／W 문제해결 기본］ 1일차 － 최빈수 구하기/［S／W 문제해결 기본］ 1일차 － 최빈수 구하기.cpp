#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
    int test_case;
    int T;
    cin >> T;

    for (test_case = 1; test_case <= T; ++test_case)
    {
        int temp, score[101] = { 0 }, fre = 0;
        cin >> temp;

        for (int i = 0; i < 1000; i++)
        {
            cin >> temp;
            score[temp]++;
        }

        for (int i = 1; i <= 100; i++)
        {
            if (score[i] > score[fre]) fre = i;
            else if (score[i] == score[fre])
            {
                if (i > fre) fre = i;
            }
        }
        cout << "#" << test_case << " " << fre << endl;
    }
    return 0;
}