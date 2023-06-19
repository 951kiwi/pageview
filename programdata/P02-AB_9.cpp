/****************************/
/* 再入力を含む年齢 */
/****************************/

#include<stdio.h>
int main(void) {
	int age;
	printf("年齢を入力:");
	scanf_s("%d", &age);
	while (age < 0 || age >117) {
		printf("0以上117以下の年齢を入力:");
		scanf_s("%d", &age);
	}
	printf("年齢:%d\n", age);
	return 0;
}