#include <stdio.h> 

int main() {
	int year; //�Է� ���� 
	int month; //�Է� ��
	int daysFromStart = 0; //1900�� 1��1�Ϻ��� �Է¿������� �ϼ�
	int firstOfMonth; // �Է¿� 1���� ���� ���� 
	int daysOfMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; //���� �� �ϼ� , ��� ���� ���� 0�ڸ��� 0����
	int daysThisYear; //��� 1/1 ~ ���  �� ���ϱ����� �ϼ�
	int leapCount; //���� ī���� 
	
	printf("���� �Է�: ");
	scanf("%d", &year);
	printf("�� �Է�: ");
	scanf("%d", &month);
	
	if (year % 4 == 0 && year % 100 !=0 || year % 400 == 0) {
		daysOfMonth[2] = 29;
	}
	
	for (int indexA = 1; indexA < month; indexA++) {
		daysThisYear = daysThisYear + daysOfMonth[indexA];
	}
	
	for (int indexB = 1900; indexB <= year; indexB++) {
		if (indexB % 4 == 0 && indexB % 100 != 0 || indexB % 400 == 0) {
			leapCount ++;
		}
	}
	
	daysFromStart = ((year - 1900) * 365) + daysThisYear + leapCount;
	
	firstOfMonth = daysFromStart % 7;
	
	//output
	printf("========%d�� %d��=========\n", year, month);
	printf("��\t��\tȭ\t��\t��\t��\t��\n");
	for (int indexC = 0; indexC < firstOfMonth; indexC++ ) {
		printf("\t");
	}
	
	for (int day = daysFromStart; day < daysFromStart + daysOfMonth[month]; day ++) {
		if (day % 7 == 6) {
			printf("%d\n", day - daysFromStart + 1);
		} else {
			printf("%d\t", day - daysFromStart + 1);
		}
	}
	return 0;
}
