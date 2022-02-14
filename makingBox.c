#include <stdio.h>

// 박스(사각형 배경) 만들기(a == 가로, b == 세로)

void startline(int a) {
	printf("┌");
	for (int i = 0; i < a; i++) // "─" 갯수 (가로)
		printf("─");
	printf("┐\n");
}

void middleline1(int b, int a) {

	for (int i = 0; i < b; i++) {	// "│" 갯수 (세로)
		printf("│");
		for (int j = 0; j < a; j++) // 공백 갯수 (가로)
			printf(" ");
		printf("│\n");
	}
}

void middleline2(int b, int a) {
	printf("\n");
	for (int i = 0; i < b; i++) {	// "│" 갯수 (세로)
		printf("│");
		for (int j = 0; j < a; j++) // 공백 갯수 (가로)
			printf(" ");
		printf("│\n");
	}
}
void endline(int a) {
	printf("└");
	for (int i = 0; i < a; i++) // "─" 갯수 (가로)
		printf("─");
	printf("┘\n");
}