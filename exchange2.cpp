 #include <stdio.h>

int main() {
	/////원화를 달러로 바꾸기 
		const float USD_RATE = 1237.40; // 상수는 모두 대문자 + 단어 사이 언더바로 구분 
		const float JPY_RATE = 9.88; // 엔 환율 
		const float EUR_RATE = 1346.54;  // 유로 환율 
		const float CNY_RATE = 193.94; //위안 환율 
		const float GBP_RATE = 1612.21; //파운드 환율 
		
		int wonChange = 0;  //거스름돈 
		int changeCount1000 = 0; //거스름돈 화폐 개수 
		int changeCount500 = 0;
		int changeCount100 = 0;
		int changeCount50 = 0;
		int changeCount10 = 0;
		
		float outputForeign = 0; //상대국으로 환전한 결과 
		int outputForeignFinal = 0; //고객에게 줄 돈 
		float dynamicRate = 0; // 환전 계산에 쓸 환율 
		
		int inputWon = 0; //입력 받는 원 
		int selectCurrency = 0; //외화 선택 
		
		
		
		printf("환전을 원하는 원화 금액을 입력해주세요: ");
		scanf("%d", &inputWon);
		printf("1. USD	2. JPY	3. EUR	4.CNY	5. GBP\n");
		printf("환전을 원하시는 화폐 번호를 입력하세요: ");
		scanf("%d", &selectCurrency);
		printf("\n");
		
		if (selectCurrency == 1) {
			dynamicRate = USD_RATE;
		} else if (selectCurrency == 2) {
			dynamicRate = JPY_RATE;
		} else if (selectCurrency == 3) {
			dynamicRate = EUR_RATE;
		} else if (selectCurrency == 4) {
			dynamicRate = CNY_RATE;
		} else if (selectCurrency == 5) {
			dynamicRate = GBP_RATE;
		}else {
			printf("잘못된 입력입니다.");
		}
		
		outputForeign = inputWon / dynamicRate;
		outputForeignFinal = outputForeign;
		wonChange = outputForeign * 100;
		wonChange = ((wonChange % 100) * dynamicRate) / 100;
		wonChange = wonChange - (wonChange % 10);
		
		changeCount1000 = wonChange / 1000;
		changeCount500 = wonChange % 1000 / 500;
		changeCount100 = wonChange % 1000 % 500 / 100;
		changeCount50 = wonChange % 1000 % 500 % 100 / 50;
		changeCount10 = wonChange % 1000 % 500 % 100 % 50 / 10;
		
		printf("***************************\n");
		printf("\n%d 원 -> %d", inputWon, outputForeignFinal);
		switch (selectCurrency) {
			case 1:
				printf (" 달러\n");
				break;
			case 2:
				printf (" 엔\n");
				break;
			case 3:
				printf (" 유로\n");
				break;
			case 4:
				printf (" 위안\n");
				break;
			case 5:
				printf (" 파운드\n");
				break;
		}
		printf("거스름돈: %d원\n", wonChange);
		printf("1000원: %d 장, 500원: %d개, 100원: %d개, 50원: %d개, 10원: %d개", changeCount1000, changeCount500, changeCount100, changeCount50, changeCount10);
		return 0;
}
