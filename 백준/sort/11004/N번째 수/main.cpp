#include <iostream>
#include <algorithm>
using namespace std;

int arr[5000000];

int main() {


	int K,N;

	cin >> K;
	cin >> N;
	for (int i = 0; i < K; i++) {
		scanf_s("%d", &arr[i]);
	}

	sort(arr, arr + K);

	cout << arr[N-1] << endl;

	return 0;
}