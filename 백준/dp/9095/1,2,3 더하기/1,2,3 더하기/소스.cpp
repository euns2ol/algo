#include <iostream>
using namespace std;

int arr[11] = { 0 };

int main() {

	int n,test;
	cin >> test;
	
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;

	while (test > 0) {

		cin >> n;

		for (int i = 4; i <= n; i++) {
			
			arr[i] = arr[i - 3] + arr[i - 2] + arr[i - 1];
		
		}

		cout << arr[n]<< endl;

		test--;
	}
	return 0;
}