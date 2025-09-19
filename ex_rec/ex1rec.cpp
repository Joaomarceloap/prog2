#include<stdio.h>
int global;

bool pair(int n){
    if (n % 2 == 0)
        return true;
    else return false;
}

int seq(int n){
    global++;
    printf("%d ", n);
    if (n == 1)
        return 1;
    return (pair(n)) ? seq(n/2) : seq(n * 3 + 1);
}

int main(){
    int num;
    scanf("%d", &num);
    seq(num);
    printf("%d", global);
}