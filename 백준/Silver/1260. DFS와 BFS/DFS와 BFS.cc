#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void DFS(vector <bool> &check, vector <vector<int>> &graph, int V)
{
	check[V] = true;
	cout << V + 1 << " ";
	for (int j = 0; j < graph[0].size(); j++)
	{
		//cout << V;
		if (check[j] == false && graph[V][j] >= 1)
		{
			DFS(check, graph, j);
		}
	}
}


void BFS(vector <bool>& check, vector <vector<int>>& graph, int V)
{
	queue <int> list;
	check[V] = true;
	list.push(V);

	cout << V + 1 << " ";

	while (!(list.empty)())
	{
		int temp = list.front(); // 기준
		for (int i = 0; i < graph.size(); i++)
		{
			if (check[i] == false && graph[temp][i] >= 1)
			{
				cout << i+1 << " ";
				check[i] = true;
				list.push(i);
			}
		}
		list.pop();
	}
}


int main()
{
	int N, M, V;

	cin >> N >> M >> V;

	vector <vector<int>> graph(N, vector<int>(N, 0));
	vector <bool> check(N, false);

	for (int i = 0; i < M; i++)
	{
		int temp1, temp2;
		cin >> temp1 >> temp2;
		graph[--temp1][--temp2]++;
		graph[temp2][temp1]++;
	}

	DFS(check, graph, V - 1);

	for (int i = 0; i < check.size(); i++)
	{
		check[i] = false;
	}

	cout << endl;

	BFS(check, graph, V - 1);
}