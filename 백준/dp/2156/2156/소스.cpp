#include <iostream>
#define MAX(a,b) a>b?a:b
using namespace std;
int arr[10001];
int d[10001] = { 0 };
int main(){

	int n;
	cin >> n;


	for (int i = 1; i <= n; i++) {

		cin >> arr[i];

	}

	d[1] = arr[1];
	d[2] = arr[1] + arr[2];

	for (int i = 3; i <= n; i++) {
	    
		int max = d[i - 1];

		if (max < d[i - 2] + arr[i])
			max = d[i - 2] + arr[i];

		if(max < d[i-3]+arr[i-1]+arr[i])
			max = d[i-3]+arr[i-1]+arr[i];
		
		d[i] = max;
	}

   
	cout << d[n];

	system("pause");
	return 0;
}