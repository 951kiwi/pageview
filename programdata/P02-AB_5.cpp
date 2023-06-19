#include <stdio.h>

void hyoutei(int);
int main(void) {
	int ten;
	/*点数の入力*/
	printf("点数は? > ");
	scanf("%d", &ten);
	hyoutei(ten);
}

void hyoutei(int i) {
	
	/*判定*/
	if (i < 60)
		printf("不可");
	else {
		if (i < 70)
			printf(" 可\n");
		else {
			if (i < 90)
				printf(" 良\n");
			else
				printf(" 優\n");
		}
	}
}