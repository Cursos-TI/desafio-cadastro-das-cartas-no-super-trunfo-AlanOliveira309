#include <stdio.h>
    //Super Trunfo - Nivel Mestre
int main(){

    char estadoC1[10], estadoC2[10], codigoC1[10], codigoC2[10], ncityC1[20] , ncityC2[20];
    int  npontoturC1, npontoturC2;
    float areaC1, areaC2, PIBC1, PIBC2, DensPop1, DensPop2, PIBPC1, PIBPC2, SuperPoder1, SuperPoder2, DensPopInv1, DensPopInv2;
    unsigned long int populacaoC1, populacaoC2;
      //Entrada de Dados da Carta 1

         printf("Carta 1: \n");

          printf("Digite o estado: \n");
          scanf("%s" , estadoC1);

          printf("Digite o Codigo do estado: \n");
          scanf("%s" , codigoC1);

          printf("Digite o nome da sua cidade: \n");
          scanf("%s" , ncityC1);

          printf("Digite a sua população: \n");
          scanf("%lu" , &populacaoC1);

          printf("Digite a sua área em km: \n");
          scanf("%f" , &areaC1);

          printf("Digite o seu PIB: \n");
          scanf("%f" , &PIBC1);

          printf("Digite a quantidade de pontos turisticos \n");
          scanf("%d" , &npontoturC1);

          //Calculo de densidade populacional e pib per Capta da carta 1
          DensPop1 = populacaoC1 / areaC1;
          PIBPC1 = PIBC1 / populacaoC1;
          DensPopInv1 = 1 / DensPop1;

          //Calculo de Super Poder da Carta 1
          SuperPoder1 = populacaoC1 + areaC1 + PIBC1 + npontoturC1 + PIBPC1 + DensPopInv1;

           printf("\n");

          //Saida de dados da Carta 1
          printf("Carta 1: \n");
          printf("Estado: %s \n" , estadoC1);
          printf("Codigo: %s \n" , codigoC1);
          printf("Nome da Cidade: %s \n" , ncityC1);
          printf("População: %lu \n" , populacaoC1 );
          printf("Área: %f Km2\n" , areaC1);
          printf("PIB: %f Bilhoes de Reais \n" , PIBC1);
          printf("Numero de pontos turisticos: %d \n" , npontoturC1 );
          printf("Densidade Populacional: %f \n", DensPop1);
          printf("PIB per Capita: %.2f Reais\n", PIBPC1);
          printf("O super poder da Carta 1 é: %.2f\n", SuperPoder1);

          printf("\n");

          //Entrada de dados da Carta 2

          printf("Carta 2: \n");

          printf("Digite o estado: \n");
          scanf("%s" , estadoC2);

          printf("Digite o Codigo do estado: \n");
          scanf("%s" , codigoC2);

          printf("Digite o nome da sua cidade: \n");
          scanf("%s" , ncityC2);

          printf("Digite a sua população: \n");
          scanf("%lu" , &populacaoC2);

          printf("Digite a sua área em km: \n");
          scanf("%f" , &areaC2);

          printf("Digite o seu PIB: \n");
          scanf("%f" , &PIBC2);

          printf("Digite a quantidade de pontos turisticos \n");
          scanf("%d" , &npontoturC2);

          //Calculo de densidade populacional e pib per Capta da carta 2
          DensPop2 = populacaoC2 / areaC2;
          PIBPC2 = PIBC2 / populacaoC2;
          DensPopInv2 = 1 / DensPop2;
          //Calculo de Super Poder da Carta 2
          SuperPoder2 = populacaoC2 + areaC2 + PIBC2 + npontoturC2 + PIBPC2 + DensPopInv2;

          printf("\n");

          //Saida de dados da Carta 2
          printf("Carta 2: \n");
          printf("Estado: %s \n" , estadoC2);
          printf("Codigo: %s \n" , codigoC2);
          printf("Nome da Cidade: %s \n" , ncityC2);
          printf("População: %lu \n" , populacaoC2);
          printf("Área: %f Km2 \n" , areaC2);
          printf("PIB: %f Bilhoes de Reais\n" , PIBC2);
          printf("Numero de pontos turisticos: %d \n" , npontoturC2);
          printf("Densidade Populacional: %f \n", DensPop2);
          printf("PIB per Capita: %.2f reais \n", PIBPC2);
      

        //modificadores de tipos de dados: unsigned, signed, long e short 
        //unsigned - apenas valores positivos e 0 (ele dobra a faixa positiva de valores. ex em char:-128 a 127 fica de 0 a 255)
        //long - pode armazenar mais valores que uma int normal
        printf("\n");

        //Comparativo entre as cartas
        printf("População: Carta %d venceu\n",(populacaoC1 > populacaoC2) ? 1 : 2);
        printf("Area: Carta %d venceu \n",(areaC1 > areaC2) ? 1 : 2);
        printf("PIB: Carta %d venceu \n",(PIBC1 > PIBC2) ? 1 : 2);
        printf("Numero de Pontos turisticos: Carta %d venceu \n",(npontoturC1 > npontoturC2) ? 1 : 2);
        printf("Densidade Populacional: Carta %d venceu \n",(DensPop1 < DensPop2) ? 1 : 2);
        printf("PIB Per Capta: Carta %d venceu \n",(PIBPC1 > PIBPC2) ? 1 : 2);
        printf("Super Poder: Carta %d venceu \n",(SuperPoder1 > SuperPoder2) ? 1 : 2);

      return 0;
}