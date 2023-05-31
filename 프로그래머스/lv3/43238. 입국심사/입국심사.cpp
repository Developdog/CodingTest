#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(int n, vector<int> times) {
    long long end, start, middle, answer = 0;
    
    sort(times.begin(), times.end());
    
    start = 1;
    end = (long long)times.back() * n;
    
    while(start <= end)
    {
        long long int total = 0;
        middle = (start + end) / 2;
        for(auto loop : times)
        {
            total += middle / loop;    
        }
        
        if(total >= n) 
        {
            answer = middle;
            end = middle - 1;
        }
        else start = middle + 1;
    }
    return answer;
}