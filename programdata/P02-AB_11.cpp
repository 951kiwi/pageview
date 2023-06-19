#include<iostream>
#include <time.h>

using namespace std;
int fibo(int N)
{
	if (N == 0) return 0;
	else if (N == 1) return 0;
	else if (N == 2)return 1;
	return fibo(N - 1) + fibo(N - 2) + fibo(N - 3);
}

int main() {
	long cpu_time;
	double sec;
	cout << fibo(35) << endl;
	cpu_time = clock();
	sec = (double)cpu_time / CLOCKS_PER_SEC;
	printf("%f•b\n", sec);
	return 0;
}