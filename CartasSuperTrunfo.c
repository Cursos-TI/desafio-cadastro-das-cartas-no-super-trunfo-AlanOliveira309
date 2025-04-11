#include <stdio.h>
    //Super Trunfo - Nivel Novato
int main(){

    char estadoC1[10], estadoC2[10], codigoC1[10], codigoC2[10], ncityC1[20] , ncityC2[20];
    int populacaoC1, populacaoC2, npontoturC1, npontoturC2;
    float areaC1, areaC2, PIBC1, PIBC2;
      //Entrada de Dados da Carta 1

         printf("Carta 1: \n");

          printf("Digite o estado: \n");
          scanf("%s" , estadoC1);

          printf("Digite o Codigo do estado: \n");
          scanf("%s" , codigoC1);

          printf("Digite o nome da sua cidade: \n");
          scanf("%s" , &ncityC1);

          printf("Digite a sua população: \n");
          scanf("%d" , &populacaoC1);

          printf("Digite a sua área em km: \n");
          scanf("%f" , &areaC1);

          printf("Digite o seu PIB: \n");
          scanf("%f" , &PIBC1);

          printf("Digite a quantidade de pontos turisticos \n");
          scanf("%d" , &npontoturC1);

           printf("\n");

          //Saida de dados da Carta 1
          printf("Carta 1: \n");
          printf("Estado: %s \n" , estadoC1);
          printf("Codigo: %s \n" , codigoC1);
          printf("Nome da Cidade: %s \n" , ncityC1);
          printf("População: %d \n" , populacaoC1 );
          printf("Área: %f Km2\n" , areaC1);
          printf("PIB: %f bilhões de reais \n" , PIBC1);
          printf("Numero de pontos turisticos: %d \n" , npontoturC1 );

          printf("\n");

          //Entrada de dados da Carta 2

          printf("Carta 2: \n");

          printf("Digite o estado: \n");
          scanf("%s" , estadoC2);

          printf("Digite o Codigo do estado: \n");
          scanf("%s" , codigoC2);

          printf("Digite o nome da sua cidade: \n");
          scanf("%s" , &ncityC2);

          printf("Digite a sua população: \n");
          scanf("%d" , &populacaoC2);

          printf("Digite a sua área em km: \n");
          scanf("%f" , &areaC2);

          printf("Digite o seu PIB: \n");
          scanf("%f" , &PIBC2);

          printf("Digite a quantidade de pontos turisticos \n");
          scanf("%d" , &npontoturC2);

          printf("\n");

          //Saida de dados da Carta 2
          printf("Carta 2: \n");
          printf("Estado: %s \n" , estadoC2);
          printf("Codigo: %s \n" , codigoC2);
          printf("Nome da Cidade: %s \n" , ncityC2);
          printf("População: %d \n" , populacaoC2);
          printf("Área: %f Km2 \n" , areaC2);
          printf("PIB: %f bilhões de reais \n" , PIBC2);
          printf("Numero de pontos turisticos: %d \n" , npontoturC2);



      return 0;


}