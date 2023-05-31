#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> nums)
{
    int answer = 0, t = nums.size()/2, size;
    
    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    size = nums.size();
    if(t > size) answer = size;
    else answer = t;
    
    return answer;
}