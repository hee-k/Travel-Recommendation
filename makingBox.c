#include <stdio.h>

// �ڽ�(�簢�� ���) �����(a == ����, b == ����)

void startline(int a) {
	printf("��");
	for (int i = 0; i < a; i++) // "��" ���� (����)
		printf("��");
	printf("��\n");
}

void middleline1(int b, int a) {

	for (int i = 0; i < b; i++) {	// "��" ���� (����)
		printf("��");
		for (int j = 0; j < a; j++) // ���� ���� (����)
			printf(" ");
		printf("��\n");
	}
}

void middleline2(int b, int a) {
	printf("\n");
	for (int i = 0; i < b; i++) {	// "��" ���� (����)
		printf("��");
		for (int j = 0; j < a; j++) // ���� ���� (����)
			printf(" ");
		printf("��\n");
	}
}
void endline(int a) {
	printf("��");
	for (int i = 0; i < a; i++) // "��" ���� (����)
		printf("��");
	printf("��\n");
}