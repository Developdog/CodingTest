#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(string s) 
{
    int answer = 0;
    queue <char> temp, test;
    vector <char> col_check;
    int A = 0, B = 0, C = 0;

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '(') A++;
        else if(s[i] == ')') A--;
        else if(s[i] == '[') B++;
        else if(s[i] == ']') B--;
        else if(s[i] == '{') C++;
        else if(s[i] == '}') C--;
    }

    if(A != 0 || B != 0 || C != 0)
    {
        return 0;
    }
    //짝 맞는저 전부 확인
    for(int i = 0; i < s.size(); i++)
    {
        temp.push(s[i]);
    }
    //큐에 값을 넣어서 계산
    for(int j = 0; j < s.size(); j++)
    {
        test = temp;
        col_check.clear();
        A = 0;
        B = 0;
        C = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(test.front() == '(') 
            {
                A++;
                col_check.push_back('(');
            }
            else if(test.front() == ')') 
            {
                if(A <= 0 || col_check.back() != '(') break;
                else 
                {
                    A--;
                    col_check.pop_back();
                }
            }
            if(test.front() == '[') 
            {
                B++;
                col_check.push_back('[');
            }
            else if(test.front() == ']') 
            {
                if(B <= 0 || col_check.back() != '[') break;
                else 
                {
                    B--;
                    col_check.pop_back();
                }
            }
            if(test.front() == '{') 
            {
                C++;
                col_check.push_back('{');
            }
            else if(test.front() == '}') 
            {
                if(C <= 0 || col_check.back() != '{') break;
                else 
                {
                    C--;
                    col_check.pop_back();
                }
            }
            if(s.size() - 1 == i) answer++;
            test.pop();

        }
        temp.push(temp.front());
        temp.pop();
    }

    return answer;
}
