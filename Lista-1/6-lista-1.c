#include <stdio.h>
#include <stdlib.h>

 void main()
 {
 int i;
 char nome[100];
 float salario, aliquota;

 for (i=1; i<=10; i++) {
 printf("Digite o nome: \n");
 fflush(stdin);
 fgets(nome, 100, stdin);
 printf("Digite o salario: \n");
 scanf("%f", &salario);
 if (salario <= 1300) {
 printf("Isento de imposto \n");
 }
 else {
 if (salario <= 2300) {
 aliquota = (salario * 10) / 100;
 }
 else {
 aliquota = (salario * 15) / 100;
 }
 printf("Aliquota: %f \n", aliquota);
 }
 }
}
