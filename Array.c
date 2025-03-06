
#include <stdio.h>

int main(){

    int v[5];

    float media;

    v[0] = 50;
    v[1] = 40;
    v[2] = 30;
    v[3] = 20;
    v[4] = 10;

    media = (v[0] + v[1] + v[2] + v[3] + v[4]) / 5;

    printf("Resultado: %f\n", media); 

}


int main(){

    int v[5] = {10, 20, 30, 40, 50};
    int i;
    float soma = 0;

    for ( i = 0; i < 5; i++)
    {
        soma += v[i];
    }
    
    printf("Resultado: %f\n", soma/5);

}

int main(){

    int v[5];
    int i;

    for ( i = 0; i < 5; i++)
    {
        printf("insira um dado:\n");
        scanf("%d", &v[i]);
    }
    
    printf("Dados inseridos:\n");

    for ( i = 0; i < 5; i++)
    {
        printf("%d ", v[i]);
    }
    
    

}