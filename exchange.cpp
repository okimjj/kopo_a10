 #include <stdio.h>

int main() {
	/////��ȭ�� �޷��� �ٲٱ� 
		const float USD_RATE = 1233.10; // ����� all caps + �ܾ� ���� ����ٷ� ���� 
		const float JPY_RATE = 9.84;
		const float EUR_RATE = 1342.48; 
		const float CNY_RATE = 193.25;
		const float GBP_RATE = 1605.28;
		
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
		
		int inputWon = 0;
		int selectEx = 0;
		
		printf("ȯ���� ���ϴ� ��ȭ �ݾ��� �Է����ּ���: ");
		scanf("%d", &inputWon);
		printf("1. USD	2. JPY	3. EUR	4.CNY	5. GBP\n");
		printf("ȯ���� ���Ͻô� ȭ�� ��ȣ�� �Է��ϼ���: ");
		scanf("%d", &selectEx);
		printf("\n");
		
		if (selectEx == 1) {
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
		printf("***************************\n");
		printf("%d �� -> %d �޷�\n", inputWon, outputDollarFinal);
		printf("�Ž�����: %d��\n", wonChange);
		printf("1000��: %d, 500��: %d, 100��: %d, 50��: %d, 10��: %d", changeCount1000, changeCount500, changeCount100, changeCount50, changeCount10);
		}
		
		else if(selectEx == 2) {
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
		printf("***************************\n");
		printf("%d �� -> %d ��\n", inputWon, outputYenFinal);
		printf("�Ž�����: %d��\n", wonChange);
		printf("1000��: %d ��, 500��: %d��, 100��: %d��, 50��: %d��, 10��: %d��", changeCount1000, changeCount500, changeCount100, changeCount50, changeCount10);
		}
		
		else if (selectEx == 3) {
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
		printf("***************************\n");
		printf("%d �� -> %d ����\n", inputWon, outputEuroFinal);
		printf("�Ž�����: %d��\n", wonChange);
		printf("1000��: %d ��, 500��: %d��, 100��: %d��, 50��: %d��, 10��: %d��", changeCount1000, changeCount500, changeCount100, changeCount50, changeCount10);
		}
		
		else if(selectEx == 4) {
		
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
		printf("***************************\n");
		printf("%d �� -> %d ����\n", inputWon, outputYuanFinal);
		printf("�Ž�����: %d��\n", wonChange);
		printf("1000��: %d ��, 500��: %d��, 100��: %d��, 50��: %d��, 10��: %d��", changeCount1000, changeCount500, changeCount100, changeCount50, changeCount10);
		}
		
		else if(selectEx == 5) {
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
		printf("***************************\n");
		printf("%d �� -> %d �Ŀ��\n", inputWon, outputPoundFinal);
		printf("�Ž�����: %d��\n", wonChange);
		printf("1000��: %d ��, 500��: %d��, 100��: %d��, 50��: %d��, 10��: %d��", changeCount1000, changeCount500, changeCount100, changeCount50, changeCount10);
		}
		
		else {
			printf("�߸��� �Է��Դϴ�.");
		}
		
		return 0;
}
