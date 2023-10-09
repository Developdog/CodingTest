#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int ft, fm, st, sm;
		cin >> ft >> fm >> st >> sm;

		fm = fm + sm;
		ft = ft + st + fm / 60;
		fm %= 60;
		if (ft % 12 == 0) ft = 12;
		else ft %= 12;

		cout << "#" << test_case << " " << ft << " " << fm << endl; 
	}
	return 0;
}