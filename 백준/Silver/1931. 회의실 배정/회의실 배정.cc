#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	long long int count, temp1, temp2, answer = 1;
    // answer은 배열 첫번째 값은 무시하기 때문에 1을 더해준다.

	cin >> count;

	vector<pair<long long int, long long int>> time_list;

	for (int i = 0; i < count; i++)
	{
		cin >> temp1 >> temp2;
		time_list.push_back(make_pair(temp2, temp1));
	}

	sort(time_list.begin(), time_list.end());

    // 정방향으로 계산하려면 시간 초과가 나기 때문에 끝나는 시간을 기준으로 정렬해야 한다.
	
    temp1 = time_list[0].first;
    // 첫번째 종료 시간을 입력해준다.
    
	for (int i = 1; i < time_list.size(); i++)
	{
		if (temp1 <= time_list[i].second)
		{
			temp1 = time_list[i].first;
			answer++;
			// for문을 1부터 끝까지 돌면서, time_list의 second, 두번째 값이
            // 기존에 주어졌던 종료값과 같거나 크다면, 해당 값을 temp1에 갱신해주고
            // 정답 값을 올려준다.
		}
	}

	cout << answer;
}