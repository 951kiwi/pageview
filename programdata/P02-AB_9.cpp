/****************************/
/* �ē��͂��܂ޔN�� */
/****************************/

#include<stdio.h>
int main(void) {
	int age;
	printf("�N������:");
	scanf_s("%d", &age);
	while (age < 0 || age >117) {
		printf("0�ȏ�117�ȉ��̔N������:");
		scanf_s("%d", &age);
	}
	printf("�N��:%d\n", age);
	return 0;
}