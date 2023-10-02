#include<stdio.h>
#include<math.h>

int main(){

char elevador, periodo, periodoMaisUsado, elevadorMaisUsado;
int teste, contadorA, contadorB, contadorC, maiorElevador, morador;
int periodoM, periodoV, periodoN, maiorPeriodo, menorPeriodo;
int totalServicos;
float direncaPercentual, diferencaServicos;

do{

	do{

		fflush(stdin);
		printf("\nQual elevador que voce mais utiliza? \nElevador-A \nElevador B \nElevador C \nInforme:");
		scanf("%c", &elevador);

	if(elevador != 'A' && elevador != 'B' && elevador != 'C'){
			printf("\nPor favor digite a vogal do elevador");
			}

		}while(elevador != 'A' && elevador != 'B' && elevador != 'C');

  if(elevador == 'A'){
    contadorA++;

    }else if (elevador == 'B'){
    contadorB++;

    }else if (elevador == 'C'){
    contadorC++;

    }
    do{

		printf("\nQual e o periodo que voce mais utiliza?\nMatutino - M\nVespertino - V\nNoturno - N\n");
		scanf("%c", &periodo);
    fflush(stdin);

		if(periodo != 'M' && periodo != 'V' && periodo != 'N'){
				printf("\nPor favor digite a vogal designada");
		}

		}while(periodo != 'M' && periodo != 'V' && periodo != 'N');

    if(periodo == 'M'){
    
      periodoM++;

    }else if (periodo == 'V'){

      periodoV++;

    }else if (periodo == 'N'){

      periodoN++;
  }

  if ((periodoM > periodoV) && (periodoM > periodoN)){

      maiorPeriodo = periodoM;
      periodoMaisUsado = 'M';

    }else  if ((periodoV > periodoM) && (periodoV > periodoN)){

      maiorPeriodo = periodoV;
      periodoMaisUsado = 'V';

    } if ((periodoN > periodoV) && (periodoN > periodoV)){

      maiorPeriodo = periodoN;
      periodoMaisUsado = 'N';

  }

  if ((periodoM < periodoV) && (periodoM < periodoN)){

      menorPeriodo = periodoM;
      periodoMaisUsado = 'M';

    }else  if ((periodoV < periodoM) && (periodoV < periodoN)){

      menorPeriodo = periodoV;
      periodoMaisUsado = 'V';

    } if ((periodoN < periodoV) && (periodoN < periodoV)){

    menorPeriodo = periodoN;

  }


  if ((contadorA > contadorB) && (contadorA > contadorC)){

      maiorElevador = contadorA;
      elevadorMaisUsado = 'A';

    } else  if ((contadorB > contadorA) && (contadorB > contadorC)){

      maiorElevador = contadorB;
      elevadorMaisUsado = 'B';

    } if ((contadorC > contadorB) && (contadorC > contadorA)){

      maiorElevador = contadorC;
      elevadorMaisUsado = 'C';
  }

  morador++;

  printf("\nQuer iniciar um novo formulario? \nSim - 2 \nNao - 1:");
  scanf("%d", &teste);

	} while(teste != 1);

  direncaPercentual = ((maiorPeriodo - menorPeriodo) / morador) * 100;
  totalServicos = (contadorA + contadorB + contadorC) / 3;
  diferencaServicos = (totalServicos / morador) * 100;

  printf("\nPeriodo mais usado dos elevadores: %c", periodoMaisUsado);
  printf("\nO elevador mais usado: %c", elevadorMaisUsado);
  printf("\nA diferenca do mais usado e do menos usado: %.2f", direncaPercentual);
  printf("\nO total de sevico: %.2f", diferencaServicos);

}