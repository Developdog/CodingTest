#include <iostream>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	set <string, greater<string>> name;
	long long int count;
	string n, inout;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		cin >> n >> inout;
		if(inout == "leave")
		{
			name.erase(n);
		}
		else name.insert(n);
	}

	for (auto loop : name)
	{
		cout << loop << "\n";
	}
	
	return 0;
}