﻿#include <stdio.h>

int main()
{
	int choice;
	do {
		printf("새 게임: 1\n");
		printf("불러오기 2\n");
		printf("설정: 3\n");
		printf("크레딧: 4\n");
		printf("종료: 5\n");
		printf("메뉴를 선택하시요 :");
		scanf_s("%d", &choice);

		switch (choice) {
		case 1:
			printf("새 게임.\n");
			break;
		case 2:
			printf("불러오기.\n");
			break;
		case 3:
			printf("설정.\n");
			break;
		case 4:
			printf("크레딧.\n");
			break;
		case 5:
			printf("종료.\n");
			break;
		default:
			printf("잘못 입력하셨습니다.\n");
			break;
		}
	} while (choice != 5);
}