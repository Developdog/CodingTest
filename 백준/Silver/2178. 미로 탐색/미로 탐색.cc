#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

int main()
{
	int width, height, x = 0, y = 0, answer = 0;
	
	cin >> height >> width;
	int xroute[4] = { 0, -1, 0, 1 };
	int yroute[4] = { 1, 0, -1, 0 };
	vector <vector<int>> Maze (height, vector<int>(width, 0)); // 미로 값
	vector <vector<int>> Check(height, vector<int>(width, 0)); // 갔는지 안갔는지 확인
	queue <pair<int, int>> path; // 경로
	//0은 이동할 수 없는 칸, 1은 이동 가능하다.
	string temp;

	for(int i = 0; i < height; i++)
	{
		cin >> temp;
		for (int j = 0; j < width; j++)
		{
			Maze[i][j] = temp[j] - '0';
		}
	}

	path.push(make_pair(0, 0));
	Check[0][0] = 1;
	while (!(path.empty()))
	{
		// x와 y의 값 갱신해주기
		x = path.front().first;
		y = path.front().second;
		path.pop();

		for (int i = 0; i < 4; i++)
		{
			int xr = x + xroute[i], yr = y + yroute[i];
			if (xr >= 0 && yr >= 0 && xr < width && yr < height)
			{ // x는 0과 width 사이의 범위 안에, y는 0과 height 사이의 범위 안에
				if (Check[yr][xr] == 0 && Maze[yr][xr] == 1)
				{// Check에 기록이 없고, Maze가 1일 경우 이동
					Check[yr][xr] = Check[y][x]+1;
					path.push(make_pair(xr, yr));
				}
			}
		}
	}

	cout << Check[height - 1][width -1];
}