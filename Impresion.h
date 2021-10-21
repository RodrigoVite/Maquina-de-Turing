/*Función que realizara el recorrido de la cinta de la Máquina de Turing*/
void proceso(Cola,char*,char*,Cola2,char*);
/*Función que muestra la configuración de la Máquina de Turing*/
void muestraTM(Cola,char*,char*,char*,Cola2);
/*Funcion que muestra la configuracion de la maquina de Turing*/
void muestraTM(Cola TM,char* lenguaje,char* efinal,char* inicial,Cola2 T){
  puts("Máquina de Turing:");
  impCola(TM,0);
  puts("Transiciones:");
  impCola2(T);
  int ban=0;
  char *cad;
  puts("Ingresa una cadena para trabajar:");
  cad=(char*)malloc(sizeof(char)*1000);
  fflush(stdin);
  fgets(cad,1000,stdin);
  ban=valCad(lenguaje,cad);
  (!ban)?(printf(".....\n")):
  (printf("Cadena invalida\nLos caracteres que ingreso no pertenecen al"
  "lenguaje que esta colocado\n"));
  (!ban)?(proceso(TM,efinal,inicial,T,cad)):(exit(1));
}
