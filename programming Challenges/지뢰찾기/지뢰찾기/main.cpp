#include<iostream>
#include <vector>
using namespace std;
#define max_x 100
#define max_y 100
int dx[8] = { -1, 0,  -1,  -1, 1, 0, 1, 1 };
int dy[8] = { 0 ,-1, -1,   1, 0, 1, -1, 1 };
int x, y;

char maze[max_x][max_y];

bool check(int a, int b) {

	return (a >= 0 && a < x  && b>=0 && b < y );
}

int main() {

	char s[max_y];
	cin >> x;
	cin >> y;

	memset(maze, '0', (max_x*max_y) * sizeof(char));

	for (int i = 0; i < x; i++) {
		
		scanf_s("%s", s, max_y);
		
		for (int j = 0; j < y; j++){
			

			if (s[j] == '*') { //Áö·ÚÀÌ¸é
				 
				maze[i][j] = '*';

				for(int k = 0; k < 8; k++) {

				
						int cur_x = i + dx[k];
						int cur_y = j + dy[k];
					 
					if (check(cur_x, cur_y)) {
						if(maze[cur_x][cur_y]!='*')
						maze[cur_x][cur_y] += 1;
					}

				}
			}
		 }
			
	}


	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++)
			printf("%c ",maze[i][j]);

		printf("\n");
	}


	return 0;
}