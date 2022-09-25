/*
Questão 02 do PDF - {IV PROBLEMAS COM VETORES}
Dev: Silvio Lopes
Linguagem: C
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int vetA[] = {1,3,5,7,9,45,68,94,106,204,306};
int vetB[] = {94,96,98,105,3,156,958,47,65,25};
int vetAB[20];

/*Função que insere os valores par do vetorA para o vetor AUX*/
int retorna_par(int *vet_A,int limite,int *vetAUX){//vetA = vetorA , limite = tamanho e vetAUX , o vetor que vai receber os valores ímpares
  int cont;
  int contAUX = 0;//contador que vai retornar o tamanho do nosso array Par
  for (cont = 0;cont<limite;cont++){
    //condição para verificar se é par ou não {par == % 2 ser '0'}
    if(vet_A[cont] % 2 == 0){
      vetAUX[contAUX] = vet_A[cont];
      contAUX++;
    }
  }
  return contAUX;//Usar para ter o tamanho correto dos vetores AUX
}

/*Imprimir vetorA*/
void printVET_A(int *vetA,int size){
  int cont;
  printf("vetor_A = {");
  for(cont = 0; cont < size;cont++){
    if (cont+1 == size){// Condicional apenas para manter a boa apresentação dos valores
      printf("%d",vetA[cont]);
    }
    else{
      printf("%d,",vetA[cont]);
    } 
  }
  printf("}\n");
}

/*Função imprime valores do vetor par*/
void printVET_PAR(int *vet,int limite){
  int cont = 0;
  printf("vetorPAR = {");
  for (cont = 0;cont < limite;cont++){
    if (cont+1 == limite){
      printf("%d",vet[cont]);//Estética apenas!
    }else {
      printf("%d,",vet[cont]);
    }
  }
  printf("}");
}

/*Imprime os valores do vetor B*/
void printVET_B(int *vetB,int size){
  int cont;
  printf("\n\nvetor_B = {");
  for(cont = 0; cont < size;cont++){
    if (cont+1 == size){// Condicional apenas para manter a boa apresentação dos valores
      printf("%d",vetB[cont]);
    }
    else{
      printf("%d,",vetB[cont]);
    } 
  }
  printf("}\n");
}


/*Função que insere os valores ímpares do vetor B no vetorAUX*/
int retorna_impar(int *vetB,int limite,int *vetImpar){
  int cont;
  int contAUX = 0;//Contador que vai retornar o tamanho necessário do vetorIMPAR
  for(cont = 0;cont < limite;cont++){
    if(vetB[cont] % 2 != 0) {
      vetImpar[contAUX] = vetB[cont];//Vetor auxiliar[contAUX] recebe vetorB[cont]
      contAUX++;
    }
  }
  return contAUX;
}

/*Função que imprime o vetor Impar*/
void printVET_IMPAR(int *vet,int limite){
  int cont = 0;
  printf("vetorIMPAR = {");
  for (cont = 0;cont < limite;cont++){
    if (cont+1 == limite){
      printf("%d",vet[cont]);//Estética apenas!
    }else {
      printf("%d,",vet[cont]);
    }
  }
  printf("}");
}


/*Função - Inserir de forma alternada os valores dos elementos pares e ímpares no vetor único*/

int insertAB (int *vetPAR,int *vetIMPAR,int *vetAB,int limite){
  int cont;
  int contAUX = 0;
  
  return contAUX;
}

/*Função que imprime os valores do vetor AB*/

void printVETAB(int *vetAB,int limite){
  int cont;
  printf("\nvetorAB = {");
  for(cont = 0;cont<limite;cont++){
    if (cont+1 == limite){
       printf("%d",vetAB[cont]);
    } 
    else{
      printf("%d,",vetAB[cont]);
    }
  }
}

int main(void) {
  int size_A = 0;
  int size_B = 0;
  int vetPAR_A[20];//Definindo um tamanho para o vetor que receberá os valores pares
  int vetIMPAR_B[20];
  int sizevetPAR_A; //Variável que vai receber o tamanho necessário para percorrer o vetor PAR
  int sizevetIMPAR_B;
  int sizevetAB;
  size_A = sizeof(vetA)/sizeof(vetA[0]);//Obtendo tamanho do vetor A
  size_B = sizeof(vetB)/sizeof(vetB[0]);//Obtendo tamanho do vetor B
  sizevetPAR_A = retorna_par(vetA, size_A, vetPAR_A);//Pegando o tamanho do vetor para leitura
  sizevetIMPAR_B = retorna_impar(vetB, size_B, vetIMPAR_B);
  printVET_A(vetA,size_A);//Imprimindo o vetorA 
  printVET_PAR(vetPAR_A, sizevetPAR_A);//Imprimindo os valores pares inseridos no vetor vetPAR_A
  //Pegar vetor impar agora
  printVET_B(vetB, size_B);//Imprimindo o vetorB
  printVET_IMPAR(vetIMPAR_B, sizevetIMPAR_B);//Imprimindo os valores do vetor que armazenou impar
  //vetor AB(Valores alternando)
  sizevetAB = insertAB(vetPAR_A,vetIMPAR_B,vetAB,sizevetPAR_A+sizevetIMPAR_B);//Pegando tamanho e inserindo os valores
  printVETAB(vetAB, sizevetAB);
}