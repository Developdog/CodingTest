#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int t1, m1, t2, m2;
		cin >> t1 >> m1 >> t2 >> m2;
        
        m1 = m1 + m2;
        t1 = t1 + t2 + m1 / 60;
		m1 = m1 % 60;
		
        if(12 < t1) t1 = t1 - 12;
        
		cout << "#" << test_case << " " << t1 << " " << m1 << endl;
	}
	return 0;
}