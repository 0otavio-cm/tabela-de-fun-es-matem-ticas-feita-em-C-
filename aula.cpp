#include <iostream>
#include <math.h>


int main (void){
    float A, B, C, F, K;
    int opcao;
    char repetir;

   do{
    
    printf("---------------------- \n");
    printf("oq vc quer fazer? \n 1-somar \n 2-dividir \n 3-multiplicar \n 4-subtrair \n 5-Celsius → Fahrenheit \n");
    printf(" 6-Fahrenheit → Celsius \n 7-Celsius → Kelvin \n 8-Kelvin → Celsius \n");
    printf("opcao: ");
    scanf("%d",&opcao);
    printf("---------------------- \n");

   

    if (opcao==1){

         printf("qual o valor de A: ");
         scanf("%f",&A);

         printf("qual o valor de B: ");
         scanf("%f",&B);

         printf("resultado: %.2f \n", A+B);

    } else if (opcao==2){

         printf("qual o valor de A: ");
         scanf("%f",&A);

         printf("qual o valor de B: ");
         scanf("%f",&B);


        if (B==0){
            printf("resultado invalido \n");
        } else{
         printf("resultado %.2f \n", A/B); }

    } else if (opcao==3){
        
         printf("qual o valor de A: ");
         scanf("%f",&A);

         printf("qual o valor de B: ");
         scanf("%f",&B);

         printf("resultado: %.2f \n", A*B);

    }else if (opcao==4){

         printf("qual o valor de A: ");
         scanf("%f",&A);

         printf("qual o valor de B: ");
         scanf("%f",&B);

         printf("resultado: %.2f \n", A-B);

    }else if (opcao==5){

        printf("celsius: ");
        scanf("%f",&C);

        printf("Fahrenheit: %.2f \n", C*(9.0/5.0) + 32);

    }else if (opcao==6){

        printf("Fahrenheit: ");
        scanf("%f",&F);

        printf("celsius: %.2f \n", 5*(F - 32) / 9.0);

    }else if (opcao==7){

        printf("celsius: ");
        scanf("%f",&C);

        printf("Kelvin: %.2f \n", C+273.15);

    }else if (opcao==8){

        printf("Kelvin: ");
        scanf("%f",&F);

        printf("celsius %.2f \n", K+273.15);

    }else{ 
        printf("opcao invalida \n");
    }
 
  printf("---------------------- \n");
  printf("quer fazer dnovo (s/n): ");
  scanf(" %c",&repetir);

  printf("---------------------- \n");
  }while(repetir == 's');



}