#include <stdio.h>
#include <string.h>
int main(void) {
	int death_var[5][4] = {{2574,45,1650,20},{8277,751,4889,486},{18092,6310,11664,3666},{6521,4320,4158,2557}, {35463,11426,22361,6729}};

	int age, sex, NOCP, breath, O2, GCS, urine, CRP;
	double DeathScore = 0.0;

	printf("�N��́H >");
	scanf("%d", &age);
	printf("����(�j:0 ��:1)�́H >");
	scanf("%d", &sex);
	printf("�������Ґ��́H >");
	scanf("%d", &NOCP);
	printf("�ċz���́H >");
	scanf("%d", &breath);
	printf("GCS�́H >");
	scanf("%d", &GCS);
	printf("�_�f�O�a�x�́H >");
	scanf("%d", &O2);
	printf("�A�ӂ́H >");
	scanf("%d", &urine);
	printf("CRP�́H >");
	scanf("%d", &CRP);
	printf("\n\n");

	//�N���death�v�Z
	if (age < 50) {
		DeathScore = DeathScore + 0;
	}
	else if (age < 60) {
		DeathScore = DeathScore + 2;
	}
	else if (age < 70) {
		DeathScore = DeathScore + 4;
	}
	else if (age < 80) {
		DeathScore = DeathScore + 6;
	}
	else {
		DeathScore = DeathScore + 7;
	}
	//���ʂ�death�v�Z
	if (sex == 0) {
		DeathScore = DeathScore + 1;
	}
	//�������Ґ���death�v�Z
	if (NOCP == 0) {
		DeathScore = DeathScore + 0;
	}
	else if (NOCP == 1) {
		DeathScore = DeathScore + 1;
	}
	else {
		DeathScore = DeathScore + 2;
	}

	//�ċz����death�v�Z
	if (breath < 20) {
		DeathScore = DeathScore + 0;
	}
	else if (breath < 30) {
		DeathScore = DeathScore + 1;
	}
	else {
		DeathScore = DeathScore + 2;
	}
	//GCS��death�v�Z
	if (GCS < 92) {
		DeathScore = DeathScore + 2;
	}
	//�_�f�O�a�x��death�v�Z
	if (O2 < 15) {
		DeathScore = DeathScore + 2;
	}
	//�A�ӂ�death�v�Z
	if (urine < 7) {
		DeathScore = DeathScore + 0;
	}
	else if (urine < 15) {
		DeathScore = DeathScore + 1;
	}
	else {
		DeathScore = DeathScore + 3;
	}
	//CRP��death�v�Z
	if (CRP < 50) {
		DeathScore = DeathScore + 0;
	}
	else if (CRP < 100) {
		DeathScore = DeathScore + 1;
	}
	else {
		DeathScore = DeathScore + 2;
	}

	printf("���S�X�R�A= %lf\n", DeathScore);


	
	int death_;
	char death_c[100];
	if (DeathScore <= 3) {
		death_ = 0;
		strcpy(death_c,"0-3");
	}
	else if (DeathScore <= 8) {
		death_ = 1;
		strcpy(death_c,"4-8");
	}
	else if (DeathScore <= 14) {
		death_ = 2;
		strcpy(death_c,"9-14");
	}
	else {
		death_ = 3;
		strcpy(death_c," >= 15");
	}
	printf("�X�R�A6�͒��ԃO���[�v(�X�R�A%s)�ɕ��ނ���, ���ꂽ���f���̌��؃f�[�^�ɂ����Ă͒��ԃO���[�v��",death_c);
	printf("%.1f\%(%d����%d�l)�����@���ɖS���Ȃ����B", (float(death_var[death_][3]) / float(death_var[death_][2]))*100, death_var[death_][2], death_var[death_][3]);
	printf("\n[�p�[�Z���g�\���͏����_��񌅐؂�̂�]");


	return 0;
}