#include <iostream>
using namespace std;

long long arr[91] = { 0 };
int main() {

	int N;

	arr[1] = 1;
	arr[2] = 1;

	cin >> N;

	for (int i = 3; i <=N; i++) {

		arr[i] = arr[i - 2] + arr[i - 1];
	}

	cout << arr[N] << endl;

	return 0;
}