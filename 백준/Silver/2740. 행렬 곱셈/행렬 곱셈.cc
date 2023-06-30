#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int Ay, Ax, By, Bx, temp;

	cin >> Ay >> Ax;

	vector <vector<int>> arr1(Ay, vector<int>(Ax, 0));
	for (int i = 0; i < Ay; i++)
	{
		for (int j = 0; j < Ax; j++)
		{
			cin >> arr1[i][j];
		}
	}

	cin >> By >> Bx;
	vector <vector<int>> arr2(By, vector<int>(Bx, 0));
	for (int i = 0; i < By; i++)
	{
		for (int j = 0; j < Bx; j++)
		{
			cin >> arr2[i][j];
		}
	}

	if (Ax == By)
	{
		for (int i = 0; i < Ay; i++)
		{
			for (int j = 0; j < Bx; j++)
			{
				temp = 0;
				for (int k = 0; k < Ax; k++)
				{
					temp += arr1[i][k] * arr2[k][j];
				}
				cout << temp << " ";
			}
			cout << endl;
		}
	}
	else
	{
		for (int i = 0; i < Ax; i++)
		{
			for (int j = 0; j < By; j++)
			{
				temp = 0;
				for (int k = 0; k < Ay; k++)
				{
					temp += arr1[k][i] * arr2[j][k];
				}
				cout << temp << " ";
			}
			cout << endl;
		}
	}
}