#include <iostream>
using namespace std;


//��������
int main()
{
	//���� ���� ���ڸ� �����Ͽ� �ڸ��� ������� ���
	int number[10] = { 1,10,5,8,7,6,4,3,2,9 };

	int min = 0; //���� �������ڸ� ���� �׸�
	int idx = 0; //���� �������ڰ� �� ��ġ
	for (int i = 0; i < 10; ++i)
	{
		min = INT_MAX; //�ּҰ��� ã������ ����� ū���� ����
		for (int j = i; j < 10; ++j)
		{
			if (min >= number[j])
			{
				min = number[j];
				idx = j;//���� ���������� �ε����� ����Ѵ�
			}
		}
		swap(number[i], number[idx]);
	}

	// �񱳿���
	// -> 10�� 9�� 8�� ---------- 1��
	// ( n  * ( n + 1 ) ) / 2 
	// �ð� ���⵵ O (n^2)

	for (int i = 0; i < 10; ++i)
		cout << number[i] << " ";
	return 0;
}