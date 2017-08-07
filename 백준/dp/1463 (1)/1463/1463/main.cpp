#include <iostream>
using namespace std;

int arr[1000001] = { 0 };
int calc(int n);

int main() {
	
	int n;
	cin >> n;
    cout<<calc(n)<<endl;

	return 0;
}

int calc(int n) {
	cout << n << endl;
	if (n == 1)
		return 0;

	if (arr[n] > 0) return arr[n];
    
	arr[n] = calc(n - 1) + 1;

	if (n % 3 == 0) {
		int tp = calc(n / 3) + 1;

		if (arr[n] > tp) arr[n] = tp;
	}

	if (n % 2 == 0) {
		int tp = calc(n / 2) + 1;
		
		if (arr[n] > tp) arr[n] = tp;
	}

	return arr[n];
	
}