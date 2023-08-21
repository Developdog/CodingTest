#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    int temp;
    cin >> temp;
    
    for(int i = 0; i <= temp; i++)
    {
		cout << pow(2, i) << " ";
    }
}