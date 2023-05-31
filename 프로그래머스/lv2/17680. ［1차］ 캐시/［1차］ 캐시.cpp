#include <string>
#include <vector>

using namespace std;

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    vector <string> temp;

        if (cacheSize == 0) return cities.size() * 5;

        for (int i = 0; i < cities.size(); i++)
        {
            for (int j = 0; j < cities[i].size(); j++)
            {
                cities[i][j] = tolower(cities[i][j]);
            }
        } // 모든 문자 소문자로

        for (auto loop : cities)
        {
            for (int i = 0;; i++)
            {
                if (temp.empty()) // 비어있을 경우 첫 번째 값 넣기
                {
                    temp.push_back(loop);
                    answer += 5;
                    break;
                }
                if (loop == temp[i]) // 배열안에 값이 있을 경우 앞쪽으로 당겨오기
                {
                    temp.erase(temp.begin() + i);
                    temp.push_back(loop);
                    answer++;
                    break;
                }
                if (i == cacheSize - 1) // 캐쉬 사이즈가 꽉 찼을 경우
                {
                    temp.erase(temp.begin());
                    temp.push_back(loop);
                    answer += 5;
                    break;
                }
                if (temp.size() < cacheSize && temp.size() == i+1) // 캐쉬 사이즈보다 값이 작을 경우 채워넣기, 단 temp 배열의 끝에 와야한다.
                {
                    temp.push_back(loop);
                    answer += 5;
                    break;
                }
            }
        }
    
    return answer;
}