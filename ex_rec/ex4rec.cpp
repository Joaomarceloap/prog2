#include <stdio.h>
#include <string.h>
#define MAX 100

bool palindromo(char palavra[], int inicio, int fim){
    bool result = (palavra[inicio] == palavra[fim]) ? true : false;
    if(inicio == fim && result)return true;
    if(result && palindromo(palavra, inicio ++, fim -- && fim > 0)){
        return true;
    } 
    return result;
}

int main(){ 
    char p[MAX];
    scanf(" %s", p);
    int m = strlen(p);
    if(palindromo(p, 0, m - 1 )){
        printf("É um palíndromo.");
    } else {
        printf("Não é um palíndromo.");
    }
}
