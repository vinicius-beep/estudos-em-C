#include <stdio.h>
#include <string.h>
//usado para trabalhar com strings
#include <locale.h>
//usado para colocar textos em portugues, como acentos

int main(){

    char s[10];

    printf("digite algo (scanf convencional):\n");
    scanf("%s", s);
    fflush(stdin);
    //fflush(stdin) é utilizado para não dar problemas em códigos com char ou float

    printf("Resultado: %s\n\n", s);

    printf("Digite algo (scanf aprimorado):\n");
    scanf("%9[^\n]s", s);
    fflush(stdin);

    printf("resultado: %s\n\n", s);


}

//gets, puts, fgets
int main(){

    char s[10];

    printf("Digite algo (leitura pelo gets):\n");
    gets(s);
    //gets não limita o numero de caracteres
    fflush(stdin);
    

    puts("Resultado: ");
    puts(s);
    puts("");
    //puts mostra a String na tela

    printf("Digite algo (leitura pelo fgets):\n");
    fgets(s, 10, stdin);
    //fgets usa o limite de caracteres, ele diminui um caracter que é reservado para o \0
    fflush(stdin);

    puts("Resultado:");
    puts(s);
}

//strcpy
#define N 20

int main(){
    setlocale(LC_ALL,"Portuguese");
    //permiti que a aplicação trabalhe com assentos, é necessário ter a biblioteca #include <locale.h>

    char origem[N] = {"Olá, mundo"};
    char destino[N];

    printf("Antes do strcpy:\n");
    puts(origem);
    puts(destino);

    strcpy(destino,origem);
    //strcpy Copia a string origem para destino.

    printf("Depois do strcpy:\n");
    puts(origem);
    puts(destino);
}

//strcat
#define N 50

int main(){
    setlocale(LC_ALL,"Portuguese");

    char s1[N] = {"Lógica de"};
    char s2[N] = {"Programação!"};

    printf("Antes do strcat:\n");
    printf("str1: %s\n", s1);
    printf("str2: %s\n", s2);

    strcat(s1,s2);
    //strcat junta strings

    printf("Depois do strcat:\n");
    puts(s1);

}

//strlen
#define N 50

int main(){
    setlocale(LC_ALL,"Portuguese");

    char s[N];
    int i;
    printf("Digite um texto:\n");
    gets(s);
    i = strlen(s);
    //Retorna o tamanho da string (quantidade de caracteres, sem contar o \0).

    printf("\nTamanho do texto: %d\n\n", i);

    printf("Impressão de posição a posição:\n");
    puts(s);
    
}

//strcmp
#define N 50

int main(){
    setlocale(LC_ALL, "Portuguese");

    char hardText[N] = {"/exit"};
    char senha_usr[N];
    int ok;

    printf("Digite um texto:\n");
    gets(senha_usr);

    ok = strcmp(hardText, senha_usr);
    //strcmp compara textos

    if(ok == 0)
        printf("Textos iguais.\n");
    else
        printf("Texto diferentes.\n");
}
