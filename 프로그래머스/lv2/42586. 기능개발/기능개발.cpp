#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    bool finish = false;
    int start = 0, today = 0;
    
    for(int day = 1;; day++)
    {
        if(finish == true) break;
        
        for(int i = start; i < progresses.size(); i++)
        {
            if(progresses[i] >= 100) continue;
            else progresses[i] += speeds[i];
        }
        
        today = 0;
        
        for(int i = start; i < progresses.size(); i++)
        {
            if(progresses[i] >= 100) 
            {
                if(progresses.size() - 1 == i) finish = true;
                today++;
                start++;
            }
            else break; 
        }
        if(today > 0) answer.push_back(today);
    }
    
    return answer;
}