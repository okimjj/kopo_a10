 #include <stdio.h>

int main() {
	/////��ȭ�� �޷��� �ٲٱ� 
		const float USD_RATE = 1237.40; // ����� ��� �빮�� + �ܾ� ���� ����ٷ� ���� 
		const float JPY_RATE = 9.88; // �� ȯ�� 
		const float EUR_RATE = 1346.54;  // ���� ȯ�� 
		const float CNY_RATE = 193.94; //���� ȯ�� 
		const float GBP_RATE = 1612.21; //�Ŀ�� ȯ�� 
		
		int wonChange = 0;  //�Ž����� 
		int changeCount1000 = 0; //�Ž����� ȭ�� ���� 
		int changeCount500 = 0;
		int changeCount100 = 0;
		int changeCount50 = 0;
		int changeCount10 = 0;
		
		float outputForeign = 0; //��뱹���� ȯ���� ��� 
		int outputForeignFinal = 0; //������ �� �� 
		float dynamicRate = 0; // ȯ�� ��꿡 �� ȯ�� 
		
		int inputWon = 0; //�Է� �޴� �� 
		int selectCurrency = 0; //��ȭ ���� 
		
		
		
		printf("ȯ���� ���ϴ� ��ȭ �ݾ��� �Է����ּ���: ");
		scanf("%d", &inputWon);
		printf("1. USD	2. JPY	3. EUR	4.CNY	5. GBP\n");
		printf("ȯ���� ���Ͻô� ȭ�� ��ȣ�� �Է��ϼ���: ");
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
			printf("�߸��� �Է��Դϴ�.");
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
		printf("\n%d �� -> %d", inputWon, outputForeignFinal);
		switch (selectCurrency) {
			case 1:
				printf (" �޷�\n");
				break;
			case 2:
				printf (" ��\n");
				break;
			case 3:
				printf (" ����\n");
				break;
			case 4:
				printf (" ����\n");
				break;
			case 5:
				printf (" �Ŀ��\n");
				break;
		}
		printf("�Ž�����: %d��\n", wonChange);
		printf("1000��: %d ��, 500��: %d��, 100��: %d��, 50��: %d��, 10��: %d��", changeCount1000, changeCount500, changeCount100, changeCount50, changeCount10);
		return 0;
}
