#include <stdio.h>

void hyoutei(int);
int main(void) {
	int ten;
	/*����������*/
	printf("������? > ");
	scanf("%d", &ten);
	hyoutei(ten);
}

void hyoutei(int i) {
	
	/*Ƚ��*/
	if (i < 60)
		printf("�Բ�");
	else {
		if (i < 70)
			printf(" ��\n");
		else {
			if (i < 90)
				printf(" ��\n");
			else
				printf(" ͥ\n");
		}
	}
}