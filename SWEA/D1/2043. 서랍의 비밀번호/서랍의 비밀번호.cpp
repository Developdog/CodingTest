#include <iostream>

using namespace std;

int main()
{
	int temp, temp2;
    
    cin >> temp;
    cin >> temp2;
    
    if(temp > temp2) cout << temp - temp2 + 1;
    else cout << temp2 - temp + 1;
    
    return 0;
}