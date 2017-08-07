#include <iostream>
using namespace std;

int pay[1001] = { 0 };
int max_pay[1001] = { 0 };

int main() {

	int n;

	cin >> n;

	for (int i = 1; i <= n; i++) {
	
		cin >> pay[i];
	}


	for (int i = 1; i <= n; i++) {

		max_pay[i] = pay[i];

		for (int j = 1; j <= i; j++) {
		
			if (max_pay[i] < max_pay[i - j] + pay[j])
				max_pay[i] = max_pay[i - j] + pay[j];
				
		}


	}
	
	cout << max_pay[n] << endl;
	return 0;
}

