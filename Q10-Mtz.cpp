#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    int A[2][2] = {{1, 2}, {3, 4}};
    int eY[2][2];
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            eY[i][1-j] = A[i][j];
        }
    }
    
    printf("A reflex�o em rela��o ao eixo Y da Matriz A � : \n\n");
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", eY[i][j]);
        }
        printf("\n");
    }
    return 0;
}
