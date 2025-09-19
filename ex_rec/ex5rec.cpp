#include <stdio.h>

int mdc(int a, int b){
    if(b == 0) return a;
    return mdc(b, a%b);
}

int main(){
    int n1,n2;
    scanf("%d %d", &n1, &n2);
    printf("%d", mdc(n1, n2));
}