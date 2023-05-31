#include <string>
#include <vector>
#include <regex>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;

    for (int i = 0; i < babbling.size(); i++)
    {
        babbling[i] = regex_replace(babbling[i], regex("aya"), "0");
        babbling[i] = regex_replace(babbling[i], regex("ye"), "0");
        babbling[i] = regex_replace(babbling[i], regex("woo"), "0");
        babbling[i] = regex_replace(babbling[i], regex("ma"), "0");
    }
    
    for (int i = 0; i < babbling.size(); i++)
    {
        int temp = 0;
        for (int j = 0; j < babbling[i].size(); j++)
        {
            if (!isdigit(babbling[i][j]))
            {
                break;
            }
            if (j == babbling[i].size() - 1) answer++;
        }
        //cout << answer << endl;
    }

    return answer;
}