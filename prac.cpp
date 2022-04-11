#include <stdio.h>

int main() {
	/////원화를 달러로 바꾸기 
		const float USD_RATE = 1233.10; // 상수는 all caps + 단어 사이 언더바로 구분 
		const float JPY_RATE = 9.84;
		const float EUR_RATE = 1342.48; 
		const float CNY_RATE = 193.25;
		const float GBP_RATE = 1605.28;
		
		int inputWon = 50000;
		
		float outputDollar = 0;
		float outputYen = 0;
		float outputEuro = 0;
		float outputYuan = 0;
		float outputPound = 0;
		
		
		int outputDollarFinal = 0;
		int outputYenFinal = 0;
		int outputEuroFinal = 0;
		int outputYuanFinal = 0;
		int outputPoundFinal = 0;
		
		int wonChange = 0;
		
		int changeCount1000 = 0;
		int changeCount500 = 0;
		int changeCount100 = 0;
		int changeCount50 = 0;
		int changeCount10 = 0;
		
		printf("환전을 원하는 원화 금액을 입력해주세요: ");
		scanf("%d", &inputWon);

		outputDollar = inputWon / USD_RATE;
		outputDollarFinal = outputDollar;
		wonChange = outputDollar * 100;
		wonChange = ((wonChange % 100) * USD_RATE) / 100;
		wonChange = wonChange - (wonChange % 10);
		changeCount1000 = wonChange / 1000;
		changeCount500 = wonChange % 1000 / 500;
		changeCount100 = wonChange % 1000 % 500 / 100;
		changeCount50 = wonChange % 1000 % 500 % 100 / 50;
		changeCount10 = wonChange % 1000 % 500 % 100 % 50 / 10;
		printf("%d 원 -> %d 달러\n", inputWon, outputDollarFinal);
		printf("거스름돈: %d원\n", wonChange);
		printf("1000원: %d, 500원: %d, 100원: %d, 50원: %d, 10원: %d", changeCount1000, changeCount500, changeCount100, changeCount50, changeCount10);
		printf("\n***************************\n");
		
		outputYen = inputWon / JPY_RATE;
		outputYenFinal = outputYen;
		wonChange = outputYen * 100;
		wonChange = ((wonChange % 100) * JPY_RATE) / 100;
		wonChange = wonChange - (wonChange % 10);
		changeCount1000 = wonChange / 1000;
		changeCount500 = wonChange % 1000 / 500;
		changeCount100 = wonChange % 1000 % 500 / 100;
		changeCount50 = wonChange % 1000 % 500 % 100 / 50;
		changeCount10 = wonChange % 1000 % 500 % 100 % 50 / 10;
		printf("%d 원 -> %d 달러\n", inputWon, outputDollarFinal);
		printf("거스름돈: %d원\n", wonChange);
		printf("1000원: %d, 500원: %d, 100원: %d, 50원: %d, 10원: %d", changeCount1000, changeCount500, changeCount100, changeCount50, changeCount10);
		printf("\n***************************\n");
		
		outputEuro = inputWon / EUR_RATE;
		outputEuroFinal = outputEuro;
		wonChange = outputEuro * 100;
		wonChange = ((wonChange % 100) * EUR_RATE) / 100;
		wonChange = wonChange - (wonChange % 10);
		changeCount1000 = wonChange / 1000;
		changeCount500 = wonChange % 1000 / 500;
		changeCount100 = wonChange % 1000 % 500 / 100;
		changeCount50 = wonChange % 1000 % 500 % 100 / 50;
		changeCount10 = wonChange % 1000 % 500 % 100 % 50 / 10;
		printf("%d 원 -> %d 달러\n", inputWon, outputDollarFinal);
		printf("거스름돈: %d원\n", wonChange);
		printf("1000원: %d, 500원: %d, 100원: %d, 50원: %d, 10원: %d", changeCount1000, changeCount500, changeCount100, changeCount50, changeCount10);
		printf("\n***************************\n");
		
		outputYuan = inputWon / CNY_RATE;
		outputYuanFinal = outputYuan;
		wonChange = outputYuan * 100;
		wonChange = ((wonChange % 100) * CNY_RATE) / 100;
		wonChange = wonChange - (wonChange % 10);
		changeCount1000 = wonChange / 1000;
		changeCount500 = wonChange % 1000 / 500;
		changeCount100 = wonChange % 1000 % 500 / 100;
		changeCount50 = wonChange % 1000 % 500 % 100 / 50;
		changeCount10 = wonChange % 1000 % 500 % 100 % 50 / 10;
		printf("%d 원 -> %d 달러\n", inputWon, outputDollarFinal);
		printf("거스름돈: %d원\n", wonChange);
		printf("1000원: %d, 500원: %d, 100원: %d, 50원: %d, 10원: %d", changeCount1000, changeCount500, changeCount100, changeCount50, changeCount10);
		printf("\n***************************\n");
		
		outputPound = inputWon / GBP_RATE;
		outputPoundFinal = outputPound;
		wonChange = outputPound * 100;
		wonChange = ((wonChange % 100) * GBP_RATE) / 100;
		wonChange = wonChange - (wonChange % 10);
		changeCount1000 = wonChange / 1000;
		changeCount500 = wonChange % 1000 / 500;
		changeCount100 = wonChange % 1000 % 500 / 100;
		changeCount50 = wonChange % 1000 % 500 % 100 / 50;
		changeCount10 = wonChange % 1000 % 500 % 100 % 50 / 10;
		printf("%d 원 -> %d 달러\n", inputWon, outputDollarFinal);
		printf("거스름돈: %d원\n", wonChange);
		printf("1000원: %d, 500원: %d, 100원: %d, 50원: %d, 10원: %d", changeCount1000, changeCount500, changeCount100, changeCount50, changeCount10);
		printf("\n***************************\n");
		
		return 0;
}
