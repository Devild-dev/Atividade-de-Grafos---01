#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define N 4

int main(){
	int num0[N]={0,0,0,0};
	int num1[N]={0,0,0,1};
	int num2[N]={0,0,1,0};
	int num3[N]={0,0,1,1};
	int num4[N]={0,1,0,0};
	int num5[N]={0,1,0,1};
	int num6[N]={0,1,1,0};
	int num7[N]={0,1,1,1};
	int num8[N]={1,0,0,0};
	int num9[N]={1,0,0,1};
	int num10[N]={1,0,1,0};
	int num11[N]={1,0,1,1};
	int num12[N]={1,1,0,0};
	int num13[N]={1,1,0,1};
	int num14[N]={1,1,1,0};
	int num15[N]={1,1,1,1};
	
	int resultado[N], resultado2[N] ;
	int opcao, num;
	
	printf("Digite um valor para trabalharmos\n");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 0:
			
			printf("Digite 3, 5, 6 ou 13 para alterar: \n");
 			scanf("%d", &num);
 			
 			if(num == 3){
 				system("cls");
 				for(int i = 0; i < N; i++){
 					resultado[i] = num0[i] + num3[i];
 					resultado2[i] = resultado[i] % 2;
				 }
				 printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 5){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num0[i] + num5[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 6){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num0[i] + num6[i];
				resultado2[i] = resultado[i] % 2;
				}
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 13){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num0[i] + num13[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}
		case 1:
			printf("Digite 2, 4, 7 ou 12 para alterar: \n");
 			scanf("%d", &num);
 			if(num == 2){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num1[i] + num2[i];	
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 4){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num1[i] + num4[i];			
				resultado2[i] = resultado[i] % 2;
			    }
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 7){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num1[i] + num7[i];
				resultado2[i] = resultado[i] % 2;
				}
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 12){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num1[i] + num12[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}
		case 2:
			
			printf("Digite 1, 4, 7 ou 15 para alterar: \n");
 			scanf("%d", &num);
 			
 			if(num == 1){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num2[i] + num1[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 4){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num2[i] + num4[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 7){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num2[i] + num7[i];
				resultado2[i] = resultado[i] % 2;
			 	}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 15){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num2[i] + num15[i];				
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}
		case 3:
			
			printf("Digite 0, 5, 6 ou 14 para alterar: \n");
 			scanf("%d", &num);
 			
 			if(num == 0){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num3[i] + num0[i];				
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 5){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num3[i] + num5[i];				
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 6){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num3[i] + num6[i];				
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 14){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num3[i] + num14[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}
		case 4:
			
			printf("Digite 1, 2, 7 ou 9 para alterar: \n");
 			scanf("%d", &num);
 			
 			if(num == 1){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num4[i] + num1[i];
				resultado2[i] = resultado[i] % 2;
			}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 2){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num4[i] + num2[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 7){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num4[i] + num7[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 9){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num4[i] + num9[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}
		case 5:
			
			printf("Digite 0, 3, 6 ou 8 para alterar: \n");
 			scanf("%d", &num);
 			
 			if(num == 0){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num5[i] + num0[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 3){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num5[i] + num3[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 6){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num5[i] + num6[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 8){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num5[i] + num8[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}
		case 6:
			
			printf("Digite 0, 3, 5 ou 11 para alterar: \n");
 			scanf("%d", &num);
 			
 			if(num == 0){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num6[i] + num0[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 3){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num6[i] + num3[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 5){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num6[i] + num5[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 11){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num6[i] + num11[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}	
		case 7:
			
			printf("Digite 1, 2, 4 ou 10 para alterar: \n");
 			scanf("%d", &num);
 			
 			if(num == 1)
			 {
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num7[i] + num1[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 2){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num7[i] + num2[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 4){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num7[i] + num4[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 10){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num7[i] + num10[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else{
					printf("Valor Incorreto!!!");
				}
		
		case 8:
			printf("Digite 5, 11, 13 ou 14 para alterar: \n");
 			scanf("%d", &num);
 			
 			if(num == 5){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num8[i] + num5[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 11){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[0] = num8[0] + num11[0];
				resultado2[3] = resultado[3] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 13){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num8[i] + num13[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 14){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num8[i] + num14[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}
		case 9:
			
			printf("Digite 4, 10, 12 ou 15 para alterar: \n");
 			scanf("%d", &num);
 			
 			if(num == 4){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num9[i] + num4[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 10){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num9[i] + num10[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 12){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num9[i] + num12[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 15){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num9[i] + num15[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}
		case 10:
			
			printf("Digite 7, 9, 12 ou 15 para alterar: \n");
 			scanf("%d", &num);
 			
 			if(num == 7){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num10[i] + num7[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 9){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num10[i] + num9[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 12){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num10[i] + num12[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 15){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num10[i] + num15[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}	
		case 11:
			
			printf("Digite 6, 8, 13 ou 14 para alterar: \n");
 			scanf("%d", &num);
 			
 			if(num == 6){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num11[i] + num6[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 8){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num11[i] + num8[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 13){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num11[i] + num13[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 14){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num11[i] + num14[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}
		case 12:
			
			printf("Digite 1, 9, 10 ou 15 para alterar: \n");
 			scanf("%d", &num);
 			
 			if(num == 1){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num12[i] + num1[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 9){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num12[i] + num9[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 10){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num12[i] + num10[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 15){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num12[i] + num15[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}
		case 13:
			
			printf("Digite 0, 8, 11 ou 14 para alterar: \n");
 			scanf("%d", &num);
 			
 			if(num == 0){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num13[i] + num0[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 8){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num13[i] + num8[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 11){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num13[i] + num11[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 14){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num13[i] + num14[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}	
	case 14:
			
			printf("Digite 3, 8, 11 ou 13 para alterar: \n");
 			scanf("%d", &num);
 			
 			if(num == 3){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num14[i] + num3[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 8){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num14[i] + num8[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 11){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num14[i] + num11[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 13){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num14[i] + num13[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}	
		case 15:
			
			printf("Digite 2, 9, 10 ou 12 para alterar: \n");
 			scanf("%d", &num);
 			
 			if(num == 2){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num15[i] + num2[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 9){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num15[i] + num9[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 10){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num15[i] + num10[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 12){
 				system("cls");
 				for(int i = 0; i < N; i++){
				resultado[i] = num15[i] + num12[i];
				resultado2[i] = resultado[i] % 2;
				}
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}	
																																									
 			default:
			printf("\nNumero Invalido!!!\n");		
		}getch();	
 			
	getch();
}
