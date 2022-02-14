#include <stdio.h>
#include <Windows.h>

// 질문지에 답변을 잘못 입력했을 때 나오는 에러 메세지
void errorMsg(void) {
	printf("\n\n\033[1;31m**잘못 입력하셨습니다! 다시 입력해주세요!**\033[0m\n"); // 글자색 빨강
	Sleep(1000);
}

// 취향 분석중 화면 (로딩 화면)
void loading(void) {
	for (int i = 0; i < 7; i++) {
		system("cls");
		printf("\n\n");
		printf("\t\t\t취향 분석중 . . .\n\n\n\n\t");

		for (int j = 0; j < 7; j++) {
			if (j <= i)
				printf("▶\t");
			else
				printf("▷\t");
		}
		Sleep(500);
	}
	system("cls");
	startline(70);
	middleline1(2, 70);
	printf("│\t\t취향 분석이 완료되었습니다!\t\t\t       │");
	middleline2(1, 70);
	printf("│\t\t결과를 확인하려면 엔터 키를 눌러주세요.\t\t       │");
	middleline2(2, 70);
	endline(70);

	getch();
}

// 질문 전 안내 메세지
void preMessage1(void) {
	system("cls");

	startline(70);
	middleline1(1, 70);
	printf("│\t취향 분석을 선택하셨군요!\t\t\t\t       │");
	middleline2(2, 70);
	printf("│\t당신의 취향을 분석하기 위해 몇가지 질문을 준비했어요.\t       │");
	middleline2(3, 70);
	printf("│\t질문을 잘 읽고, 답변에 해당하는 숫자를 입력해주세요!\t       │");
	middleline2(1, 70);
	endline(70);
	printf("\n\n\t엔터 키를 누르면 질문지가 생성됩니다.");

	getch();
}


// 취향 분석
int questionList(void) {
	system("cls");
	int answer[5] = { 0 };
	// 질문 리스트
	printf("\n\n□■□■□■□■□■□■□■□ 질문 리스트 □■□■□■□■□■□■□■□\n\n\n\n");

	// 1번 질문 : answer[0]
	do {
		printf("\n\nQ1. 나는 역사 유적 탐방을 좋아한다.\n\n");
		printf("\t(1) 그렇다\t\t(2) 아니다\t\t");
		printf("Q1의 답변 : _\b");
		scanf_s("%d", &answer[0]);
		if (answer[0] != 1 && answer[0] != 2)
			errorMsg();
	} while (answer[0] != 1 && answer[0] != 2);

	// 2번 질문 : answer[1]
	do {
		printf("\n\n\nQ2. 나는 걷는 것을 좋아한다.\n\n");
		printf("\t(1) 그렇다\t\t(2) 아니다\t\t");
		printf("Q2의 답변 : _\b");
		scanf_s("%d", &answer[1]);
		if (answer[1] != 1 && answer[1] != 2)
			errorMsg();
	} while (answer[1] != 1 && answer[1] != 2);

	// 3번 질문 : answer[2]
	do {
		printf("\n\n\nQ3. 나는 자연 경치를 구경하는 것을 좋아한다.\n\n");
		printf("\t(1) 그렇다\t\t(2) 아니다\t\t");
		printf("Q3의 답변 : _\b");
		scanf_s("%d", &answer[2]);
		if (answer[2] != 1 && answer[2] != 2)
			errorMsg();
	} while (answer[2] != 1 && answer[2] != 2);

	// 4번 질문 : answer[3]
	do {
		printf("\n\n\nQ4. 나는 평범한 곳 보다는 이색적이고 특별한 곳을 더 좋아한다.\n\n");
		printf("\t(1) 그렇다\t\t(2) 아니다\t\t");
		printf("Q4의 답변 : _\b");
		scanf_s("%d", &answer[3]);
		if (answer[3] != 1 && answer[3] != 2)
			errorMsg();
	} while (answer[3] != 1 && answer[3] != 2);

	// 5번 질문 : answer[4]
	do {
		printf("\n\n\nQ5. 나는 사진 찍는 것, SNS에 게시하는 것을 좋아한다.\n\n");
		printf("\t(1) 그렇다\t\t(2) 아니다\t\t");
		printf("Q5의 답변 : _\b");
		scanf_s("%d", &answer[4]);
		if (answer[4] != 1 && answer[4] != 2)
			errorMsg();
	} while (answer[4] != 1 && answer[4] != 2);

	printf("\n\n\n□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□\n\n");
	startline(70);
	middleline1(1, 70);
	printf("│\t\t와~ 질문지를 모두 완성하셨군요!\t\t\t       │");
	middleline2(2, 70);
	printf("│\t\t엔터 키를 누르면 취향 분석을 시작합니다!\t       │");
	middleline2(1, 70);
	endline(70);

	getch();
	loading();



	// 취향별 여행지 분석
	// Q1 = O
	int destination = 0;
	if (answer[0] == 1) {
		if (answer[1] == 1 && answer[3] == 1)              // Q2,Q4 = O,O : destination1 : 공주 한옥마을
			destination = 1;
		else if (answer[1] == 1 && answer[3] == 2)         // Q2,Q4 = O,X : destination2 : 예산 수덕사
			destination = 2;
		else if (answer[1] == 2 && answer[3] == 1)         // Q2,Q4 = X,O : destination3 : 천안 독립 기념관
			destination = 3;
		else if (answer[1] == 2 && answer[3] == 2)         // Q2,Q4 = X,X : destination4 : 예산 한국 고건축 박물관
			destination = 4;
	}

	// Q1 = X
	else if (answer[0] == 2) {
		// Q2 = O
		if (answer[1] == 1) {
			if (answer[2] == 1 && answer[3] == 1)                  // Q3,Q4 = O,O : destination5 : 아산 지중해 마을
				destination = 5;
			else if (answer[2] == 1 && answer[3] == 2)             // Q3,Q4 = O,X : destination6 : 용봉산
				destination = 6;
			else if (answer[2] == 2 && answer[3] == 1)             // Q3,Q4 = X,O : destination7 : 당진 삽교호 놀이동산
				destination = 7;
			else if (answer[2] == 2 && answer[3] == 2)             // Q3,Q4 = X,X : destination8 : 대천 해수욕장
				destination = 8;
		}

		// Q2 = X
		else if (answer[1] == 2) {
			if (answer[2] == 1 && answer[3] == 1)                   // Q3,Q4 = O,O : destination9 : 금산 하늘 물빛 정원
				destination = 9;
			else if (answer[2] == 1 && answer[3] == 2)             // Q3,Q4 = O,X : destination10 : 예산 덕산 온천
				destination = 10;
			else if (answer[2] == 2 && answer[3] == 1)             // Q3,Q4 = X,O : destination11 : 태안 빛 축제
				destination = 11;
			else if (answer[2] == 2 && answer[3] == 2)             // Q3,Q4 = X,X : destination12 : 당진 난지섬
				destination = 12;
		}
	}
	return destination;
}