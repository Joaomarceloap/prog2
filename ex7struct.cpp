#include <stdio.h>
#include <string.h>

struct fruta{
    char nome[30];
    double preco;
};

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        int t;
        double tot = 0;
        scanf("%d", &t);
        fruta mercado[t];

        for(int j = 0; j < t; j++){
            scanf(" %s %lf", mercado[j].nome, &mercado[j].preco);
        }

        int c;
        scanf("%d", &c);

        while(c--){
            char f[30];
            int qtd;
            scanf(" %s %d", f, &qtd);

            for(int a = 0; a < t; a++){
                if(!strcmp(f, mercado[a].nome)){
                    tot += mercado[a].preco * qtd;
                }
            }
        }
        printf("R$ %.2f \n", tot);
    }
}