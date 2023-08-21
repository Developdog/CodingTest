#include <iostream>
#include <string>

using namespace std;

int main()
{
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, t;
    
    cin >> t;

    for (int test_case = 1; test_case <= t; test_case++)
    {
        int y, m, d;
        string days;
        bool check = true;
        
        cin >> days;
       	
        y = stoi(days.substr(0, 4));
        m = stoi(days.substr(4, 2));
        d = stoi(days.substr(6, 2));
        
        if(m <= 0 || m > 12) check = false;
        if(d > month[m-1] || d < 0) check = false;
        
        if(!check) cout << "#" << test_case << " " << -1 << endl;
        else cout << "#" << test_case << " " << days.substr(0, 4) << "/" << days.substr(4, 2) << "/" << days.substr(6, 2) << endl;
    }
}