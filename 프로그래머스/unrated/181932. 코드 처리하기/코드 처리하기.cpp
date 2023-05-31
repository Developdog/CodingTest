#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    int mode = 0;
    
    for(int idx = 0; idx < code.size(); idx++)
    {
        if(mode == 1)
        {
            if(code[idx] != '1')
            {
                if(idx % 2 != 0) answer += code[idx];
            }
            else mode = 0;
        }
        else
        {
            if(code[idx] != '1')
            {
                if(idx % 2 == 0) answer += code[idx];
            }
            else mode = 1;
        }
    }
    
    if(answer.empty()) answer = "EMPTY";
    
    return answer;
}