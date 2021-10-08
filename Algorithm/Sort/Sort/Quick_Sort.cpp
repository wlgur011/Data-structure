#include <iostream>
using namespace std;

#define MAX 10
//�� ����
//���� ����
//�迭�� ���ҵ��� ������ �����Ѵ�. ��ռӵ��� O ( N * log N ) 
//Ư���� �������� ū���ڿ� �������ڸ� �� �������� ������.

// ������ �ǹ� ( Pivot ) �̶� �Ѵ�.

void Quick_Sort(int* Arr, int start,int end)
{
	if (start >= end)//���Ұ� 1���ΰ��
	{
		return;
	}
	
	int Pivot = start;
	int Left = start + 1;
	int Right = end;

	while (Left <= Right) // Left > Right �ϰ�� �������Ƿ� Ż��
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