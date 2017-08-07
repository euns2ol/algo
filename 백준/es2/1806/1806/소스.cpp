#include <iostream>
using namespace std;
int arr[100000] = { 0 };
int main(){

	int n,s;
	scanf_s("%d %d", &n, &s);
	int len = n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		
		int sum = 0;
		int cnt = 0;

	 for (int j = i; j < n; j++) {
		    cnt++;
			sum += arr[j];
			
			if (sum == s) {
				
				if (len > cnt)
					len = cnt;

				break;
			}else if (sum > s) {
				break;
			}
		}
	}#include <iostream>
		using namespace std;
	int arr[100000] = { 0 };
	int main() {

		int n, s;
		scanf_s("%d %d", &n, &s);
		int len = n;

		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		for (int i = 0; i < n; i++) {

			int sum = 0;
			int cnt = 0;

			for (int j = i; j < n; j++) {
				cnt++;
				sum += arr[j];

				if (sum == s) {

					if (len > cnt)
						len = cnt;

					break;
				}
				else if (sum > s) {
					break;
				}
			}
		}


		cout << len;
		return 0;
	}


	cout << len;
	return 0;
}