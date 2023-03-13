#include <stdio.h>
#include <locale.h>

float det(float a, float b, float c, float d) {
    return a*d - b*c;
}

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    int A[2][2];
    float det_A;

    printf("Digite os valores da matriz A:\n\n");
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Valores de A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    det_A = det(A[0][0], A[0][1], A[1][0], A[1][1]);

    if (det_A == 0) {
        printf("A matriz A nao tem inversa.\n");
    } else {
    	
        int B[2][2] = {{A[1][1], -A[0][1]}, {-A[1][0], A[0][0]}};
        float inv_A[2][2];
        int i, j, k;
        
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2; j++) {
                inv_A[i][j] = (1/det_A) * B[i][j];
            }
        }

        printf("\nA matriz inversa de A é:\n\n");
        
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2; j++) {
                printf("%.2f ", inv_A[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}

