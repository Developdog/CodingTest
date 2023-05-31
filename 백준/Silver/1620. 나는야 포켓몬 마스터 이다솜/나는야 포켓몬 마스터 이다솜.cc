#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin.tie(NULL);

	vector <pair<string, int>> pokemon, pokemon_e;
	pair<string, int> name;
	int pokemon_count, test, num = 1;
	string temp;

	cin >> pokemon_count >> test;

	for (int i = 0; i < pokemon_count; i++)
	{
		cin >> temp;
		pokemon.push_back(make_pair(temp, num));
		num++;
	}

	pokemon_e = pokemon;

	sort(pokemon_e.begin(), pokemon_e.end());

	for (int i = 0; i < test; i++)
	{
		cin >> temp;
		if (isdigit(temp[0]))
		{
			cout << pokemon[stoi(temp)-1].first << "\n";
		}

		else
		{
			int start = 0, end = pokemon_count-1, middle = 0;
			for (;;)
			{
				middle = (start + end) / 2;
				if (pokemon_e[middle].first == temp) 
				{
					cout << pokemon_e[middle].second << "\n";
					break;
				}
				if (start > end) break;

				if (pokemon_e[middle].first < temp)
				{
					start = middle + 1;
				}
				if (pokemon_e[middle].first > temp)
				{
					end = middle - 1;
				}
			}
		}
	}
	return 0;
}