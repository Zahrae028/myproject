#include <stdio.h>

    int main(){
        float a;
        float b;
        float c;

        printf("Entrez le montant du pret :");
        scanf("%f",&a);
        printf("Entrez le taux d'interet :");
        scanf("%f",&b);
        printf("Entrez le paiement mensuel :");
        scanf("%f",&c);
        float p =a;
        for (int i = 0; i < 3; i++)
        {
            p = ((p*(b/100)/12)+p-c);
            printf("solde restant apres le %d paiment : %.2f \n",i+1,p);
        }
        


        return 0;
    }