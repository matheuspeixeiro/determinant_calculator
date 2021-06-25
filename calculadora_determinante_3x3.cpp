/***	CALCULADORA DE DETERMINANTE DE MATRIZ QUADRADA 3X3
		E/OU	 DE PRODUTO MISTO.
	Nome: Matheus Simões Peixeiro		  ***/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	// variáveis
	setlocale(LC_ALL,"Portuguese");
	int m[3][3], i, j, versor_i, versor_j, versor_k, determinante;
	
	//entrada de dados
	for(i=0; i<3; i++){
		for (j=0; j<3; j++){
			printf("Bem-vindo à calculadora de determinante de matriz quadrada 3x3:\n\n");
			printf("Informe o valor para [%d][%d] : ", i+1, j+1);
			scanf("%d", &m[i][j]);
			system("cls");
		}
	}
	
	// processamento de dados - cálculo dos versores i,j,k e o determinante
	versor_i = (m[1][1] * m[2][2] - (m[1][2] * m[2][1]))*m[0][0];
	versor_j = (m[1][0] * m[2][2] - (m[1][2] * m[2][0]))*m[0][1];
	versor_k = (m[1][0] * m[2][1] - (m[1][1] * m[2][0]))*m[0][2];
	
	determinante = versor_i - versor_j + versor_k;
	
	// saída de dados
	printf("\n");
	for(i=0; i<3; i++){
		printf("|\t");
		for(j=0; j<3; j++){
			printf("%d\t", m[i][j]);
		}
		printf("|\n");
	}
	printf("\n\nDeterminante = %d\n\n", determinante);
	
	// fim
	system("pause");
	system("pause");
}
