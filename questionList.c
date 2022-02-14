#include <stdio.h>
#include <Windows.h>

// �������� �亯�� �߸� �Է����� �� ������ ���� �޼���
void errorMsg(void) {
	printf("\n\n\033[1;31m**�߸� �Է��ϼ̽��ϴ�! �ٽ� �Է����ּ���!**\033[0m\n"); // ���ڻ� ����
	Sleep(1000);
}

// ���� �м��� ȭ�� (�ε� ȭ��)
void loading(void) {
	for (int i = 0; i < 7; i++) {
		system("cls");
		printf("\n\n");
		printf("\t\t\t���� �м��� . . .\n\n\n\n\t");

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
	printf("��\t\t���� �м��� �Ϸ�Ǿ����ϴ�!\t\t\t       ��");
	middleline2(1, 70);
	printf("��\t\t����� Ȯ���Ϸ��� ���� Ű�� �����ּ���.\t\t       ��");
	middleline2(2, 70);
	endline(70);

	getch();
}

// ���� �� �ȳ� �޼���
void preMessage1(void) {
	system("cls");

	startline(70);
	middleline1(1, 70);
	printf("��\t���� �м��� �����ϼ̱���!\t\t\t\t       ��");
	middleline2(2, 70);
	printf("��\t����� ������ �м��ϱ� ���� ��� ������ �غ��߾��.\t       ��");
	middleline2(3, 70);
	printf("��\t������ �� �а�, �亯�� �ش��ϴ� ���ڸ� �Է����ּ���!\t       ��");
	middleline2(1, 70);
	endline(70);
	printf("\n\n\t���� Ű�� ������ �������� �����˴ϴ�.");

	getch();
}


// ���� �м�
int questionList(void) {
	system("cls");
	int answer[5] = { 0 };
	// ���� ����Ʈ
	printf("\n\n���������������� ���� ����Ʈ ����������������\n\n\n\n");

	// 1�� ���� : answer[0]
	do {
		printf("\n\nQ1. ���� ���� ���� Ž���� �����Ѵ�.\n\n");
		printf("\t(1) �׷���\t\t(2) �ƴϴ�\t\t");
		printf("Q1�� �亯 : _\b");
		scanf_s("%d", &answer[0]);
		if (answer[0] != 1 && answer[0] != 2)
			errorMsg();
	} while (answer[0] != 1 && answer[0] != 2);

	// 2�� ���� : answer[1]
	do {
		printf("\n\n\nQ2. ���� �ȴ� ���� �����Ѵ�.\n\n");
		printf("\t(1) �׷���\t\t(2) �ƴϴ�\t\t");
		printf("Q2�� �亯 : _\b");
		scanf_s("%d", &answer[1]);
		if (answer[1] != 1 && answer[1] != 2)
			errorMsg();
	} while (answer[1] != 1 && answer[1] != 2);

	// 3�� ���� : answer[2]
	do {
		printf("\n\n\nQ3. ���� �ڿ� ��ġ�� �����ϴ� ���� �����Ѵ�.\n\n");
		printf("\t(1) �׷���\t\t(2) �ƴϴ�\t\t");
		printf("Q3�� �亯 : _\b");
		scanf_s("%d", &answer[2]);
		if (answer[2] != 1 && answer[2] != 2)
			errorMsg();
	} while (answer[2] != 1 && answer[2] != 2);

	// 4�� ���� : answer[3]
	do {
		printf("\n\n\nQ4. ���� ����� �� ���ٴ� �̻����̰� Ư���� ���� �� �����Ѵ�.\n\n");
		printf("\t(1) �׷���\t\t(2) �ƴϴ�\t\t");
		printf("Q4�� �亯 : _\b");
		scanf_s("%d", &answer[3]);
		if (answer[3] != 1 && answer[3] != 2)
			errorMsg();
	} while (answer[3] != 1 && answer[3] != 2);

	// 5�� ���� : answer[4]
	do {
		printf("\n\n\nQ5. ���� ���� ��� ��, SNS�� �Խ��ϴ� ���� �����Ѵ�.\n\n");
		printf("\t(1) �׷���\t\t(2) �ƴϴ�\t\t");
		printf("Q5�� �亯 : _\b");
		scanf_s("%d", &answer[4]);
		if (answer[4] != 1 && answer[4] != 2)
			errorMsg();
	} while (answer[4] != 1 && answer[4] != 2);

	printf("\n\n\n��������������������������������������\n\n");
	startline(70);
	middleline1(1, 70);
	printf("��\t\t��~ �������� ��� �ϼ��ϼ̱���!\t\t\t       ��");
	middleline2(2, 70);
	printf("��\t\t���� Ű�� ������ ���� �м��� �����մϴ�!\t       ��");
	middleline2(1, 70);
	endline(70);

	getch();
	loading();



	// ���⺰ ������ �м�
	// Q1 = O
	int destination = 0;
	if (answer[0] == 1) {
		if (answer[1] == 1 && answer[3] == 1)              // Q2,Q4 = O,O : destination1 : ���� �ѿ�����
			destination = 1;
		else if (answer[1] == 1 && answer[3] == 2)         // Q2,Q4 = O,X : destination2 : ���� ������
			destination = 2;
		else if (answer[1] == 2 && answer[3] == 1)         // Q2,Q4 = X,O : destination3 : õ�� ���� ����
			destination = 3;
		else if (answer[1] == 2 && answer[3] == 2)         // Q2,Q4 = X,X : destination4 : ���� �ѱ� ����� �ڹ���
			destination = 4;
	}

	// Q1 = X
	else if (answer[0] == 2) {
		// Q2 = O
		if (answer[1] == 1) {
			if (answer[2] == 1 && answer[3] == 1)                  // Q3,Q4 = O,O : destination5 : �ƻ� ������ ����
				destination = 5;
			else if (answer[2] == 1 && answer[3] == 2)             // Q3,Q4 = O,X : destination6 : �����
				destination = 6;
			else if (answer[2] == 2 && answer[3] == 1)             // Q3,Q4 = X,O : destination7 : ���� ��ȣ ���̵���
				destination = 7;
			else if (answer[2] == 2 && answer[3] == 2)             // Q3,Q4 = X,X : destination8 : ��õ �ؼ�����
				destination = 8;
		}

		// Q2 = X
		else if (answer[1] == 2) {
			if (answer[2] == 1 && answer[3] == 1)                   // Q3,Q4 = O,O : destination9 : �ݻ� �ϴ� ���� ����
				destination = 9;
			else if (answer[2] == 1 && answer[3] == 2)             // Q3,Q4 = O,X : destination10 : ���� ���� ��õ
				destination = 10;
			else if (answer[2] == 2 && answer[3] == 1)             // Q3,Q4 = X,O : destination11 : �¾� �� ����
				destination = 11;
			else if (answer[2] == 2 && answer[3] == 2)             // Q3,Q4 = X,X : destination12 : ���� ������
				destination = 12;
		}
	}
	return destination;
}