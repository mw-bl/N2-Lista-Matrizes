#include <stdio.h>
#include <locale.h>
#define LIN 3
#define COL 3


int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int mtz[LIN][COL], adj[LIN][COL];
	int det, cft, sinal = 1;
	
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			printf("Digite o valor da posição [%d][%d]: ", i , j);
			scanf("%d", &mtz[i][j]);
		}
		printf("\n");
	}

	
	for (int i = 0; i < LIN; i++) {
		for (int j = 0; j < COL; j++) {
			cft = ((mtz[(i+1)%3][(j+1)%3] * mtz[(i+2)%3][(j+2)%3]) - (mtz[(i+1)%3][(j+2)%3] * mtz[(i+2)%3][(j+1)%3]));
			det += mtz[i][j] * cft * sinal;
			sinal *= -1;
		}
	}
	
	for (int i = 0; i < LIN; i++) {
		for (int j = 0; j < COL; j++) {
			cft = ((mtz[(i+1)%3][(j+1)%3] * mtz[(i+2)%3][(j+2)%3]) - (mtz[(i+1)%3][(j+2)%3] * mtz[(i+2)%3][(j+1)%3]));
			adj[j][i] = cft * sinal;
			sinal *= -1;
		}
	}

	printf("Matriz adjunta:\n");
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			printf("%d ", adj[i][j]);
		}
		printf("\n");
	}

	return 0;
}

