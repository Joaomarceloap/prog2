#include <stdio.h>
#include <math.h>

int piso_log2(int n, int c = 1){
	if(n > pow(2,c)) return piso_log2(n, c += 1);
    else if(n < pow(2,c)) return c-1;
    return c;
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", piso_log2(n));
}

