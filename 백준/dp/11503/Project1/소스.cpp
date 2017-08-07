#include <iostream>
using namespace std;
int arr[1000];
int d[1000] = { 0 };
int main() {

	int n;
	int max = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	d[0] = 1;

	for (int i = 1; i < n; i++) {
		
		d[i] = 1;

		for (int j = 0; j < i; j++) {

			if (arr[j]<arr[i] && d[j] + 1 > d[i])
				d[i] = d[j] + 1;
		}

		if (max <d[i])
			max = d[i];
       
		
	}



	cout << max;
	
	system("pause");
	return 0;
}