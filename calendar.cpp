#include <stdio.h>

int main () {
	int year;
	int month;
	int daysFromStart = 0;
	int daysThisYear;
	int daysOfMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int leapCount = 0;
	int firstOfMonth;
	
	printf("연도 입력: ");
	scanf("%d", &year);
	printf("월 입력: ");
	scanf("%d", &month);
	
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) { //윤년 2월 말일 변경
		daysOfMonth[2] = 29;
	}
	
	for (int indexA = 0; indexA < month; indexA++) {// 입력 받은 연월의 연초부터 지난 월말까지의 총 일수
		daysThisYear = daysThisYear + daysOfMonth[indexA];
	}
	
	for (int indexB = 1900; indexB < year; indexB++) { //윤년이 카운트 될 때 마다 1일씩 추가
		if (indexB %4 == 0 && indexB % 100 != 0 || indexB % 100 == 0) {
			leapCount ++;
		}
	}
	
	daysFromStart = ((year - 1900) * 365) + daysThisYear + leapCount;
	
	firstOfMonth = daysFromStart % 7;
	
	//output
	printf("========%d년 %d월========\n", year, month);
	printf("일\t월\t화\t수\t목\t금\t토\n");
	for (int indexC = 0; indexC < firstOfMonth; indexC++) {
		printf("\t");
	}
	
	for (int day = daysFromStart; day < daysFromStart + daysOfMonth[month]; day++) {
		if (day % 7 == 6) {
			printf("%d\n", day - daysFromStart + 1);
		} else {
			printf("%d\t", day - daysFromStart + 1);
		}
	}
	return 0;
}
