#include <string>
#include <vector>
#include <sstream>
#include <map>
#include <algorithm>

using namespace std;

int cmp(const pair <int, int>& a, const pair <int, int>& b)
{
    if(a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

vector<int> solution(string s) {
    vector <int> answer;
    map <int, int> num;
    string temp = "";
    
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 48 && s[i] <= 57)
        {
            temp = temp + s[i];
        }
        else
        {
            if(temp.size() > 0) 
            {
                num[stoi(temp)]++;
                temp = "";
            }
        }
    }
    
    vector <pair<int, int>> numsort(num.begin(), num.end());
    sort(numsort.begin(), numsort.end(), cmp);
    
    for(auto loop : numsort)
    {
        answer.push_back(loop.first);
    }
    
    return answer;
}