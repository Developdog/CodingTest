#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    
    for(int i = -100; i <= 1000; i++)
    {
        int temp = 0;
        for(int j = i; j < i + num; j++)
        {
            temp += j;
        }
        if(temp == total)
        {
            for(int j = i; j < i + num; j++)
            {
                answer.push_back(j);
            }
            break;
        }
    }
    
    return answer;
}