#include <iostream>
using namespace std;

int dp(int n);
int arr[1001] = { 0 };

int main() {

	int n;
	cin >> n;

	arr[0] = 1;
	arr[1] = 1;
	
	cout << dp(n) <<endl;
	return 0;
}

int dp(int n) {
	 
	if (n <= 1) return 1;

	if (arr[n] > 0) return arr[n];
	
	arr[n] = dp(n - 1) + dp(n - 2);
	arr[n] = arr[n] % 10007;

	return arr[n];
} 