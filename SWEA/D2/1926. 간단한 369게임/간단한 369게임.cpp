#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int N, clap;
    string temp;

    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        temp = to_string(i);
        clap = 0;
        for (int j = 0; j < temp.size(); j++)
        {
            if (temp[j] == '3' || temp[j] == '6' || temp[j] == '9') clap++;
        }
        if (clap > 0)  for(int j = 0; j < clap; j++) cout << "-";
      	else cout << i;
        cout << " ";
    }
	return 0;
}