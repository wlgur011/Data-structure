#include <iostream>
using namespace std;

#define MAX 10
//삽입 정렬
int main()
{
	//적절한 위치를 찾아서 삽입하는 정렬  / 필요할때만 위치 교체가 필요함
	int number[MAX] = { 1,10,5,8,7,6,4,3,2,9 };

	int j = 0;
	for (int i = 0; i < MAX-1; ++i)
	{
		j = i;
		while (j>=0 && number[j] > number[j+1])
		{
			swap(number[j], number[j + 1]);
			j--;
		}
	}

	//일부 정렬이 되어있다면 O(N^2) 알고리즘 중에서 제일 뛰어난 성능
	//최악의경우 버블정렬과 같은 연산

	//거의 정렬이 되어있다면 퀵정렬 / 병합정렬 보다 빠르기도 하다.
	for (int i = 0; i < 10; ++i)
		cout << number[i] << " ";


	return 0;
}