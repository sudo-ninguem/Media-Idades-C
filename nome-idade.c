#include <stdio.h>
#include <string.h>

void clear () {
  char c; 
  while ((c = getchar()) != '\n' && c !=EOF ) {}
}

void string ( char *buffer, int length){
  fgets( buffer, length, stdin);
  strtok(buffer, "\n"); 
}

int main () {

  int idade1, idade2;
  double media;

  char nome1[50];
  char nome2[50];


  printf(" \n Digite o nome da primeira pessoa: ");
  string(nome1, 50); 

  printf("\n Digite a idade da primeira pessoa: ");
  scanf("%d", &idade1); 
  clear(); 

  printf(" \n Digite o nome da segunda pessoa: ");
  string(nome2, 50); 

  printf(" \n Digite a idade da segunda pessoa: ");
  scanf("%d", &idade2);
  clear();

  media = ( (double) idade1 + idade2) / 2; 

  printf(" \n A média da idade de %s e %s é de %.1lf", nome1, nome2, media);

  return 0; 
}