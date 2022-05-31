#include <stdio.h>
void main(){

float notas_1[5], notas_2[5], notas_3[5], medias[5], soma_1, soma_2, soma_3;
int cont;

for (cont=1; cont<6; cont++) {
  printf("\nDigite a primeira nota do aluno %d: ", cont);
  scanf("%f", &notas_1[cont-1]);
    while (notas_1[cont-1] < 0 || notas_1[cont-1] > 10) {
      printf("\nA nota n%co pode ser menor que 0 e nem maior que 10.\nDigite novamente a primeira nota do aluno %d: ", 198, cont);
      scanf("%f", &notas_1[cont-1]);
    }
    soma_1 += notas_1[cont-1];

  printf("\nDigite a segunda nota do aluno %d: ", cont);
  scanf("%f", &notas_2[cont-1]);
    while (notas_2[cont-1] < 0 || notas_2[cont-1] > 10) {
      printf("\nA nota n%co pode ser menor que 0 e nem maior que 10.\nDigite novamente a segunda nota do aluno %d: ", 198, cont);
      scanf("%f", &notas_2[cont-1]);
    }
    soma_2 += notas_2[cont-1];

  printf("\nDigite a terceira nota do aluno %d: ", cont);
  scanf("%f", &notas_3[cont-1]);
    while (notas_3[cont-1] < 0 || notas_3[cont-1] > 10) {
      printf("\nA nota n%co pode ser menor que 0 e nem maior que 10.\nDigite novamente a terceira nota do aluno %d: ", 198, cont);
      scanf("%f", &notas_3[cont-1]);
    }
    soma_3 += notas_3[cont-1];

  medias[cont-1]=((notas_1[cont-1]+notas_2[cont-1]+notas_3[cont-1])/3);
}

for (cont=1; cont<6; cont++) {
printf("\nA m%cdia do aluno %d nas tr%cs provas foi %.2f.", 130, cont, 136, medias[cont-1]);
}
printf("\nA m%cdia da turma na primeira prova foi %.2f.", 130, soma_1/5);
printf("\nA m%cdia da turma na segunda prova foi %.2f.", 130, soma_2/5);
printf("\nA m%cdia da turma na terceira prova foi %.2f.", 130, soma_3/5);
printf("\nA m%cdia da turma em todas as provas foi %.2f.", 130, (soma_1+soma_2+soma_3)/15);
}
