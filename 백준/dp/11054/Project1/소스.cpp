#include <iostream>
using namespace std;

int d_left[1000] = { 0 };
int d_right[1000] = { 0 };
int arr[1000];

int main() {

	int n;
	cin >> n;
	int max = 0;
	for (int i = 0; i < n; i++)
		cin >> arr[i];


	for (int i = 0; i < n; i++) {
		
		d_left[i] = 1;

		for (int j = 0; j < i; j++) {
			if (arr[j]<arr[i] && d_left[j] + 1 > d_left[i])
				d_left[i] = d_left[j] + 1;
		}
	}

	for (int i = n - 1; i >= 0; i--) {
	
	   for (int j = i+1; j < n; j++) {
				if (arr[j]<arr[i] && d_right[j] + 1 > d_right[i])
					d_right[i] = d_right[j] + 1;
			}

		
	}




	for (int i = 0; i < n; i++) {

		if (max < d_left[i] + d_right[i])
			max = d_left[i] + d_right[i];
	}

	cout << max << endl;
	

}