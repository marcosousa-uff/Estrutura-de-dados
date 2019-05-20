#include <stdio.h>
#include <stdlib.h>

void hanoi(int n, char ini,char fim,char aux){
    if(n==1){
        printf("\nmove disco de %c para %c",ini,fim);
    }else{
        hanoi(n-1,ini,aux,fim);
        printf("\nmove disco de %c para %c",ini,fim);
        hanoi(n-1,aux,fim,ini);
    }

}

int main(){
    char a = 'A';
    char b = 'B';
    char c = 'C';

    hanoi(2,a,b,c);

    return 0;
}
