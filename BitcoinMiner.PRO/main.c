#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//Black: \u001b[30m. Red: \u001b[31m. Green: \u001b[32m. Yellow: \u001b[33m. Blue: \u001b[34m. Magenta: \u001b[35m. Cyan: \u001b[36m. White: \u001b[37m

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Exemplo Wallet: 222222222222222222222222222

int main(int argc, char *argv[]) {
	int sn1, sn2, sn3, sn4, input, i, i2,i3, btcran;
	float fkh, hits = 0;
	char input2 [40];
	char yn;
	sn1 = 94542544;
	sn2 = 63728674;
	sn3 = 43828225;
	sn4 = 26258995;
	snbr:
	system("cls");
	printf("\tBitcoinMiner.PRO by jauzin23\n");
	printf("Insert serial number: ");
	scanf("%d", &input);
	if(input == sn1 || input == sn2 || input == sn3 || input == sn4){ 
		
		system("cls");
		printf("Checking Serial Number");
		sleep(1);
		for(i=0;i<4;i++){
			printf(".");
			sleep(1);
		}
		i=0;
		wallet:
		system("cls");
		printf("\tBitcoinMiner.PRO by jauzin23\n");
		printf("\nVALID SERIAL NUMBER\n\n");
		  do {
    		printf("Insert the Bitcoin Wallet Address [26-35 characters long]: ");
    		fflush(stdin);
    		fgets(input2, sizeof(input2), stdin);
    		input2[strcspn(input2, "\n")] = '\0';
		} while (strlen(input2) < 26 || strlen(input2) > 35);
		system("cls");
		printf("Checking Wallet");
		sleep(1);
		for(i=0;i<2;i++){
			printf("..");
			sleep(1);
		}
		system("cls");
		i=0;
		printf("Valid wallet\n");
		do{
			input = 0;
			printf("Select the number of wallets: ");
		scanf("%d", &input);
		}while (input<0);
		system("cls");
		printf("\033[1;34m");
		printf("Be Advised, the speed of mining  depends on your computers performance\n");
		printf("\033[0m");
		if(input > 0){
			for(i2=1;i2<input;i2++){
				i=0;
				i3=0;
				btcran=0;
				srand(time(NULL));
				i3=rand()%10000000 +9999999;
				srand(time(NULL));
				btcran = rand()%1000000 +1;
				if(btcran<=100){
					fkh = rand()%1+0.00001;
					printf("\033[1;32m");
					printf("Tried to mine wallet %d: %f hit\n", i3, fkh);
					hits+=fkh;
					printf("\033[0m");
				}else{
					printf("\033[1;31m");
					printf("Tried to mine wallet %d: 0 hit\n", i3);
					printf("\033[0m");
				}
				i++;
				sleep(1);
			}
			invalid: 
			system("cls");
			printf("\tBitcoinMiner.PRO by jauzin23\n");
			printf("%f btc hits after %d attempts\n", hits, input);
			printf("Do you wish to transfer the coins to your wallet? [y/n]\n");
			scanf(" %c", &yn);
			if(yn == 'y' || yn == 'Y'){
				system("cls");
				if(hits<=0){
					printf("Oops!\nNot your lucky day\nYou made 0 hits\nNothing will be sent to your wallet");
				}else{
					printf("After our low fee (5%%), you will get %f btc!!!\n", hits-hits*0.05);
					printf("The cryptocurrency is getting sent to your wallet in 1 to 4 days, ENJOY!!\nPls consider leaving a +rep :)\n");
				}
		
			}else if( yn == 'n' || yn == 'N'){
				printf("Noting will be sent to you wallet and all you mined has been lost\n\n\t;)\n\n");
			}else{
				system("cls");
				printf("Invalid\n please enter again");
				system("pause");
				goto invalid;
			}	
		}else{
			printf("Invalid!!\n");
			goto wallet;
			}
	}else{
		system("cls");
		printf("\tBitcoinMiner.PRO by jauzin23\n");
		printf("Serial Number INVALID\nPlease try again\n");
		system("pause");
		goto snbr;
	}
	system("Pause");
	return 0;
	}
