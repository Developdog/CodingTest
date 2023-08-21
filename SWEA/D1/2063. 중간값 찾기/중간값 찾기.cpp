#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int count;
    cin >> count;
	vector<int> num(count, 0);
    
    for(int i = 0; i < count; i++)
    {
    	cin >> num[i];   
    }
    
    sort(num.begin(), num.end());
    cout << num[count/2];
}