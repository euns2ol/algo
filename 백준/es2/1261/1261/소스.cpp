#include <iostream>
#include <deque>
using namespace std;
int maze[555][555] = { 0 };
int check[555][555] = { 0 };
int move_x[4] = { 0,0,1,-1 };
int move_y[4] = { 1,-1,0,0 };
int N, M;
deque < pair <int, int> > route;


int main() {


	pair <int, int> cur;

	cin >> N;
	cin >> M;
	
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			scanf_s("%1d", &maze[i][j]);
			check[i][j] = -1;
		}
	}

	cur.first = 0;
	cur.second = 0;
	check[0][0] = 0;
	route.push_back(cur);
   
	while (!route.empty()) {
		
		cur.first = route.front().first;
		cur.second = route.front().second;
		route.pop_front();



		for (int i = 0; i < 4; i++) {
			int x = cur.first + move_x[i];
			int y = cur.second + move_y[i];

			if (x >= 0 && x < M && y >= 0 && y < N) {
				
				if (check[x][y] == -1) {
					pair <int, int> mov;

					mov.first = x;
					mov.second = y;

					if (maze[x][y] == 0) {
						check[x][y] = check[cur.first][cur.second];
						route.push_front(mov);
					}
					else if (maze[x][y] == 1) {
						check[x][y] = check[cur.first][cur.second] + 1;
						route.push_back(mov);
					}

				}
			}
		}
	}


	cout << check[M-1][N-1]<<endl;
	system("pause");
	return 0;
}

