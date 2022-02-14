#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

// makingBox
void startline(int a);					// �ڽ� �����(������)
void middleline1(int b, int a);			// �ڽ� �����(�߰���)
void middleline2(int b, int a);			// �ڽ� �����(�߰���)
void endline(int a);					// �ڽ� �����(����)

// intro
void intro(void);						// ���� ������
int QnA(void);							// ���� �м� or ���� ���� ����

// questionList
void errorMsg(void);					// �������� �亯 �߸� �Է����� �� ������ ���� �޼���
void preMessage1(void);					// ���� �� �ȳ� �޼���
int questionList(void);					// ���� �м�
void loading(void);						// ���� �м��߿� ������ ȭ��

// randomGame
void preMessage2(void);					// ���� �� �ȳ� �޼���
int randomGame(void);					// ���� ��÷ ���� (����������)
int win(void);							// ���ӿ��� �̰��� ���
int lose(void);							// ���ӿ��� ���� ���

// result
void travel(int type, int destination);	// ������ ���
void question(void);					// ���� �м� ���� �� ����Ʈ �Ǵ� ����
void game(void);						// ���� ���� �� ����Ʈ �Ǵ� ����
int reply(void);						// ó������ ���ư��� or ���α׷� ������


int main(void) {

	int response = 0;
	int destination = 0; // ������ �����

	system("color F0"); // �ܼ�â ����(���)
	system("mode con cols=100 lines=37"); // �ܼ�â ũŰ
	system("title �泲 ������ ��õ ���α׷�"); // �ܼ�â ����

	// ���α׷� ����
	while (1) {

		intro();

		int type = QnA();

		// ���� �м�
		if (type == 1) {
			preMessage1();
			destination = questionList();
			travel(type, destination);
			response = reply();

			// ó�� ȭ������ ���ư���
			if (response == 1)
				continue;
			// ���α׷� ����
			else if (response == 2)
				break;
		}

		// ���� ����
		else if (type == 2) {
			preMessage2();
			do {
				int resultOfGame = randomGame();

				// ���ӿ��� �̱� ���
				if (resultOfGame == 1) {
					destination = win();
					travel(type, destination);
					response = reply();

					// ó�� ȭ������ ���ư���
					if (response == 1)
						break;
					// ���α׷� ����
					else if (response == 2)
						return;
				}

				// ���ӿ��� �� ���
				else if (resultOfGame == 2) {
					int choice = lose();

					// ���� �絵��
					if (choice == 1)
						continue;
					// ó�� ȭ������ ���ư���
					else if (choice == 2)
						break;
				}
			} while (1);
		}
	}
	return 0;
}