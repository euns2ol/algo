#include <iostream>

#define max(a,b) (((a)>(b))?(a):(b))

int a[100001][2];

int d[100001][3];

int main() {

	int t;

	scanf_s("%d", &t);

	while (t--) {

		int n;

		scanf_s("%d", &n);

		for (int i = 1; i <= n; i++) {

			scanf_s("%d", &a[i][0]);

		}

		for (int i = 1; i <= n; i++) {

			scanf_s("%d", &a[i][1]);

		}

		d[0][0] = d[0][1] = d[0][2] = 0;

		for (int i = 1; i <= n; i++) {

			d[i][0] = max(d[i - 1][0], max(d[i - 1][1], d[i - 1][2]));

			d[i][1] = max(d[i - 1][0], d[i - 1][2]) + a[i][0];

			d[i][2] = max(d[i - 1][0], d[i - 1][1]) + a[i][1];

		}

		int ans = 0;



			ans = max(d[n][0], max(d[n][1], d[n][2]));

		

		printf("%d\n", ans);

	}

	
	system("pause");
	return 0;

}