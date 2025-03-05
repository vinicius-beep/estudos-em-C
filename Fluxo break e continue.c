#include <stdio.h>
//break
int main(){

    int i = 0;

    for(i=1; i<=10; i++){

        printf("%d", i);

        if( i == 5){
            break;
        }
    } 
}

//continue
int main(){

    int i;

    for(i=1; i<=10; i++){

        if (i == 5)
        {
            continue;
        }

        printf("%d ", i);
    }
}
