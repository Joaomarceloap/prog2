#include <stdio.h>
#define MAX 101

int inter(int va[], int vb[], int vc[], int c = 0){
    vc[c] = va[c];
    vc[c + 1] = vb[c];
    if(va[c+1] != '\0') return inter(va,vb,vc, c+1);
    return 0;
}
int main(){
    int a;
    int va[MAX],vb[MAX],vc[MAX];
    scanf("%d", &a);
    for(int i = 0; i < a; i++){
        scanf("%d", &va[i]);
    }
    for(int i = 0; i < a; i++){
        scanf("%d", &vb[i]);
    }
    inter(va, vb, vc);
    for(int i : vc){
        printf("%d ", i);
    }
}