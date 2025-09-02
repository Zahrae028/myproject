#include <stdio.h>

int main(){
    int x;
    printf("entrez la valeur de x:");
    scanf("%d",&x);
    int sum = ((((3*x + 2)*x - 5)*x - 1 )*x + 7)*x-6;
    printf("%d",sum);
    
    
    return 0;
}