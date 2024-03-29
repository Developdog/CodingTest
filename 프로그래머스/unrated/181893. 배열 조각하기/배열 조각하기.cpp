#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    vector<int> answer;
    
    for(int i = 0; i < query.size(); i++)
    {
        if(i % 2 == 0)
        {
             arr.erase(arr.begin() + query[i] + 1, arr.begin() + arr.size());
        }
        else
        {
            arr.erase(arr.begin(), arr.begin() + query[i]);
        }
    }
    
    return arr;
}