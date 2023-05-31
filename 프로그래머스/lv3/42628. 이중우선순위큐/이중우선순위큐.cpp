#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<string> operations) {
 vector<int> answer(2);
    priority_queue<int, vector<int>, greater<int>> up; //내림차순이라 큰값 위
    priority_queue<int> down; //오름차순이라 작은값 아래
    int count = 0;
    
    for(string temp : operations) {
        // 카운트 값이 0이면 이중우선순위큐 값 전부 제거
        if(!count) {
            while(!up.empty()) up.pop();
            while(!down.empty()) down.pop();
        }
        
        // I일 경우 두 우선순위 큐에 집어넣고 count 값을 올린다.
        if(temp[0] == 'I') {
            down.push(stoi(temp.substr(2)));
            up.push(stoi(temp.substr(2)));
            count++;
        }
        // 앞이 D일 경우
        else {
            // 빈 큐일경우 다음차례로 넘어감
            if(!count) continue;
            
            // 최댓값 삭제
            if(temp[2] == '1') {
                down.pop();
                count--;
            }
            // 최솟값 삭제
            else {
                up.pop();
                count--;
            }
        }
        
    }
    // count가 0이 아니면 큰값 작은값 출력
    if(count) {
        answer[0] = down.top();
        answer[1] = up.top();
    }
    return answer;
}