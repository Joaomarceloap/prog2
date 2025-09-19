#include <stdio.h>
#include <string.h>

struct taluno{
	int matricula;
	char nome[30];
	char curso[30];
};

int main(){
	taluno ls[5];
	for(int i = 0; i < 5; i++){
		scanf("%d", &ls[i].matricula);
		scanf(" %[^\n]", ls[i].nome);
		scanf(" %[^\n]", ls[i].curso);
	}
	char cs[30];
	scanf(" %[^\n]", cs);

	for(int i = 0; i < 5; i++){
		if(!strncmp(cs, ls[i].curso, 30)){
			printf("%d %s\n", ls[i].matricula, ls[i].nome);
		}
	}
}