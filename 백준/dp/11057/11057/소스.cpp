#include <iostream>
using namespace std;

long long arr[1001][10] = { 0 };

int main() {
	
	int N;

	cin >> N;

	for (int i = 0; i <= 9; i++)
		arr[1][i] = 1;

	for (int i = 2; i <= N; i++) {

		for (int j = 0; j <= 9; j++) {

			for (int k = j; k <= 9; k++) {
				arr[i][j] += arr[i-1][k];
				arr[i][j] %= 10007;
			
			}

		}

	}

	long long ans=0;

	for (int i = 0; i <= 9; i++) {

		ans += arr[N][i];

	}
 
	ans %= 10007;

	cout << ans << endl;
	return 0;
}