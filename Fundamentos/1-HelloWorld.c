#include <stdio.h>;
#include<stdlib.h>
#include<stdbool.h>;
#include <locale.h>


void main (){
setlocale(LC_ALL, "Portuguese");

bool a = true;
bool b = false;


if (a){

    printf("\nA é verdadeiro");
}

if(b){
printf("\n b eh verdadeiro");
}else{
printf("\n b eh falso");

}



system ("pause");


}







