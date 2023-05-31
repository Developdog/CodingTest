#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
	int check[1000000] = { false };

	check[0] = check[1] = true;
	for (int i = 2; i < n; i++){
		if (check[i] == false){
			for (int j = i + i; j <= n; j += i){
				check[j] = true;
			}
		}
	}

	for (int i = 1; i <= n; i++){
		if (!check[i]) answer++;
	}
    
    return answer;
}