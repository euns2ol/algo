#include <iostream>
using namespace std;

int main() {

	int x, y;
	int tp = 1;
	int temp = 1;

	for (int i = 0; i < 4; i++) {

		scanf_s("%d %d", &x, &y);

		for (int j = x; j <= y; j++) {

			int r = j;

			do {
				tp++;

				if (r % 2 == 0) {
					r = r / 2;
				}
				else
					r = (r * 3) + 1;
			} while (r != 1);

			if (temp < tp)
				temp = tp;

			tp = 1;
		}

		cout << x << " " << y << " " << temp;
	}

	return 0;
}