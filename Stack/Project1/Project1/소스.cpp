#include <iostream>
using namespace std;
long long fibo(int n);

//�迭�� �ʱⰪ�� 0�̴� 
long long memo[100] = { 1,1 };

int main() {
	
	cout << fibo(60) << endl;
	return 0;
}

long long fibo(int n) {
	if (n < 2) return n;
	if (memo[n] != 0) { //�޸�Ǿ��ִٸ� 
		return memo[n];
	}
	else { //�޸�ȵǾ��ִٸ� 
		memo[n] = fibo(n - 1) + fibo(n - 2);
		return memo[n];
	}
}