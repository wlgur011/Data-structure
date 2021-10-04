#include <iostream>
using namespace std;

#define MAX 10
//���� ����
int main()
{
	//������ ��ġ�� ã�Ƽ� �����ϴ� ����  / �ʿ��Ҷ��� ��ġ ��ü�� �ʿ���
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

	//�Ϻ� ������ �Ǿ��ִٸ� O(N^2) �˰��� �߿��� ���� �پ ����
	//�־��ǰ�� �������İ� ���� ����

	//���� ������ �Ǿ��ִٸ� ������ / �������� ���� �����⵵ �ϴ�.
	for (int i = 0; i < 10; ++i)
		cout << number[i] << " ";


	return 0;
}