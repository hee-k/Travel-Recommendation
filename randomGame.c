#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

// ���� �� �ȳ� �޼���
void preMessage2(void) {
	system("cls");

	startline(70);
	middleline1(1, 70);
	printf("��\t���� ��õ�� �����ϼ̱���!\t\t\t\t       ��");
	middleline2(2, 70);
	printf("��\t���ݺ��� ��ǻ�Ϳ� ���������� ������ �����մϴ�.\t\t       ��");
	middleline2(3, 70);
	printf("��\t���ӿ��� �̱�� �������� �������� ��õ���� �� �־��!\t       ��");
	middleline2(2, 70);
	printf("��\t���ӿ��� ���� �絵���� �����ϴ� �������� ������~\t       ��");
	middleline2(3, 70);
	printf("��\t�׷�, ������ ���ϴ� ^____^\t\t\t\t       ��");
	middleline2(1, 70);
	endline(70);

	printf("\n\t���� Ű�� ������ ������ ���۵˴ϴ�!");
	getch();
}

// ���� ��÷ ����(����������)
int randomGame(void) {
	system("cls");

	char* str[3] = { "����", "����", "��" };
	char win = 0;
	int player = 0;
	int count = 0;
	int score[3] = { 0 };

	srand(time(NULL));

	printf("\n�������������������������������������\n");
	printf("��                                                                    ��\n");
	printf("��                    ���������� ������ �����մϴ�!                   ��\n");
	printf("��                                                                    ��\n");
	printf("��                                                                    ��\n");
	printf("��                     ������ �� 3ȸ ����˴ϴ�.                      ��\n");
	printf("��                                                                    ��\n");
	printf("��                 3ȸ �� 1ȸ �̻� �̱�� �¸��մϴ�.                 ��\n");
	printf("��                                                                    ��\n");
	printf("��                                                                    ��\n");
	printf("��                   [1 : ����] [2 : ����] [3 : ��]                   ��\n");
	printf("��                                                                    ��\n");
	printf("��                 �� ���� �� ���ϴ� ���ڸ� �Է��ϼ���.               ��\n");
	printf("��                                                                    ��\n");
	printf("��                                                                    ��\n");
	printf("��                        �׷� �����մϴ�!                            ��\n");
	printf("��                                                                    ��\n");
	printf("�������������������������������������\n\n\n");


	// ���� ��÷ ����(����������)
	while (count < 3) {
		int computer = rand() % 3 + 1;

		printf("\t\t\t    < %dȸ�� >\n\n", count + 1);
		printf("\t\t�� ���� ����, ���� ���� �� !! : _\b");
		scanf_s("%d", &player);
		Sleep(1000);

		if (player < 1 || player > 3) {
			printf("\n\n\t\t\033[1;31m�߸� �Է��߽��ϴ�. �ٽ� �Է��ϼ���.\033[0m\n\n"); // ���ڻ� ����
			printf("~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * \n\n");
			continue;
		}

		printf("\n\n\t\t��  �� : %s", str[player - 1]);
		printf("\t\t��ǻ�� : %s\n", str[computer - 1]);

		if (player == computer) {
			printf("\n\t\t\033[0;32m��  �� : �����ϴ�!\033[0m\n\n"); // ���ڻ� �ʷ�
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
				printf("\n\t\t\033[0;34m��  �� : ����� �̰���ϴ�!\033[0m\n\n"); // ���ڻ� �Ķ�
				printf("~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * \n\n");
				score[1]++;
			}
			else {
				printf("\n\t\t\033[0;31m��  �� : ����� �����ϴ�!\033[0m\n\n"); // ���ڻ� ����
				printf("~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * \n\n");
				score[2]++;
			}
		}
		count++;
	}
	printf("�������������������������������������\n\n\n");
	if (score[1] >= 1) { // ��
		printf("\n\n\t\t\033[0;34m���� ��� : < %d �� / %d �� / %d ���º� >\033[0m\n\n\n", score[1], score[2], score[0]); // ���ڻ� �Ķ�
		printf("\n\n\t    ���� ȭ������ �Ѿ���� ���� Ű�� �����ּ���.");
		getch();
		return 1;
	}
	else if (score[1] == 0) { // ��
		printf("\n\n\t\t\033[0;31m���� ��� : < %d �� / %d �� / %d ���º� >\033[0m\n\n\n", score[1], score[2], score[0]); // ���ڻ� ����
		printf("\n\n\t    ���� ȭ������ �Ѿ���� ���� Ű�� �����ּ���.");
		getch();
		return 2;
	}
}

// ���ӿ��� �̰��� ���
int win(void) {
	system("cls");

	startline(70);
	middleline1(2, 70);
	printf("��\t\t¦¦¦~ ���ӿ��� �̰���ϴ�!\t\t\t       ��");
	middleline2(2, 70);
	printf("��\t\t�������� �������� ��÷�մϴ�!\t\t\t       ��");
	middleline2(2, 70);
	endline(70);
	Sleep(3000);

	system("cls");

	for (int i = 0; i < 7; i++) {
		system("cls");
		printf("\n\n");
		printf("\t\t\t���� ��÷�� . . .\n\n\n\n\t");

		for (int j = 0; j < 7; j++) {
			if (j <= i)
				printf("��\t");
			else
				printf("��\t");
		}
		Sleep(500);
	}
	system("cls");
	startline(70);
	middleline1(2, 70);
	printf("��\t\t���� ��÷�� �Ϸ�Ǿ����ϴ�!\t\t\t       ��");
	middleline2(1, 70);
	printf("��\t\t����� Ȯ���Ϸ��� ���� Ű�� �����ּ���.\t\t       ��");
	middleline2(2, 70);
	endline(70);
	getch();


	// �������� ������ ��÷
	srand(time(NULL));

	int result = rand() % 12 + 1;

	return result;
}

// ���ӿ��� ���� ���
int lose(void) {
	static int choice = 0;

	system("cls");
	startline(70);
	middleline1(2, 70);
	printf("��\t\t���ӿ��� �����ϴ�...��_��\t\t\t       ��");
	middleline2(2, 70);
	printf("��\t\t���ӿ��� �̰ܾ� �������� ��õ���� �� �ֽ��ϴ�.\t       ��");
	middleline2(2, 70);
	endline(70);

	printf("\n\n\t\t���ӿ� �絵�� �Ϸ���     1��\n\n");
	printf("\t\tó�� ȭ������ ���ư����� 2���� �����ּ���. : _\b");
	scanf_s("%d", &choice);

	return choice;
}