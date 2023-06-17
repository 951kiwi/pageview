
/****************************/
/* 台形の面積の計算 */
/****************************/
#include <stdio.h>
int main(void)
{
	double ue, shita, h, menseki;
	printf("台形の面積\n");
	/*下底の長さの入力*/
	printf("下辺の長さを入力して下さい >>");
	scanf("%lf", &shita);
	/*上底の長さの入力*/
	printf("上辺の長さ底を入力して下さい >>");
	scanf("%lf", &ue);
	/*高さの入力*/
	printf("高さを入力して下さい >>");
	scanf("%lf", &h);
	menseki = 0.5 * h * (ue + shita);
	printf("台形の面積=%f\n", menseki);
	return 0;
}