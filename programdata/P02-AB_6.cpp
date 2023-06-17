#include <stdio.h>

int main(void) {
	int age, sex, NOCP, breath, O2, GCS, urine,CRP;
	double DeathScore = 0.0;

	printf("”N—î‚ÍH >");
	scanf("%d", &age);
	printf("«•Ê(’j:0 —:1)‚ÍH >");
	scanf("%d", &sex);
	printf("•À‘¶Š³Ò”‚ÍH >");
	scanf("%d", &NOCP);
	printf("ŒÄ‹z”‚ÍH >");
	scanf("%d", &breath);
	printf("GCS‚ÍH >");
	scanf("%d", &GCS);
	printf("_‘f–O˜a“x‚ÍH >");
	scanf("%d", &O2);
	printf("”AˆÓ‚ÍH >");
	scanf("%d", &urine);
	printf("CRP‚ÍH >");
	scanf("%d", &CRP);
	printf("\n\n");

	//”N—î‚ÌdeathŒvZ
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
	//«•Ê‚ÌdeathŒvZ
	if (sex == 0) {
		DeathScore = DeathScore + 1;
	}
	//•À‘¶Š³Ò”‚ÌdeathŒvZ
	if (NOCP == 0) {
		DeathScore = DeathScore + 0;
	}
	else if (NOCP == 1) {
		DeathScore = DeathScore + 1;
	}
	else {
		DeathScore = DeathScore + 2;
	}

	//ŒÄ‹z”‚ÌdeathŒvZ
	if (breath < 20) {
	DeathScore = DeathScore + 0;
}
	else if (breath < 30) {
	DeathScore = DeathScore + 1;
	}
	else {
	DeathScore = DeathScore + 2;
	}
	//GCS‚ÌdeathŒvZ
	if (GCS < 92) {
		DeathScore = DeathScore + 2;
	}
	//_‘f–O˜a“x‚ÌdeathŒvZ
	if (O2 < 15) {
		DeathScore = DeathScore + 2;
	}
	//”AˆÓ‚ÌdeathŒvZ
	if (urine < 7) {
		DeathScore = DeathScore + 0;
	}
	else if (urine < 15) {
		DeathScore = DeathScore + 1;
	}
	else{
		DeathScore = DeathScore + 3;
	}
	//CRP‚ÌdeathŒvZ
	if (CRP < 50) {
		DeathScore = DeathScore + 0;
	}
	else if (CRP < 100) {
		DeathScore = DeathScore + 1;
	}
	else{
		DeathScore = DeathScore + 2;
	}

	printf("€–SƒXƒRƒA= %lf", DeathScore);
	return 0;
}