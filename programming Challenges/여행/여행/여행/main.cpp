#include <iostream>
#include <algorithm>
using namespace std;

double stu[1000];

int main() {

	int n;
	
	int sum=0;
	double res = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> stu[i];
	   
		stu[i]=stu[i] * 100;
		sum += stu[i];
	}

	sort(stu, stu + n);
	

	int pay = sum / n;
	int r = sum%n;
	
	for (int i = n-1; i>=0; i--) {

		while (r != 0) {
			
			if (stu[i] - (pay + 1) < 0) {
				res += (pay + 1)-stu[i];
			}

			r--;
		}
	
		if (stu[i] - pay < 0) {
			res += pay-stu[i];
		}
	}


	res = res*0.01;


	cout << res;

	return 0;
}