#include <iostream>
#include <algorithm>
using namespace std;

long long arr[1000000] = { 0 };

int main() {


	int N;
	int res = 0;
	long long result = arr[0];
	int tp = 1;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr,arr+N);



	for (int i = 0; i < N-1; i++) {

		
		 if (arr[i] == arr[i + 1]) {
				tp++;
			}
			else {
				tp = 1;
			}
		
		
		if (tp > res) {
			res = tp;
			result = arr[i];
		   }
	}

	cout << result<< endl;
	return 0;
}