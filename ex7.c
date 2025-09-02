#include <stdio.h>
int main(){
    int bill ;
    printf("Entrez un mantant en dollars : ");
    scanf("%d",&bill);
    int a = bill /20;
    int rest =bill - a*20;
    int b = rest / 10;
    rest = rest - b*10;
    int c = rest / 5;
    rest = rest - c*5;
    int d = rest / 1;

    printf("Billets de 20$ :%d \n Billets de 10$ : %d \n Billets de 5$ :%d \n Billets de 1$ : %d",a ,b,c,d);

    return 0;
}