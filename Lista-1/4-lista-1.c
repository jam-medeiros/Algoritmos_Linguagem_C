#include <stdio.h>
#include <stdlib.h>

 void main()
 {
 int n, kwh, tipo, qtdResidencial=0, qtdComercial=0;
 float residencial=0, comercial=0, industrial=0, total;
 float mediaResidencial=0, mediaComercial=0;

 do {
 printf("Digite o numero do consumidor: \n");
 scanf("%d", &n);
 if (n == 0)
 break;
 printf("Digite a quantidade de kWh consumidos: \n");
 scanf("%d", &kwh);
 printf("TIPO \n");
 printf("1 - Residencial \n");
 printf("2 - Comercial \n");
 printf("3 - Industrial \n");
 scanf("%d", &tipo);
 switch(tipo) {
 case 1:
 {
 total = kwh * 0.3;
 residencial += kwh;
 break;
 }
 case 2:
 {
 total = kwh * 0.5;
 comercial += kwh;
 break;
 }
 case 3:
 {
 total = kwh * 0.7;
 industrial += kwh;
 break;
 }
 }
 if (tipo == 1)
 qtdResidencial++;
 else if (tipo == 2)
 qtdComercial++;
 printf("Custo total do consumidor: %f\n", total);
 } while(n != 0);

 if (qtdComercial != 0)
 mediaComercial = comercial / qtdComercial;
 if (qtdResidencial != 0)
 mediaResidencial = residencial / qtdResidencial;

 printf("Total de consumo residencial: %f \n", residencial);
printf("Total de consumo comercial: %f \n", comercial);
 printf("Total de consumo industrial: %f \n", industrial);
 printf("Media de consumo residencial: %f \n", mediaResidencial);
 printf("Media de consumo comercial: %f \n", mediaComercial);
 }
