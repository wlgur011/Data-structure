#include <iostream>
using namespace std;

#define MAX 10
//퀵 정렬
//분할 정렬
//배열의 원소들을 나누어 정렬한다. 평균속도는 O ( N * log N ) 
//특정한 기준으로 큰숫자와 작은숫자를 두 집합으로 나눈다.

// 기준을 피벗 ( Pivot ) 이라 한다.

void Quick_Sort(int* Arr, int start,int end)
{
	if (start >= end)//원소가 1개인경우
	{
		return;
	}
	
	int Pivot = start;
	int Left = start + 1;
	int Right = end;

	while (Left <= Right) // Left > Right 일경우 엇갈리므로 탈출
	{
		while (Arr[Left] <= Arr[Pivot] && Left<=end)
		{
			Left++;
		}
		while (Arr[Right] >= Arr[Pivot] && Right > start)
		{
			Right--;
		}
		if (Left > Right)
		{
			swap(Arr[Right], Arr[Pivot]);
		}
		else
		{
			swap(Arr[Right], Arr[Left]);
		}
	}
	Quick_Sort(Arr, start, Right - 1);
	Quick_Sort(Arr, Right+1, end);

}
int main()
{
	int number[MAX] = { 1,10,5,8,7,6,4,3,2,9 };


	Quick_Sort(number, 0, MAX - 1);

	for (int i = 0; i < 10; ++i)
		cout << number[i] << " ";


	return 0;
}