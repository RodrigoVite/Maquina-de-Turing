/*Declaracion de la estructura de datos Pila*/
typedef struct SNodo{
  Elem1 dat;
  struct SNodo *sP;
}*Stack;
/*Creacion del tope de la funcion*/
Stack newStack(){return NULL;}
/*Funcion que añade datos a la estructura*/
Stack push(Stack s,Elem1 e){
  Stack s1=(Stack)malloc(sizeof(struct SNodo));
  s1->dat=e;
  s1->sP=s;
  return s1;
}
/*Funcion booleana que permite saber si la estructura llego a su tope*/
int isEmpty(Stack s){return s==NULL;}
/*Funcion que saca los datos del Stack*/
Stack pop(Stack s){return s->sP;}
/*Funcion observadora que permite ver el cabezal de la Pila*/
Elem1 headStack(Stack s){return s->dat;}
/*Funcion que imprime toda la Pila*/
void printTranStack(Stack s){
  if(!isEmpty(s)){
    printTranStack(pop(s));
    printf("%s\t",headStack(s));
  }else{
    printf("\n");
  }
}

int sizeStack(Stack s){
  return (!isEmpty(s))?(1+sizeStack(pop(s))):(0);
}
