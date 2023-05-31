#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0;
    int dice[7] = {0};
    
    int four = 0, three = 0, two = 0, one = 0;
    
    dice[a]++;
    dice[b]++;
    dice[c]++;
    dice[d]++;
        
    for(int i = 0; i < 7; i++)
    {
        if(dice[i] == 4) four++;
        if(dice[i] == 3) three++;
        if(dice[i] == 2) two++;
        if(dice[i] == 1) one++;
    }
    
    if(four == 1)
    {
        for(int i = 0; i < 7; i++)
        {
            if(dice[i] == 4) answer = 1111 * i;
        }
    }
    else if(three == 1)
    {
        int temp1 = 0, temp2 = 0;
        for(int i = 0; i < 7; i++)
        {
            if(dice[i] == 3) temp1 = i;
            if(dice[i] == 1) temp2 = i;
        }
        answer = (10 * temp1 + temp2) * (10 * temp1 + temp2);
    }
    else if(two == 2)
    {
        int temp1 = 0, temp2 = 0;
        bool check = true;
        for(int i = 0; i < 7; i++)
        {
            if(dice[i] == 2 && check) 
            {
                temp1 = i;
                check = false;
            }
            if(dice[i] == 2) temp2 = i;
        }
        answer = (temp1 + temp2) * abs(temp1 - temp2);
    }
    else if(two == 1)
    {
        int temp1 = 0, temp2 = 0;
        bool check = true;
        for(int i = 0; i < 7; i++)
        {
            if(dice[i] == 1 && check) 
            {
                temp1 = i;
                check = false;
            }
            if(dice[i] == 1) temp2 = i;
        }
        answer = temp1 * temp2;
    }
    else
    {
        for(int i = 0; i < 7; i++)
        {
            if(dice[i] == 1)
            {
                answer = i;
                break;
            }
        }
    }
    
    return answer;
}