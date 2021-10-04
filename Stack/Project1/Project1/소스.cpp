#include <iostream>
using namespace std;
long long fibo(int n);

//배열들 초기값은 0이다 
long long memo[100] = { 1,1 };

int main() {
	
	cout << fibo(60) << endl;
	return 0;
}

long long fibo(int n) {
	if (n < 2) return n;
	if (memo[n] != 0) { //메모되어있다면 
		return memo[n];
	}
	else { //메모안되어있다면 
		memo[n] = fibo(n - 1) + fibo(n - 2);
		return memo[n];
	}
}