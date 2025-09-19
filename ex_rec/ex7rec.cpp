#include <stdio.h>

bool par (int n){
	if(n % 2 == 0) return true;
	return false;
}

int potencia(int x, int n){
	if (n == 0) return 1;
	int p = par(n) ? potencia(x * x, n/2) : x * potencia(x, n - 1);
	return p;
}

int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	printf("%d", potencia(a,b));
}