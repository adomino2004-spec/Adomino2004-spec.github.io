#include <stdio.h>

int main() {
    int A[10][10], B[10][10], C[10][10],i,j,k,n;
    printf("please enter the side length of the square matrix:");
    scanf("%d",&n);
    
    printf("please enter elements of matrix A\n");
    
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
           scanf("%d",&A[i][j]);
        }
    }

       printf("please enter elements of matrix B\n");
    
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
           scanf("%d",&B[i][j]);
        }
    }
    
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            C[i][j]=0;
            for(k=0; k<n; k++){
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }
    
   printf("the product is\n");
    
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
           printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
