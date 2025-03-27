#include <stdio.h>
int main() {
    
    int população=200.0000, numero de pontos turísticos=50;
    float área=100.000,PIB=699.28;
    char código,cidade [50];
    char estado;"A";

    prinft("Digite população:\n");
    scanf("%2", & população);
    
    printf("Digite número de pontos turísticos:\n");
    scanf("%d", & numero de ponto turísticos);

    printf(" Digite área: \n");
    scanf("%2f",área);

    printf("Digite PIB: \n");
    scanf("%2f",PIB);

    printf("Digite seu código: \n");
    scanf("%d",código);

    printf("Digite nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite o estado:\n");
    scanf("%s",estado);

    
    printf("estado:%s-código:%d-cidade:%s");
    printf("população:%2-número de pontos turísticos:%d");
    printf("área:%2f-PIB:%2f");
    


    return 0;
}
