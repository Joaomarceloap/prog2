#include <stdio.h>
#include <string.h>

struct aeroporto{

	char nome[100];
	int capacidade;
	int identificador;
};

struct voo{
	char nome[100];
	int identificador;
	int destino;
	int origem;
};


int main(){


	int qtd_aeroporto;
	scanf("%d", &qtd_aeroporto);

	int qtd_voos;
	scanf("%d", &qtd_voos);

	/*declarar vetores*/
	aeroporto aps[qtd_aeroporto];	
	voo v[qtd_voos];
	/*ler os aeroportos */
	for(int i = 0; i < qtd_aeroporto; i++){
		scanf(" %[^\n]", aps[i].nome);
		scanf("%d", &aps[i].capacidade);
		scanf("%d", &aps[i].identificador);
	}

	int j=0;
	int op;

	do{

		
		scanf("%d", &op);

		if(op == 1){// Adicionar Voo (orgiem e destino)

			printf("op 1 \n");
			
			scanf(" %[^\n]", v[j].nome);
			scanf("%d", &v[j].origem);
			scanf("%d", &v[j].destino);
			scanf("%d", &v[j].identificador);
			j++;
			
		}else if (op == 2){// Consultar todos os Voos de origem ou destino de determinado aeroporto pelo ID, se tiver cancelado deve mostrar;

			printf("op 2 \n");
			
			int cod;
			scanf("%d", &cod);

			for(int i = 0; i < qtd_voos; i++){
				if((v[i].origem == cod || v[i].destino == cod) && v[i].identificador > 0){
					printf("%s - %d - %d", v[i].nome, v[i].origem, v[i].destino);
				}
				else if((v[i].origem == cod || v[i].destino == cod) && v[i].identificador == 0){
					printf("Cancelado - %s - %d - %d", v[i].nome, v[i].origem, v[i].destino);
				}
			}

		}else if (op == 3){// Cancelar Voo pelo ID

			printf("op 3 \n");
			int id;
			scanf("%d", &id);

			for(int i = 0; i < qtd_voos; i++){
				if(v[i].identificador == id){
					v[i].identificador = 0;
				}
			}
		}

	}while(op != 0);



	return 0;
}
