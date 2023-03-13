#include<stdio.h>
#include<locale.h>
#define t 2

int main (){
   
    setlocale(LC_ALL, "Portuguese");
   
    int a[t][t];
   
     
      for (int i=0; i<t; i++ ){
        for (int j=0; j<t; j++ ){
            printf("Insira o valor [%d][%d]: ",i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    }
   
    int b[t][t];
   
    for (int i=0; i<t; i++ ){
        for (int j=0; j<t; j++ ){
           
            a[i][j]= b[j][i];
       
         }
    }    
   
    printf("Matriz original: \n");
   
      for (int i=0; i<t; i++ ){
        for (int j=0; j<t; j++ ){
            printf("%d ", a[i][j]);
            printf("\n");
        }
    }
   
    printf("Matriz transposta: \n");
   
    for (int i=0; i<t; i++ ){
        for (int j=0; j<t; j++ ){
            printf("%d ",b[i][j]);
            printf("\n");
        }
    }
   
    return 0;
}
