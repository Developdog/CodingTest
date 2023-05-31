#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    
    map <int, int> counting;
    vector<int> counting_v;
    int temp = 0;
    
    for(auto loop : tangerine)
    {
        counting[loop]++;
    }
    
    for(auto loop : counting)
    {
        counting_v.push_back(loop.second);
    }
    
    sort(counting_v.begin(), counting_v.end());
    
    for(int i = counting_v.size() - 1; i >= 0; i--)
    {
        temp += counting_v[i];
        if(temp >= k)
        {
            return counting_v.size() - i;
        }
    }
    
    return answer;
}