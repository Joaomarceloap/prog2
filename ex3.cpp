/* Recebe duas datas (dd/mm/aaaa) e calcula o numero de dias decorridos entre elas*/
#include <stdio.h>
#include <math.h> // floor(piso), ceil(teto), abs(valor absoluto)

// definição de um tipo estrutura/registro/struct
struct tipoData
{
	int dia, mes, ano;
};


int fAno(int ano, int mes)
{
	if(mes <= 2)
		return ano - 1;
	else 
		return ano;
}

int gMes(int mes)
{
	if(mes <= 2)
		return mes + 13;
	else 
		return mes + 1;
}

int calculaN(tipoData data)
{

	return floor( (1461*fAno(data.ano, data.mes) ) / 4.0  ) + 
		   floor( (153*gMes(data.mes)) / 5.0) + 
			data.dia;

}

int main()
{
	tipoData d1, d2;
	int dias;

	printf("Informe uma data (dd/mm/aa): ");
	scanf("%d/%d/%d", &d1.dia, &d1.mes, &d1.ano);
	printf("Informe uma data (dd/mm/aa): ");
	scanf("%d/%d/%d", &d2.dia, &d2.mes, &d2.ano);

	dias = abs( calculaN(d2) - calculaN(d1) );

	printf("Qtde de dias entre as datas: %d\n", dias);

	return 0;
}
