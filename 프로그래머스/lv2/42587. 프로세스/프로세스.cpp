#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    
    for(;;)
    {
            if(*max_element(priorities.begin(), priorities.end()) > priorities[0])
            {
                priorities.push_back(priorities.front());
                priorities.erase(priorities.begin());
                // 맨 앞자리 값을 뒤쪽으로 옮겨줌
                
                if(location == 0) location = priorities.size()-1;
                else location --;
                //만약 location 값이 0인데 뒤쪽으로 가면 뒷자리로 옮겨줌
                //아니면 그냥 앞으로 당겨옴
            }
            // for문을 도는 데 큰게 있을 경우
            
            else
            {
                priorities.erase(priorities.begin());
                // 맨 앞자리 제거
                answer++;
                if(location == 0) break;
                else location--;
            }
    }
    return answer;
}