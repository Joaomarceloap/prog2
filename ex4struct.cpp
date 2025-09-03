#include <stdio.h>
#define FOR for(int i = 0; i < 5; i++)

struct obj{
    char name[15];
    int pot;
    double time;
};

int main(){
    obj elet[5];
    FOR{
        scanf(" %[^\n]", elet[i].name);
        scanf("%d", &elet[i].pot);
        scanf("%lf", &elet[i].time);
    }

    int days;
    scanf("%d", &days);

    double sum = 0;
    FOR{
        sum += elet[i].pot *(elet[i].time * days);
    }
    printf("%.2f \n", sum);

    FOR{
        double dif = (elet[i].pot *(elet[i].time * days * 100)) / sum;
        printf("%.2f \n", dif);
    }
}