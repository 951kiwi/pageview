#include<stdio.h>
int main(void) {
	int age, sex, heizon, kokyuu, sanso, GCS, nyouso, CRP;
	double sibou = 0;
	printf("�N���?");
	scanf_s("%d", &age);
	while (age < 0 || age>117) {
		printf("0�ȏ�117�ȉ��̔N�����͂��Ă��������B");
		scanf_s("%d", &age);
	}
	if (50 <= age && age <= 59) {
		sibou = sibou + 2;
	}
	else if (60 <= age && age <= 69) {
		sibou = sibou + 4;
	}
	else if (70 <= age && age <= 79) {
		sibou = sibou + 6;
	}
	else if (age >= 80) {
		sibou = sibou + 7;
	}
	printf("���ʂ�?(�j:0��:1)");
	scanf_s("%d", &sex);
	while (!(sex == 0 || sex == 1)) {
		printf("0(�j)��1(��)�œ��͂��Ă��������B");
		scanf_s("%d", &sex);
	}
	if (sex == 0) {
		sibou = sibou + 1;
	}
	printf("������������?");
	scanf_s("%d", &heizon);
	while (0 > heizon) {
		printf("0�ȏ�̕�������������͂��Ă��������B");
		scanf_s("%d", &heizon);
	}
	if (heizon == 1) {
		sibou = sibou + 1;
	}
	else if (heizon >= 2) {
		sibou = sibou + 2;
	}
	printf("�ċz����?");
	scanf_s("%d", &kokyuu);
	while (0 > kokyuu) {
		printf("0�ȏ�̌ċz������͂��Ă��������B");
		scanf_s("%d", &kokyuu);
	}
	if (20 <= kokyuu && kokyuu <= 29) {
		sibou = sibou + 1;
	}
	else if (kokyuu >= 30) {
		sibou = sibou + 2;
	}
	printf("�_�f�O�a�x��?");
	scanf_s("%d", &sanso);
	while (0 > sanso || 100 < sanso) {
		printf("0�ȏ�100�ȉ��̎_�f�O�a�x����͂��Ă��������B");
		scanf_s("%d", &sanso);
	}
	if (sanso < 92) {
		sibou = sibou + 2;
	}
	printf("GCS��?");
	scanf_s("%d", &GCS);
	while (3 > GCS || 15 < GCS) {
		printf("3�ȏ�15�ȉ���GCS����͂��Ă��������B");
		scanf_s("%d", &GCS);
	}
	if (GCS < 15) {
		sibou = sibou + 2;
	}
	printf("�A�f��?");
	scanf_s("%d", &nyouso);
	while (0 > nyouso) {
		printf("0�ȏ�̔A�f����͂��Ă��������B");
		scanf_s("%d", &nyouso);
	}
	if (7 <= nyouso && nyouso <= 14) {
		sibou = sibou + 1;
	}
	else if (nyouso > 14) {
		sibou = sibou + 3;
	}
	printf("CRP��?");
	scanf_s("%d", &CRP);
	while (0 > CRP) {
		printf("0�ȏ��CRP����͂��Ă��������B");
		scanf_s("%d", &CRP);
	}
	if (50 <= CRP && CRP <= 99) {
		sibou = sibou + 1;
	}
	else if (CRP >= 100) {
		sibou = sibou + 2;
	}
	printf("���S�X�R�A=%lf", sibou);
	return 0;
}