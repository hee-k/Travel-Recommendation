#include <stdio.h>
#include <Windows.h>

// ���� ������
void intro() {
	system("cls");

	startline(70);
	middleline1(3, 70);
	printf("��\t\t\t        ���� ����!\t\t               ��");
	middleline2(1, 70);
	printf("��\t\t     ����� ���� ������ ��õ ���α׷�\t\t       ��");
	middleline2(4, 70);
	printf("��%69s", "<HeeSun Kim>\t       ��");
	middleline2(4, 70);
	endline(70);
	printf("\n\n\n\n\t�����Ϸ��� ���� Ű�� �����ּ���.");
	getch();

	system("cls");
	startline(70);
	middleline1(1, 70);
	printf("��\t���� ������ ���ߵ��� ����̽Ű���?\t\t\t       ��");
	middleline2(1, 70);
	printf("��\t�������� ���°� �����Ű���?\t\t\t\t       ��");
	middleline2(1, 70);
	endline(70);
	printf("\n");
	Sleep(1500);

	startline(70);
	middleline1(1, 70);
	printf("��\t���� ������!\t\t\t\t\t\t       ��");
	middleline2(1, 70);
	printf("��\t����� ���⿡ ���´� �泲 ���� �������� ��õ�ص帳�ϴ�!\t       ��");
	middleline2(1, 70);
	endline(70);
	printf("\n\n\t�������� �Ѿ���� ���� Ű�� �����ּ���.");
	getch();
}

// ���� �м� or ���� ���� ����
int QnA(void) {
	int type = 0;

	system("cls");

	startline(70);
	middleline1(1, 70);
	printf("��\t�������� ��õ �޴� ������� �� ������ �־��.\t\t       ��");
	middleline2(1, 70);
	printf("��\t������ �а�, ����� ������ ���ڷ� �������ּ���.\t\t       ��");
	middleline2(1, 70);
	endline(70);
	printf("\n\n\t1. ���� ������ Ȯ���ϴ�.\n\n");
	printf("\t\t=> �� ���� �м��ϰ� ������ ��õ �ޱ�\n\n\n");
	printf("\t2. ���� �� ������ �� �𸥴�.\n\n");
	printf("\t\t=> ��ǻ�Ͷ� �����ϰ� �������� ������ ��õ �ޱ�\n\n\n");
	printf("\t�亯 : _\b");
	scanf_s("%d", &type);

	return type;
}