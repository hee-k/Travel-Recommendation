#include <stdio.h>
#include <Windows.h>

// 시작 페이지
void intro() {
	system("cls");

	startline(70);
	middleline1(3, 70);
	printf("│\t\t\t        취향 저격!\t\t               │");
	middleline2(1, 70);
	printf("│\t\t     당신을 위한 여행지 추천 프로그램\t\t       │");
	middleline2(4, 70);
	printf("│%69s", "<HeeSun Kim>\t       │");
	middleline2(4, 70);
	endline(70);
	printf("\n\n\n\n\t시작하려면 엔터 키를 눌러주세요.");
	getch();

	system("cls");
	startline(70);
	middleline1(1, 70);
	printf("│\t어디로 여행을 가야될지 고민이신가요?\t\t\t       │");
	middleline2(1, 70);
	printf("│\t여행지를 고르는게 어려우신가요?\t\t\t\t       │");
	middleline2(1, 70);
	endline(70);
	printf("\n");
	Sleep(1500);

	startline(70);
	middleline1(1, 70);
	printf("│\t걱정 마세요!\t\t\t\t\t\t       │");
	middleline2(1, 70);
	printf("│\t당신의 취향에 딱맞는 충남 지역 여행지를 추천해드립니다!\t       │");
	middleline2(1, 70);
	endline(70);
	printf("\n\n\t다음으로 넘어가려면 엔터 키를 눌러주세요.");
	getch();
}

// 취향 분석 or 랜덤 게임 선택
int QnA(void) {
	int type = 0;

	system("cls");

	startline(70);
	middleline1(1, 70);
	printf("│\t여행지를 추천 받는 방법에는 두 가지가 있어요.\t\t       │");
	middleline2(1, 70);
	printf("│\t내용을 읽고, 당신의 유형을 숫자로 선택해주세요.\t\t       │");
	middleline2(1, 70);
	endline(70);
	printf("\n\n\t1. 나는 취향이 확고하다.\n\n");
	printf("\t\t=> 내 취향 분석하고 여행지 추천 받기\n\n\n");
	printf("\t2. 나는 내 취향을 잘 모른다.\n\n");
	printf("\t\t=> 컴퓨터랑 게임하고 랜덤으로 여행지 추천 받기\n\n\n");
	printf("\t답변 : _\b");
	scanf_s("%d", &type);

	return type;
}