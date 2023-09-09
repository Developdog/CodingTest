#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int total;
    
    cin >> total;
    
    for(int j = 0; j < total; j++)
    {
        int size;
        
        cin >> size;
        
		vector <int> num(size, 0);
        
        for(int i = 0; i < size; i++) cin >> num[i];
        
        sort(num.begin(), num.end());
        
        cout << "#" << j+1 << " ";
        for(auto loop : num) cout << loop << " "; 
        cout << endl;
    }
    
    return 0;
}