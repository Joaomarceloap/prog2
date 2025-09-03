#include <stdio.h>

struct aluno {
    char name[20];
    double average;
};

int main(){
    aluno cla[5];
    int n;
    scanf("%d", &n);

    for(int i = 0; i < 5; i++){
        scanf(" %[^\n]", cla[i].name);
        scanf("%lf", &cla[i].average);
    }

    double tot;
    printf("Sala: %d\n", n);
    for(int i = 0; i < 5; i++){
        printf("%s %.2f\n", cla[i].name, cla[i].average);
        tot += cla[i].average * 0.2;
    }
    printf("Media: %.2f", tot);
}