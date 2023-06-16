#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int check[6][6] = { 0 };
	int first_y = 0, first_x = 0;
	int last_y = 0, last_x = 0;
	int y = 0, x = 0;
	int caly = 0, calx = 0;
	bool vaild = true;
	string temp = "";

	cin >> temp;

	last_y = int(temp[0]) - 'A';
	last_x = (temp[1] - '0') - 1;

	first_y = last_y;
	first_x = last_x;

	check[last_y][last_x] += 1;

	// 첫번째 값을 받아놓고,
	// 체스판 위치의 값을 미리 값을 저장해둔다.

	for (int i = 0; i <= 35; i++)
	{
		if (i == 35)
		{
			y = first_y;
			x = first_x;
			// 마지막 부분에 도달하면 시작값을 넣어서 갈수 있는지 확인한다.
		}
		else
		{
			cin >> temp;
			y = int(temp[0]) - 'A';
			x = (temp[1] - '0') - 1;
			check[y][x] += 1;
			// 아닐 경우에는 그냥 일반 값을 넣어주고 해당 위치를 갔다는 표시를 남겨준다.
		}
		caly = last_y - y;
		calx = last_x - x;
		// 옛날 위치에서 현재 위치값을 뺴준다.
		if (caly == 1 || caly == -1)
		{
			if (calx != 2 && calx != -2) vaild = false;
		}
		else if (caly == 2 || caly == -2)
		{
			if (calx != 1 && calx != -1) vaild = false;
		}
		else vaild = false;

		last_y = y;
		last_x = x;

		//cout << vaild << " " << caly << " " << calx << endl;
		// 나이트가 이동할수 있는 거리 즉 X가 2, -2 이면 Y는 -1, 1 사이이고, Y가 2, -2이면 X는 -1, 1 사이이다.
	}

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			//cout << check[i][j] << endl;
			if (check[i][j] != 1) vaild = false;
		}
	}
	//중복이 있는지 확인한다.

	if (vaild) cout << "Valid";
	else cout << "Invalid";

	return 0;
}