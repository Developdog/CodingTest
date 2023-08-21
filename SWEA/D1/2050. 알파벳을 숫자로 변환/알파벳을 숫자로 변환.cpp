#include <iostream>
#include <string>

using namespace std;

int main()
{
    string temp;
    
    cin >> temp;
    
   	for(int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] - 'A' + 1 << " ";
    }
}