#include <iostream>
using namespace std;

int arr[10000] = { 0 };
int main() {


	int n;
	int count = 0;
	int m;
	cin >> n;
	cin >> m;

	for (int i = 0; i < n; i++)
		cin >> arr[i];
	

	for (int i = 0; i < n; i++) {
		int sum = 0;
	
		for (int j = i; j < n; j++) {

			sum = sum + arr[j];

			if (sum == m) {
				count++;
				break;
			}

			if (sum > m)
				break;
		}

	}

	cout << count << endl;

	return 0;
}