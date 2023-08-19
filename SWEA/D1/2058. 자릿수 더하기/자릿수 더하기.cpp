#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i, answer = 0;
    string temp;

    cin >> i;
    temp = to_string(i);
    for (int i = 0; i < temp.size(); i++) answer += temp[i] - '0';

    cout << answer;
}