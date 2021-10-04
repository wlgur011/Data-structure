#include <iostream>
using namespace std;

#define MAX 10
//버블정렬
int main()
{
	//옆의 수와 비교하여 정렬하는 방식
	int number[MAX] = { 1,10,5,8,7,6,4,3,2,9 };

	for (int i = 0; i < MAX; ++i)
	{
		for (int j = 0; j < MAX - i - 1; ++j)
		{
			if (number[j] > number[j+1])
			{
				swap(number[j], number[j + 1]);
			}
		}
	}
	// 비교연산
	// -> 10번 9번 8번 ---------- 1번
	// ( n  * ( n + 1 ) ) / 2 
	// 시간 복잡도 O (n^2)

	for (int i = 0; i < 10; ++i)
		cout << number[i] << " ";

	//같은 시간복잡도인데 불구하고 선택정렬보다 느린이유 
	// : 선택정렬은 가장작은 것을 하나 골라서 딱 한번 교체하지만
	// : 버블정렬은 매 순간마다 비교를 통하여 교체를 실시하기 때문에 더 느리다.
	// 정렬알고리즘 중에 가장 느리다
	return 0;
}