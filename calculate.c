#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include "MainPage.h"

int calculate()
{
	for (; ; )
	{
		system("cls");
		printf("### Calculate ###\n\n\n\n");
		printf("[1] Addition\n");
		printf("[2] Subtraction\n");
		printf("[3] Multiplication\n");
		printf("[4] Division \n");

		printf("enter a codenumber:");
		int codenum = 0;
		scanf_s("%d", &codenum);

		if (codenum == 1) {
			system("cls");
			printf("Enter two numbers:");
			int numbers[2];
			scanf_s("%d%d", &numbers[0], &numbers[1]);
			printf("\n\n%d\n", numbers[0] + numbers[1]);
			system("pause");
			mainpage();
		}
		else if (codenum == 2) {
			system("cls");
			printf("Enter two numbers:");
			int numbers[2];
			scanf_s("%d%d", &numbers[0], &numbers[1]);
			printf("\n\n%d\n", numbers[0] - numbers[1]);
			system("pause");
			mainpage();
		}
		else if (codenum == 3) {
			system("cls");
			printf("Enter two numbers:");
			int numbers[2];
			scanf_s("%d%d", &numbers[0], &numbers[1]);
			printf("\n\n%d\n", numbers[0] * numbers[1]);
			system("pause");
			mainpage();
		}
		else if (codenum == 4) {
			system("cls");
			printf("Enter two numbers:");
			double numbers[2];
			scanf_s("%lf%lf", &numbers[0], &numbers[1]);
			printf("\n\n%lf\n", numbers[0] / numbers[1]);
			system("pause");
			mainpage();
		}
		else {
			printf("ERROR");
			system("pause");
			mainpage();
		}
	}
	return 0;
}
