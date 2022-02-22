#include<stdio.h>
#include<math.h>
#include<conio.h>

int main () {
    float A;
    float B;
    float X;
    float result;
    float cont;

    printf("Bem vindo a calculadora de Leo Salgado \te Victor Vechi");
    while (cont != 0){
    printf("\n\nPara somar digite 1\nPara subtrair digite 2\nPara multiplicar digite 3\nPara dividir digite 4 \nPara potenciar digite 5 \nPara raiz quadrada digite 6\n");
 scanf("%f",& X);
    setbuf(stdin,NULL);
    if (X==1) {
        printf("Escreva o primeiro numero \n");
        scanf("%f",& A);
        setbuf(stdin,NULL);
        printf("Escreva o segundo numero \n");
        scanf("%f",& B);
        setbuf(stdin,NULL);
        printf("%2.2f",A+B);
    }
    if (X==2) {
        printf("escolha o primeiro numero \n");
        scanf("%f",& A);
        setbuf(stdin,NULL);
        printf("Escreva o segundo numero \n");
        scanf("%f",& B);
        setbuf(stdin,NULL);
        printf("%2.2f",A-B);
    }
    if (X==5){
        printf("Escreva a base da potencia \n");
        scanf("%f",& A);
        setbuf(stdin,NULL);
        printf("Escreva o expoente da potencia \n");
        scanf("%f",& B);
        setbuf(stdin,NULL);
        result = pow(A,B);
        printf("%2.2f",result);
    }
    if(X==4){
        printf("Escreva o dividendo \n");
        scanf("%f",& A);
        setbuf(stdin,NULL);
        printf("Escreva o divisor \n");
        scanf("%f",& B);
        setbuf(stdin,NULL);
        printf("%2.2f", A/B);
    }
    if(X==3){
        printf("Escreva o primeiro numero");
        scanf("%f",& A);
        setbuf(stdin,NULL);
        printf("Escreva o segundo numero");
        scanf("%f",& B);
        setbuf(stdin,NULL);
        printf("%2.2f",A*B);
    }
    if(X==6) {
        printf("Escreva o numero que quer a raiz");
        scanf("&f",& A);
        setbuf(stdin,NULL);
        result = sqrt(A);
        printf("%2.2f", result);
    }
    }
}
