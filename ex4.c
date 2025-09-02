#include <stdio.h>
#
int main(){
    float a;
    printf("Entrez un montant: ");
    scanf("%f",&a);
    float b = a*0.05;
    printf("aver tax ajoutee: %.2f",a+b);
    return 0;
}