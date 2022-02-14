#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

// 게임 전 안내 메세지
void preMessage2(void) {
	system("cls");

	startline(70);
	middleline1(1, 70);
	printf("│\t랜덤 추천을 선택하셨군요!\t\t\t\t       │");
	middleline2(2, 70);
	printf("│\t지금부터 컴퓨터와 가위바위보 게임을 진행합니다.\t\t       │");
	middleline2(3, 70);
	printf("│\t게임에서 이기면 랜덤으로 여행지를 추천받을 수 있어요!\t       │");
	middleline2(2, 70);
	printf("│\t게임에서 져도 재도전이 가능하니 긴장하지 마세요~\t       │");
	middleline2(3, 70);
	printf("│\t그럼, 건투를 빕니다 ^____^\t\t\t\t       │");
	middleline2(1, 70);
	endline(70);

	printf("\n\t엔터 키를 누르면 게임이 시작됩니다!");
	getch();
}

// 랜덤 추첨 게임(가위바위보)
int randomGame(void) {
	system("cls");

	char* str[3] = { "가위", "바위", "보" };
	char win = 0;
	int player = 0;
	int count = 0;
	int score[3] = { 0 };

	srand(time(NULL));

	printf("\n■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□\n");
	printf("□                                                                    ■\n");
	printf("■                    가위바위보 게임을 시작합니다!                   □\n");
	printf("□                                                                    ■\n");
	printf("■                                                                    □\n");
	printf("□                     게임은 총 3회 진행됩니다.                      ■\n");
	printf("■                                                                    □\n");
	printf("□                 3회 중 1회 이상 이기면 승리합니다.                 ■\n");
	printf("■                                                                    □\n");
	printf("□                                                                    ■\n");
	printf("■                   [1 : 가위] [2 : 바위] [3 : 보]                   □\n");
	printf("□                                                                    ■\n");
	printf("■                 세 가지 중 원하는 숫자를 입력하세요.               □\n");
	printf("□                                                                    ■\n");
	printf("■                                                                    □\n");
	printf("□                        그럼 시작합니다!                            ■\n");
	printf("■                                                                    □\n");
	printf("□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■\n\n\n");


	// 랜덤 추첨 게임(가위바위보)
	while (count < 3) {
		int computer = rand() % 3 + 1;

		printf("\t\t\t    < %d회차 >\n\n", count + 1);
		printf("\t\t안 내면 진거, 가위 바위 보 !! : _\b");
		scanf_s("%d", &player);
		Sleep(1000);

		if (player < 1 || player > 3) {
			printf("\n\n\t\t\033[1;31m잘못 입력했습니다. 다시 입력하세요.\033[0m\n\n"); // 글자색 빨강
			printf("~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * \n\n");
			continue;
		}

		printf("\n\n\t\t당  신 : %s", str[player - 1]);
		printf("\t\t컴퓨터 : %s\n", str[computer - 1]);

		if (player == computer) {
			printf("\n\t\t\033[0;32m결  과 : 비겼습니다!\033[0m\n\n"); // 글자색 초록
			printf("~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * \n\n");
			score[0]++;
		}
		else {
			switch (player) {
			case 1:
				if (computer == 3)
					win = 1;
				break;

			case 2:
				if (computer == 1)
					win = 1;
				break;

			case 3:
				if (computer == 2)
					win = 1;
				break;
			}

			if (win == 1) {
				printf("\n\t\t\033[0;34m결  과 : 당신이 이겼습니다!\033[0m\n\n"); // 글자색 파랑
				printf("~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * \n\n");
				score[1]++;
			}
			else {
				printf("\n\t\t\033[0;31m결  과 : 당신이 졌습니다!\033[0m\n\n"); // 글자색 빨강
				printf("~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * \n\n");
				score[2]++;
			}
		}
		count++;
	}
	printf("■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□\n\n\n");
	if (score[1] >= 1) { // 승
		printf("\n\n\t\t\033[0;34m게임 결과 : < %d 승 / %d 패 / %d 무승부 >\033[0m\n\n\n", score[1], score[2], score[0]); // 글자색 파랑
		printf("\n\n\t    다음 화면으로 넘어가려면 엔터 키를 눌러주세요.");
		getch();
		return 1;
	}
	else if (score[1] == 0) { // 패
		printf("\n\n\t\t\033[0;31m게임 결과 : < %d 승 / %d 패 / %d 무승부 >\033[0m\n\n\n", score[1], score[2], score[0]); // 글자색 빨강
		printf("\n\n\t    다음 화면으로 넘어가려면 엔터 키를 눌러주세요.");
		getch();
		return 2;
	}
}

// 게임에서 이겼을 경우
int win(void) {
	system("cls");

	startline(70);
	middleline1(2, 70);
	printf("│\t\t짝짝짝~ 게임에서 이겼습니다!\t\t\t       │");
	middleline2(2, 70);
	printf("│\t\t랜덤으로 여행지를 추첨합니다!\t\t\t       │");
	middleline2(2, 70);
	endline(70);
	Sleep(3000);

	system("cls");

	for (int i = 0; i < 7; i++) {
		system("cls");
		printf("\n\n");
		printf("\t\t\t랜덤 추첨중 . . .\n\n\n\n\t");

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
	printf("│\t\t랜덤 추첨이 완료되었습니다!\t\t\t       │");
	middleline2(1, 70);
	printf("│\t\t결과를 확인하려면 엔터 키를 눌러주세요.\t\t       │");
	middleline2(2, 70);
	endline(70);
	getch();


	// 랜덤으로 여행지 추첨
	srand(time(NULL));

	int result = rand() % 12 + 1;

	return result;
}

// 게임에서 졌을 경우
int lose(void) {
	static int choice = 0;

	system("cls");
	startline(70);
	middleline1(2, 70);
	printf("│\t\t게임에서 졌습니다...ㅠ_ㅠ\t\t\t       │");
	middleline2(2, 70);
	printf("│\t\t게임에서 이겨야 여행지를 추천받을 수 있습니다.\t       │");
	middleline2(2, 70);
	endline(70);

	printf("\n\n\t\t게임에 재도전 하려면     1번\n\n");
	printf("\t\t처음 화면으로 돌아가려면 2번을 눌러주세요. : _\b");
	scanf_s("%d", &choice);

	return choice;
}