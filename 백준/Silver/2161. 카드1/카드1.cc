#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int i = 0;

	cin >> i;

	queue<int> card;

	for (int j = 1; j <= i; j++)
	{
		card.push(j);
	}

	while (1)
	{
		if (card.size() == 1)
		{
			cout << card.front();
			break;
		}

		cout << card.front() << " ";
		card.pop();
		card.push(card.front());
		card.pop();
	}

	return 0;
}