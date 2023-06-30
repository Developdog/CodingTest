#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

int main()
{
	map<int, int, greater<int>> score;
	int temp, total = 0;
	set<int> num;

	for (int i = 1; i <= 8; i++)
	{
		cin >> temp;
		score.insert(make_pair(temp, i));
	}

	auto it = score.begin();
	
	for (int i = 0; i < 5; i++)
	{
		total += (*it).first;
		it++;
	}

	cout << total << endl;

	it = score.begin();

	for (int i = 0; i < 5; i++)
	{
		num.insert((*it).second);
		it++;
	}

	for (auto loop : num) cout << loop << " ";

	return 0;
}