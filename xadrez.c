#include <stdio.h>

void Torre(int T){
    if(T <= 5){
        printf("Direita\n");
        Torre(T + 1);
    }
}

void Bispo(int B){
    if(B <= 5){
        printf("Cima\n");
        printf("Direita\n");
        Bispo(B + 1);
    }
}

void Rainha(int R){
    if(R <= 8){
        printf("Esquerda\n");
        Rainha(R + 1);
    }
}


int main(){
    int T = 1, B = 1, R = 1, C1, C2;
    
    printf("*** Torre ***\n");
    Torre(T);
    
    printf("\n");
    
    printf("*** Bispo ***\n");
    Bispo(B);

    printf("\n");
    
    printf("*** Rainha ***\n");
    Rainha(R);
    
    printf("\n");
    
    printf("*** Cavalo ***\n");
    for(C1 = 1; C1 <= 1; C1++){
        for(C2 = 1; C2 <= 2; C2++){
            printf("Cima\n");
        }
        printf("Direita\n");
    }

    return 0;
}