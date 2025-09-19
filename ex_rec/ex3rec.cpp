#include <stdio.h>
#define MAX 101

void inter(int va[], int vb[], int vc[], int c, int a){
    vc[2*c] = va[c];
    vc[2*c + 1] = vb[c];
    if(c < a) return inter(va,vb,vc, c+1, a);
    return;
}

int main(){
    int a;
    scanf("%d", &a);
    int va[a+1],vb[a+1],vc[MAX];
    for(int i = 0; i < a; i++){
        scanf("%d", &va[i]);
    }
    for(int i = 0; i < a; i++){
        scanf("%d", &vb[i]);
    }
    inter(va, vb, vc, 0, a);
    for(int i = 0; i < 2*a; i++){
        printf("%d ", vc[i]);
    }
}