#include <iostream>
using namespace std;

// 나이트가 이동할 수 있는 8가지 방향 정의
int dx[] = { -2, -1, 1, 2, 2, 1, -1, -2 };
int dy[] = { -1, -2, -2, -1, 1, 2, 2, 1 };

int Array[8][8] = { 0, };

void main()
{
	string input = "g5";
	int Col = input[0] - 'a';
	int Row = input[1] - '1';

	int answer = 0;
	for (int i = 0; i < 8; ++i)
	{
		int tempCol = Col;
		int tempRow = Row;
		tempCol += dx[i];
		tempRow += dy[i];
		if ( !(tempCol <0 || tempCol >= 8 || tempRow < 0 || tempRow >= 8))
			answer++;
	}
	cout << answer << endl;
}