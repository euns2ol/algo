#include <iostream>
using namespace std;
long long arr[101][10] = { 0 };

int main() {

	int N;
	cin >> N;

	for (int i = 1; i <= 9; i++) arr[1][i] = 1;

	for (int i = 2; i <= N; i++) {

		for (int j = 0; j <= 9; j++) {
              
			if (j - 1 >= 0) arr[i][j] += arr[i - 1][j - 1];
			if (j + 1 <= 9) arr[i][j] += arr[i - 1][j + 1];
	        
			arr[i][j] %= 1000000000;
		}

		
	}

	long long res=0;

	for (int i = 0; i <= 9; i++)
		res += arr[N][i];

	res %= 1000000000;
	cout << res << endl;

	
	return 0;
}