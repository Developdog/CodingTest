#include<iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        int L, U, X, answer;
        cin >> L >> U >> X;
        
        if(L > X) answer = abs(X - L);
        else if(X > U) answer = -1;
        else answer = 0 ;
        
        cout << "#" << test_case << " " << answer << endl;
	}
	return 0;
}