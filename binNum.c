#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define decimal 1
#define hexa 2
#define caractere 3

int clear(void){
   system("clear");
}

int binNum(char bin[], int type){
    int i;
    int j;
    int num=0;
    for(i=0;i<8;i++){
        if(bin[i] == '1')
                num = (num*2)+1;
        if(bin[i] == '0')
                num = (num*2);
    }
    if(type==1) printf("Decimal: %d", num);
    if(type==2) printf("Hexadecimal: %x", num);
    if(type==3) printf("Caractere: %c", num);
}

int menu(void){
    char opcao[10];
    int op;
    clear();
    printf("\n");
    printf("\t1. Binario para decimal\n");
    printf("\t2. Binario para hexadecimal\n");
    printf("\t3. Binario para caractere\n");
    printf("\t4. Sair\n\n");
    do{
        inicio:
        printf("\tDigite sua opcao: ");
        gets(opcao);
        op = atoi(opcao);
        switch(op){
                case 1:
                                binDecimal();
                                break;
                case 2:
                                binHexa();
                                break;
                case 3:
                                binChar();
                                break;
                case 4:
                                exit(0);
                default:
                                printf("Opcao Invalida\n");
                                goto inicio;
        }
    }while(1);
}

int binDecimal(void){
    int i;
    char bin[8];
    char espera;
    clear();
    printf("Digite o numero binario: ");
    gets(bin);
    binNum(bin, decimal);
    __fpurge(stdin);
    espera = getchar();
    if(espera) menu();
}

int binHexa(void){
    int i;
    char bin[8];
    char espera;
    clear();
    printf("Digite o numero binario: ");
    gets(bin);
    binNum(bin, hexa);
    __fpurge(stdin);
    espera = getchar();
    if(espera) menu();
}

int binChar(void){
    int i;
    char bin[8];
    char espera;
    clear();
    printf("Digite o numero binario: ");
    gets(bin);
    binNum(bin, caractere);
    __fpurge(stdin);
    espera = getchar();
    if(espera) menu();
}

int main(void){
    menu();
}


