#include <iostream>
#include <vector>
using namespace std;


int main() {
	
	vector<int> arr;
	vector<int> d;
	int max = 0;
	int n;
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		arr.push_back(num);
	}


	d.push_back(arr[0]);

	for (int i = 1; i < n; i++) {

		if (d[i - 1] + arr[i] > arr[i]) {
			d.push_back(d[i - 1] + arr[i]);
		}
		else {

			d.push_back(arr[i]);
		}

		
		if (max < d[i]) {
			max = d[i];
		}
	}


	cout << max << endl;
	
	system("pause");
	return 0;
}