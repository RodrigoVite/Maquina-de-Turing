#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "Logica.h"
int main(int argc, char* argv[]){
  /*Maquina de Turing determinista de 1 Cinta con el siguiente formato:
     Q <- es el numero de estados que tiene de la Maquina de Turing
     Σ <- Alfabeto de la Maquina de Turing
     T <- Conjunto de símbolos de la cinta
     q <- Estado incicial de la Maquina de Turing
     B <- Símbolo de espacio en blanco
     F <- Estados Final de la Maquina de Turing
     δ <- Transiciones de la Maquina de Turing*/
    if(argc>1){
      Lee(*(argv+1));
    }else{
      Lee("Turing4.txt");
    }
  return 0;
}
