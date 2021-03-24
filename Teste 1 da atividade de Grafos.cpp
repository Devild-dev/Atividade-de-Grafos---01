#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define N 4

int main(){
	int num0[4]={0,0,0,0};
	int num1[4]={0,0,0,1};
	int num2[4]={0,0,1,0};
	int num3[4]={0,0,1,1};
	int num4[4]={0,1,0,0};
	int num5[4]={0,1,0,1};
	int num6[4]={0,1,1,0};
	int num7[4]={0,1,1,1};
	int num8[4]={1,0,0,0};
	int num9[4]={1,0,0,1};
	int num10[4]={1,0,1,0};
	int num11[4]={1,0,1,1};
	int num12[4]={1,1,0,0};
	int num13[4]={1,1,0,1};
	int num14[4]={1,1,1,0};
	int num15[4]={1,1,1,1};
	
	int resultado[4], resultado2[4] ;
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
				resultado[0] = num0[0] + num6[0];
				resultado[1] = num0[1] + num6[1];
				resultado[2] = num0[2] + num6[2];
				resultado[3] = num0[3] + num6[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 13){
 				system("cls");
				resultado[0] = num0[0] + num13[0];
				resultado[1] = num0[1] + num13[1];
				resultado[2] = num0[2] + num13[2];
				resultado[3] = num0[3] + num13[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}
		case 1:
			printf("Digite 2, 4, 7 ou 12 para alterar: \n");
 			scanf("%d", &num);
 			if(num == 2){
 				system("cls");
				resultado[0] = num1[0] + num2[0];
				resultado[1] = num1[1] + num2[1];
				resultado[2] = num1[2] + num2[2];
				resultado[3] = num1[3] + num2[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 4){
 				system("cls");
				resultado[0] = num1[0] + num4[0];
				resultado[1] = num1[1] + num4[1];
				resultado[2] = num1[2] + num4[2];
				resultado[3] = num1[3] + num4[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 7){
 				system("cls");
				resultado[0] = num1[0] + num7[0];
				resultado[1] = num1[1] + num7[1];
				resultado[2] = num1[2] + num7[2];
				resultado[3] = num1[3] + num7[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 12){
 				system("cls");
				resultado[0] = num1[0] + num12[0];
				resultado[1] = num1[1] + num12[1];
				resultado[2] = num1[2] + num12[2];
				resultado[3] = num1[3] + num12[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}
		case 2:
			
			printf("Digite 1, 4, 7 ou 15 para alterar: \n");
 			scanf("%d", &num);
 			
 			if(num == 1){
 				system("cls");
				resultado[0] = num2[0] + num1[0];
				resultado[1] = num2[1] + num1[1];
				resultado[2] = num2[2] + num1[2];
				resultado[3] = num2[3] + num1[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 4){
 				system("cls");
				resultado[0] = num2[0] + num4[0];
				resultado[1] = num2[1] + num4[1];
				resultado[2] = num2[2] + num4[2];
				resultado[3] = num2[3] + num4[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 7){
 				system("cls");
				resultado[0] = num2[0] + num7[0];
				resultado[1] = num2[1] + num7[1];
				resultado[2] = num2[2] + num7[2];
				resultado[3] = num2[3] + num7[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 15){
 				system("cls");
				resultado[0] = num2[0] + num15[0];
				resultado[1] = num2[1] + num15[1];
				resultado[2] = num2[2] + num15[2];
				resultado[3] = num2[3] + num15[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}
		case 3:
			
			printf("Digite 0, 5, 6 ou 14 para alterar: \n");
 			scanf("%d", &num);
 			
 			if(num == 0){
 				system("cls");
				resultado[0] = num3[0] + num0[0];
				resultado[1] = num3[1] + num0[1];
				resultado[2] = num3[2] + num0[2];
				resultado[3] = num3[3] + num0[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 5){
 				system("cls");
				resultado[0] = num3[0] + num5[0];
				resultado[1] = num3[1] + num5[1];
				resultado[2] = num3[2] + num5[2];
				resultado[3] = num3[3] + num5[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 6){
 				system("cls");
				resultado[0] = num3[0] + num6[0];
				resultado[1] = num3[1] + num6[1];
				resultado[2] = num3[2] + num6[2];
				resultado[3] = num3[3] + num6[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 14){
 				system("cls");
				resultado[0] = num3[0] + num14[0];
				resultado[1] = num3[1] + num14[1];
				resultado[2] = num3[2] + num14[2];
				resultado[3] = num3[3] + num14[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}
		case 4:
			
			printf("Digite 1, 2, 7 ou 9 para alterar: \n");
 			scanf("%d", &num);
 			
 			if(num == 1){
 				system("cls");
				resultado[0] = num4[0] + num1[0];
				resultado[1] = num4[1] + num1[1];
				resultado[2] = num4[2] + num1[2];
				resultado[3] = num4[3] + num1[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 2){
 				system("cls");
				resultado[0] = num4[0] + num2[0];
				resultado[1] = num4[1] + num2[1];
				resultado[2] = num4[2] + num2[2];
				resultado[3] = num4[3] + num2[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 7){
 				system("cls");
				resultado[0] = num4[0] + num7[0];
				resultado[1] = num4[1] + num7[1];
				resultado[2] = num4[2] + num7[2];
				resultado[3] = num4[3] + num7[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 9){
 				system("cls");
				resultado[0] = num4[0] + num9[0];
				resultado[1] = num4[1] + num9[1];
				resultado[2] = num4[2] + num9[2];
				resultado[3] = num4[3] + num9[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}
		case 5:
			
			printf("Digite 0, 3, 6 ou 8 para alterar: \n");
 			scanf("%d", &num);
 			
 			if(num == 0){
 				system("cls");
				resultado[0] = num5[0] + num0[0];
				resultado[1] = num5[1] + num0[1];
				resultado[2] = num5[2] + num0[2];
				resultado[3] = num5[3] + num0[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 3){
 				system("cls");
				resultado[0] = num5[0] + num3[0];
				resultado[1] = num5[1] + num3[1];
				resultado[2] = num5[2] + num3[2];
				resultado[3] = num5[3] + num3[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 6){
 				system("cls");
				resultado[0] = num5[0] + num6[0];
				resultado[1] = num5[1] + num6[1];
				resultado[2] = num5[2] + num6[2];
				resultado[3] = num5[3] + num6[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 8){
 				system("cls");
				resultado[0] = num5[0] + num8[0];
				resultado[1] = num5[1] + num8[1];
				resultado[2] = num5[2] + num8[2];
				resultado[3] = num5[3] + num8[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}
		case 6:
			
			printf("Digite 0, 3, 5 ou 11 para alterar: \n");
 			scanf("%d", &num);
 			
 			if(num == 0){
 				system("cls");
				resultado[0] = num6[0] + num0[0];
				resultado[1] = num6[1] + num0[1];
				resultado[2] = num6[2] + num0[2];
				resultado[3] = num6[3] + num0[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 3){
 				system("cls");
				resultado[0] = num6[0] + num3[0];
				resultado[1] = num6[1] + num3[1];
				resultado[2] = num6[2] + num3[2];
				resultado[3] = num6[3] + num3[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 5){
 				system("cls");
				resultado[0] = num6[0] + num5[0];
				resultado[1] = num6[1] + num5[1];
				resultado[2] = num6[2] + num5[2];
				resultado[3] = num6[3] + num5[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 11){
 				system("cls");
				resultado[0] = num6[0] + num11[0];
				resultado[1] = num6[1] + num11[1];
				resultado[2] = num6[2] + num11[2];
				resultado[3] = num6[3] + num11[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}	
		case 7:
			
			printf("Digite 1, 2, 4 ou 10 para alterar: \n");
 			scanf("%d", &num);
 			
 			if(num == 1)
			 {
 				system("cls");
				resultado[0] = num7[0] + num1[0];
				resultado[1] = num7[1] + num1[1];
				resultado[2] = num7[2] + num1[2];
				resultado[3] = num7[3] + num1[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 2){
 				system("cls");
				resultado[0] = num7[0] + num2[0];
				resultado[1] = num7[1] + num2[1];
				resultado[2] = num7[2] + num2[2];
				resultado[3] = num7[3] + num2[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 4){
 				system("cls");
				resultado[0] = num7[0] + num4[0];
				resultado[1] = num7[1] + num4[1];
				resultado[2] = num7[2] + num4[2];
				resultado[3] = num7[3] + num4[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 10){
 				system("cls");
				resultado[0] = num7[0] + num10[0];
				resultado[1] = num7[1] + num10[1];
				resultado[2] = num7[2] + num10[2];
				resultado[3] = num7[3] + num10[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else{
					printf("Valor Incorreto!!!");
				}
		
		case 8:
			printf("Digite 5, 11, 13 ou 14 para alterar: \n");
 			scanf("%d", &num);
 			
 			if(num == 5){
 				system("cls");
				resultado[0] = num8[0] + num5[0];
				resultado[1] = num8[1] + num5[1];
				resultado[2] = num8[2] + num5[2];
				resultado[3] = num8[3] + num5[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 11){
 				system("cls");
				resultado[0] = num8[0] + num11[0];
				resultado[1] = num8[1] + num11[1];
				resultado[2] = num8[2] + num11[2];
				resultado[3] = num8[3] + num11[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 13){
 				system("cls");
				resultado[0] = num8[0] + num13[0];
				resultado[1] = num8[1] + num13[1];
				resultado[2] = num8[2] + num13[2];
				resultado[3] = num8[3] + num13[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 14){
 				system("cls");
				resultado[0] = num8[0] + num14[0];
				resultado[1] = num8[1] + num14[1];
				resultado[2] = num8[2] + num14[2];
				resultado[3] = num8[3] + num14[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}
		case 9:
			
			printf("Digite 4, 10, 12 ou 15 para alterar: \n");
 			scanf("%d", &num);
 			
 			if(num == 4){
 				system("cls");
				resultado[0] = num9[0] + num4[0];
				resultado[1] = num9[1] + num4[1];
				resultado[2] = num9[2] + num4[2];
				resultado[3] = num9[3] + num4[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 10){
 				system("cls");
				resultado[0] = num9[0] + num10[0];
				resultado[1] = num9[1] + num10[1];
				resultado[2] = num9[2] + num10[2];
				resultado[3] = num9[3] + num10[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 12){
 				system("cls");
				resultado[0] = num9[0] + num12[0];
				resultado[1] = num9[1] + num12[1];
				resultado[2] = num9[2] + num12[2];
				resultado[3] = num9[3] + num12[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 15){
 				system("cls");
				resultado[0] = num9[0] + num15[0];
				resultado[1] = num9[1] + num15[1];
				resultado[2] = num9[2] + num15[2];
				resultado[3] = num9[3] + num15[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}
		case 10:
			
			printf("Digite 7, 9, 12 ou 15 para alterar: \n");
 			scanf("%d", &num);
 			
 			if(num == 7){
 				system("cls");
				resultado[0] = num10[0] + num7[0];
				resultado[1] = num10[1] + num7[1];
				resultado[2] = num10[2] + num7[2];
				resultado[3] = num10[3] + num7[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 9){
 				system("cls");
				resultado[0] = num10[0] + num9[0];
				resultado[1] = num10[1] + num9[1];
				resultado[2] = num10[2] + num9[2];
				resultado[3] = num10[3] + num9[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 12){
 				system("cls");
				resultado[0] = num10[0] + num12[0];
				resultado[1] = num10[1] + num12[1];
				resultado[2] = num10[2] + num12[2];
				resultado[3] = num10[3] + num12[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 15){
 				system("cls");
				resultado[0] = num10[0] + num15[0];
				resultado[1] = num10[1] + num15[1];
				resultado[2] = num10[2] + num15[2];
				resultado[3] = num10[3] + num15[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}	
		case 11:
			
			printf("Digite 6, 8, 13 ou 14 para alterar: \n");
 			scanf("%d", &num);
 			
 			if(num == 6){
 				system("cls");
				resultado[0] = num11[0] + num6[0];
				resultado[1] = num11[1] + num6[1];
				resultado[2] = num11[2] + num6[2];
				resultado[3] = num11[3] + num6[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 8){
 				system("cls");
				resultado[0] = num11[0] + num8[0];
				resultado[1] = num11[1] + num8[1];
				resultado[2] = num11[2] + num8[2];
				resultado[3] = num11[3] + num8[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 13){
 				system("cls");
				resultado[0] = num11[0] + num13[0];
				resultado[1] = num11[1] + num13[1];
				resultado[2] = num11[2] + num13[2];
				resultado[3] = num11[3] + num13[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 14){
 				system("cls");
				resultado[0] = num11[0] + num14[0];
				resultado[1] = num11[1] + num14[1];
				resultado[2] = num11[2] + num14[2];
				resultado[3] = num11[3] + num14[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}
		case 12:
			
			printf("Digite 1, 9, 10 ou 15 para alterar: \n");
 			scanf("%d", &num);
 			
 			if(num == 1){
 				system("cls");
				resultado[0] = num12[0] + num1[0];
				resultado[1] = num12[1] + num1[1];
				resultado[2] = num12[2] + num1[2];
				resultado[3] = num12[3] + num1[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 9){
 				system("cls");
				resultado[0] = num12[0] + num9[0];
				resultado[1] = num12[1] + num9[1];
				resultado[2] = num12[2] + num9[2];
				resultado[3] = num12[3] + num9[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 10){
 				system("cls");
				resultado[0] = num12[0] + num10[0];
				resultado[1] = num12[1] + num10[1];
				resultado[2] = num12[2] + num10[2];
				resultado[3] = num12[3] + num10[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 15){
 				system("cls");
				resultado[0] = num12[0] + num15[0];
				resultado[1] = num12[1] + num15[1];
				resultado[2] = num12[2] + num15[2];
				resultado[3] = num12[3] + num15[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}
		case 13:
			
			printf("Digite 0, 8, 11 ou 14 para alterar: \n");
 			scanf("%d", &num);
 			
 			if(num == 0){
 				system("cls");
				resultado[0] = num13[0] + num0[0];
				resultado[1] = num13[1] + num0[1];
				resultado[2] = num13[2] + num0[2];
				resultado[3] = num13[3] + num0[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 8){
 				system("cls");
				resultado[0] = num13[0] + num8[0];
				resultado[1] = num13[1] + num8[1];
				resultado[2] = num13[2] + num8[2];
				resultado[3] = num13[3] + num8[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 11){
 				system("cls");
				resultado[0] = num13[0] + num11[0];
				resultado[1] = num13[1] + num11[1];
				resultado[2] = num13[2] + num11[2];
				resultado[3] = num13[3] + num11[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 14){
 				system("cls");
				resultado[0] = num13[0] + num14[0];
				resultado[1] = num13[1] + num14[1];
				resultado[2] = num13[2] + num14[2];
				resultado[3] = num13[3] + num14[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}	
	case 14:
			
			printf("Digite 3, 8, 11 ou 13 para alterar: \n");
 			scanf("%d", &num);
 			
 			if(num == 3){
 				system("cls");
				resultado[0] = num14[0] + num3[0];
				resultado[1] = num14[1] + num3[1];
				resultado[2] = num14[2] + num3[2];
				resultado[3] = num14[3] + num3[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 8){
 				system("cls");
				resultado[0] = num14[0] + num8[0];
				resultado[1] = num14[1] + num8[1];
				resultado[2] = num14[2] + num8[2];
				resultado[3] = num14[3] + num8[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 11){
 				system("cls");
				resultado[0] = num14[0] + num11[0];
				resultado[1] = num14[1] + num11[1];
				resultado[2] = num14[2] + num11[2];
				resultado[3] = num14[3] + num11[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 13){
 				system("cls");
				resultado[0] = num14[0] + num13[0];
				resultado[1] = num14[1] + num13[1];
				resultado[2] = num14[2] + num13[2];
				resultado[3] = num14[3] + num13[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}	
		case 15:
			
			printf("Digite 2, 9, 10 ou 12 para alterar: \n");
 			scanf("%d", &num);
 			
 			if(num == 2){
 				system("cls");
				resultado[0] = num15[0] + num2[0];
				resultado[1] = num15[1] + num2[1];
				resultado[2] = num15[2] + num2[2];
				resultado[3] = num15[3] + num2[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 9){
 				system("cls");
				resultado[0] = num15[0] + num9[0];
				resultado[1] = num15[1] + num9[1];
				resultado[2] = num15[2] + num9[2];
				resultado[3] = num15[3] + num9[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 10){
 				system("cls");
				resultado[0] = num15[0] + num10[0];
				resultado[1] = num15[1] + num10[1];
				resultado[2] = num15[2] + num10[2];
				resultado[3] = num15[3] + num10[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}else if(num == 12){
 				system("cls");
				resultado[0] = num15[0] + num12[0];
				resultado[1] = num15[1] + num12[1];
				resultado[2] = num15[2] + num12[2];
				resultado[3] = num15[3] + num12[3];
				
				resultado2[0] = resultado[0] % 2;
				resultado2[1] = resultado[1] % 2;
				resultado2[2] = resultado[2] % 2;
				resultado2[3] = resultado[3] % 2;
				
					printf("%d %d \n%d %d\n\n", resultado2[0], resultado2[1], resultado2[2], resultado2[3]);
				}	
																																									
 			default:
			printf("\nNumero Invalido!!!\n");		
		}getch();	
 			
	getch();
}
