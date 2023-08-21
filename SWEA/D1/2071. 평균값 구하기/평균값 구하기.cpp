#include<iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

int main()
{
	int t;
    cin >> t;
    
    for(int test_case = 1; test_case <= t; test_case++)
    {
        double answer = 0, temp;
		for(int i = 0; i < 10; i++)
        {
        	cin >> temp;
            answer += temp;
        }
        
        cout << "#" << test_case << " " << round(answer/10) << endl;
    }
    
    return 0;
}