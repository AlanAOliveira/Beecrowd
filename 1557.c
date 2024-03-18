#include <stdio.h>
#include <math.h>
 
int main() {
 
    int Ordem, i, j;
    
    scanf("%i", &Ordem);
    
    while(Ordem){
        
        int matriz[Ordem][Ordem];
        for(i=0; i< Ordem;i++)
            for(j=0; j< Ordem;j++)
                matriz[i][j] = pow(2,i+j);
                
        for(i=0; i< Ordem;i++){
            for(j=0; j< Ordem;j++)
                printf("%i",matriz[i][j]);
            printf("\n");
        }
        scanf("%i", &Ordem);
    }
 
    return 0;
}
