#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	FILE* f;
	char *name[5];
	char temp[16];
	int len = 0;
	int num[5], numb[5],mid[5], fin[5], hw1[5], hw2[5], att[5];

	if (fopen_s(&f, "input.txt", "r") != NULL) {
		printf("파일이 열리지 않습니다. \n");
		exit(1);
	}

	for (int i = 0; i < 5; i++) {
		fscanf(f, "%d %d %s %d %d %d %d %d", &num[i], &numb[i], temp, &mid[i], &fin[i], &hw1[i], &hw2[i], &att[i]);
		len = strlen(temp)+1;

		name[i] = malloc(sizeof(char) * len);
		strcpy(name[i], temp);
		printf("%d %d %s %d   %d   %d   %d   %d\n", num[i], numb[i], name[i], mid[i], fin[i], hw1[i], hw2[i], att[i]);
		printf("	        %.1lf %.1lf  %.1lf  %.1lf   %d ", (mid[i] * 0.3), (fin[i] * 0.4), (hw1[i] * 0.1), (hw2[i] * 0.1), att[i]);
		double a = (mid[i] * 0.3) + (fin[i] * 0.4) + (hw1[i] * 0.1) + (hw2[i] * 0.1) + att[i];
		printf(" %.1lf", a);
	
		if (a >= 95)
			printf("\t\tA+\n");
		else if (a >= 90)
			printf("\t\tA0\n");
		else if (a >= 85)
			printf("\t\tB+\n");
		else if (a >= 80)
			printf("\t\tB0\n");
		else if (a >= 75)
			printf("\t\tC+\n");
		else if (a >= 70)
			printf("\t\tC0\n");
		else if (a >= 65)
			printf("\t\tD+\n");
		else if (a >= 60)
			printf("\t\tD0\n");
		else
			printf("\t\tF\n");


	}
	fclose(f);

	if (fopen_s(&f, "output.txt", "w") != NULL) {
		printf("파일이 열리지 않습니다. \n");
		exit(1);
	}

	for (int i = 0; i < 5; i++) {
		fprintf(f, "%d %d %s %d   %d   %d   %d   %d\n", num[i], numb[i], name[i], mid[i], fin[i], hw1[i], hw2[i], att[i]);
		fprintf(f,"	        %.1lf %.1lf  %.1lf  %.1lf   %d ", (mid[i] * 0.3), (fin[i] * 0.4), (hw1[i] * 0.1), (hw2[i] * 0.1), att[i]);
		double a = (mid[i] * 0.3) + (fin[i] * 0.4) + (hw1[i] * 0.1) + (hw2[i] * 0.1) + att[i];
		fprintf(f," %.1lf", a);

		if (a >= 95)
			fprintf(f,"\t\tA+\n");
		else if (a >= 90)
			fprintf(f,"\t\tA0\n");
		else if (a >= 85)
			fprintf(f,"\t\tB+\n");
		else if (a >= 80)
			fprintf(f, "\t\tB0\n");
		else if (a >= 75)
			fprintf(f, "\t\tC+\n");
		else if (a >= 70)
			fprintf(f, "\t\tC0\n");
		else if (a >= 65)
			fprintf(f, "\t\tD+\n");
		else if (a >= 60)
			fprintf(f, "\t\tD0\n");
		else
			fprintf(f,"\t\tF\n");
	}

	fclose(f);

	
	for (int i = 0; i < 5; i++) {
		free(name[i]);
	}
	

	return 0;
}