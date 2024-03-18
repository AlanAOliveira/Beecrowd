#include <stdio.h>
#include <math.h>
 
int main() {
 
    int Ordem, i, j, espacos[15] = {1,1,2,2,3,4,4,5,5,6,7,7,8,8,9};
    
    scanf("%i", &Ordem);
    while(Ordem){
        
        int matriz[Ordem][Ordem];
        for(i=0; i< Ordem;i++)
            for(j=0; j< Ordem;j++)
                matriz[i][j] = pow(2,i+j);
                
        for(i=0; i< Ordem;i++){
            for(j=0; j< Ordem;j++){
                printf("%*i",espacos[Ordem-1],matriz[i][j]);
                if(j != (Ordem - 1))
                    printf(" ");
            }
            printf("\n");
        }
        scanf("%i", &Ordem);
    }
 
    return 0;
}
