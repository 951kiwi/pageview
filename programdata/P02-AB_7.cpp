#include <stdio.h>
#include <string.h>
int main(void) {
	int death_var[5][4] = {{2574,45,1650,20},{8277,751,4889,486},{18092,6310,11664,3666},{6521,4320,4158,2557}, {35463,11426,22361,6729}};

	int age, sex, NOCP, breath, O2, GCS, urine, CRP;
	double DeathScore = 0.0;

	printf("年齢は？ >");
	scanf("%d", &age);
	printf("性別(男:0 女:1)は？ >");
	scanf("%d", &sex);
	printf("並存患者数は？ >");
	scanf("%d", &NOCP);
	printf("呼吸数は？ >");
	scanf("%d", &breath);
	printf("GCSは？ >");
	scanf("%d", &GCS);
	printf("酸素飽和度は？ >");
	scanf("%d", &O2);
	printf("尿意は？ >");
	scanf("%d", &urine);
	printf("CRPは？ >");
	scanf("%d", &CRP);
	printf("\n\n");

	//年齢のdeath計算
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
	//性別のdeath計算
	if (sex == 0) {
		DeathScore = DeathScore + 1;
	}
	//並存患者数のdeath計算
	if (NOCP == 0) {
		DeathScore = DeathScore + 0;
	}
	else if (NOCP == 1) {
		DeathScore = DeathScore + 1;
	}
	else {
		DeathScore = DeathScore + 2;
	}

	//呼吸数のdeath計算
	if (breath < 20) {
		DeathScore = DeathScore + 0;
	}
	else if (breath < 30) {
		DeathScore = DeathScore + 1;
	}
	else {
		DeathScore = DeathScore + 2;
	}
	//GCSのdeath計算
	if (GCS < 92) {
		DeathScore = DeathScore + 2;
	}
	//酸素飽和度のdeath計算
	if (O2 < 15) {
		DeathScore = DeathScore + 2;
	}
	//尿意のdeath計算
	if (urine < 7) {
		DeathScore = DeathScore + 0;
	}
	else if (urine < 15) {
		DeathScore = DeathScore + 1;
	}
	else {
		DeathScore = DeathScore + 3;
	}
	//CRPのdeath計算
	if (CRP < 50) {
		DeathScore = DeathScore + 0;
	}
	else if (CRP < 100) {
		DeathScore = DeathScore + 1;
	}
	else {
		DeathScore = DeathScore + 2;
	}

	printf("死亡スコア= %lf\n", DeathScore);


	
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
	printf("スコア6は中間グループ(スコア%s)に分類され, 作られたモデルの検証データにおいては中間グループの",death_c);
	printf("%.1f\%(%d名中%d人)が入院中に亡くなった。", (float(death_var[death_][3]) / float(death_var[death_][2]))*100, death_var[death_][2], death_var[death_][3]);
	printf("\n[パーセント表示は小数点第二桁切り捨て]");


	return 0;
}