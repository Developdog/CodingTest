#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    vector <int> temp;
    int num;
    
    for(int i = 0 ; i < arr1.size(); i++) // 행
    {
        answer.push_back(temp);
        for(int j = 0; j < arr2[0].size(); j++) // 열
        {
            num = 0;
            for(int k = 0; k < arr2.size(); k++)
            {
                num += arr1[i][k] * arr2[k][j];
            }
            answer[i].push_back(num);
        }
    }
    
    return answer;
}