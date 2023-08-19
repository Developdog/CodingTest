#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
    	vector<int> num(10, 0);
        for(int j = 0 ; j < 10; j++) cin >> num[j];
        sort(num.begin(), num.end(), greater<>());
        
       	cout <<"#" << i+1 << " " << num[0] << endl;
    }
}