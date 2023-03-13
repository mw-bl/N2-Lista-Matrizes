#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    int A[2][2] = {{2, 3}, {1, 4}};
    int cft[2][2];
    
    cft[0][0] = A[1][1];
    cft[0][1] = -1 * A[1][0];
    cft[1][0] = -1 * A[0][1];
    cft[1][1] = A[0][0];
    
    printf("A cofatora da Matriz A é : \n");
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", cft[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
