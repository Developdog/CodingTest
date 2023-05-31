#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string expression, temp = "";
	int answer = 0;
	bool minus = false;

	cin >> expression;

	for (int i = 0; i < expression.size(); i++)
	{
		if ('0' <= expression[i] && '9' >= expression[i])
		{
			temp += expression[i];
		}
		else // 부호를 만났을 경우
		{
			if (expression[i] == '-' || expression[i] == '+')
			{
				if(minus == true) answer -= stoi(temp);
				else answer += stoi(temp);
				temp = "";
			}
			if (expression[i] == '-')
			{
				minus = true;
			}
		}	
		if (expression.size() - 1 == i)
		{
			if (minus == false) answer += stoi(temp);
			else answer -= stoi(temp);
		}
	}
	cout << answer;
}