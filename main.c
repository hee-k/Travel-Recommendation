#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

// makingBox
void startline(int a);					// 박스 만들기(시작줄)
void middleline1(int b, int a);			// 박스 만들기(중간줄)
void middleline2(int b, int a);			// 박스 만들기(중간줄)
void endline(int a);					// 박스 만들기(끝줄)

// intro
void intro(void);						// 시작 페이지
int QnA(void);							// 취향 분석 or 랜덤 게임 선택

// questionList
void errorMsg(void);					// 질문지에 답변 잘못 입력했을 때 나오는 에러 메세지
void preMessage1(void);					// 질문 전 안내 메세지
int questionList(void);					// 취향 분석
void loading(void);						// 취향 분석중에 나오는 화면

// randomGame
void preMessage2(void);					// 게임 전 안내 메세지
int randomGame(void);					// 랜덤 추첨 게임 (가위바위보)
int win(void);							// 게임에서 이겼을 경우
int lose(void);							// 게임에서 졌을 경우

// result
void travel(int type, int destination);	// 여행지 출력
void question(void);					// 취향 분석 했을 때 프린트 되는 내용
void game(void);						// 게임 했을 때 프린트 되는 내용
int reply(void);						// 처음으로 돌아가기 or 프로그램 끝내기


int main(void) {

	int response = 0;
	int destination = 0; // 여행지 결과값

	system("color F0"); // 콘솔창 배경색(흰색)
	system("mode con cols=100 lines=37"); // 콘솔창 크키
	system("title 충남 여행지 추천 프로그램"); // 콘솔창 제목

	// 프로그램 실행
	while (1) {

		intro();

		int type = QnA();

		// 취향 분석
		if (type == 1) {
			preMessage1();
			destination = questionList();
			travel(type, destination);
			response = reply();

			// 처음 화면으로 돌아가기
			if (response == 1)
				continue;
			// 프로그램 종료
			else if (response == 2)
				break;
		}

		// 랜덤 게임
		else if (type == 2) {
			preMessage2();
			do {
				int resultOfGame = randomGame();

				// 게임에서 이긴 경우
				if (resultOfGame == 1) {
					destination = win();
					travel(type, destination);
					response = reply();

					// 처음 화면으로 돌아가기
					if (response == 1)
						break;
					// 프로그램 종료
					else if (response == 2)
						return;
				}

				// 게임에서 진 경우
				else if (resultOfGame == 2) {
					int choice = lose();

					// 게임 재도전
					if (choice == 1)
						continue;
					// 처음 화면으로 돌아가기
					else if (choice == 2)
						break;
				}
			} while (1);
		}
	}
	return 0;
}