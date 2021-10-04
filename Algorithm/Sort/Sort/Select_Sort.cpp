#include <iostream>
using namespace std;


//선택정렬
int main()
{
	//가장 작은 숫자를 선택하여 자리로 끌어놓는 방식
	int number[10] = { 1,10,5,8,7,6,4,3,2,9 };

	int min = 0; //가장 작은숫자를 담을 그릇
	int idx = 0; //가장 작은숫자가 들어갈 위치
	for (int i = 0; i < 10; ++i)
	{
		min = INT_MAX; //최소값을 찾기위해 충분히 큰수를 대입
		for (int j = i; j < 10; ++j)
		{
			if (min >= number[j])
			{
				min = number[j];
				idx = j;//가장 작은원소의 인덱스를 기록한다
			}
		}
		swap(number[i], number[idx]);
	}

	// 비교연산
	// -> 10번 9번 8번 ---------- 1번
	// ( n  * ( n + 1 ) ) / 2 
	// 시간 복잡도 O (n^2)

	for (int i = 0; i < 10; ++i)
		cout << number[i] << " ";
	return 0;
}