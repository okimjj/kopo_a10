#include <stdio.h> 

int main() {
	int year; //입력 연도 
	int month; //입력 월
	int daysFromStart = 0; //1900년 1월1일부터 입력월까지의 일수
	int firstOfMonth; // 입력월 1일의 시작 요일 
	int daysOfMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; //각월 총 일수 , 계산 편의 위해 0자리는 0으로
	int daysThisYear; //당년 1/1 ~ 당월  전 말일까지의 일수
	int leapCount; //윤년 카운터 
	
	printf("연도 입력: ");
	scanf("%d", &year);
	printf("월 입력: ");
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
	printf("========%d년 %d월=========\n", year, month);
	printf("일\t월\t화\t수\t목\t금\t토\n");
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
