#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include "calculate.h"
#include "hwotousesimplecalculater.h"

int mainpage()
{
	for (; ; )
	{
		system("cls");
		printf("### Simple Calculater Ver. 0.1.202010011644.10 ###\n\n");
		printf("########## Menu #########\n\n");
		printf("[1] Calculate\n");
		printf("[2] How to use\n");
		printf("[3] Getting Ready\n");

		int codenum = 0;
		printf("Enter a codenumber:");
		scanf_s("%d", &codenum);

		if (codenum == 1) {
			calculate();
		}
		else if (codenum == 2) {
			howtouse();
		}
		else if (codenum == 3) {
			printf("ERROR\n");
			system("pause");
		}
		else {
			printf("ERROR\n");
			system("pause");
		}
	}
	return 0;
}
