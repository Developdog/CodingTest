#include<iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
    
    cin>>T;

	for(test_case = 1; test_case <= T; test_case++)
	{
        int temp, answer = 0;
		for(int i = 0; i < 10; i++) 
        {
            cin >> temp;
            if(temp % 2 != 0) answer += temp; 
        }
        
        cout << "#" << test_case << " " << answer << endl;
    }
	return 0;
}