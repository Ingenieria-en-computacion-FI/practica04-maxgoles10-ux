#include <stdio.h>
#include <stdlib.h>


int main (){
 int *array, *array2;
 int num;

 printf("¿Cuantos elementos tiene el conjunto?\n");
 scanf("%d", &num);
 array = (int*)malloc(num*sizeof(int));

  if (array!=NULL) {
    for(int i=0; i<num; i++);{
    printf("Ingresa el valor para el arreglo");
    scanf("%d", (array+i));
    }

    printf("[ ");
    for(int=0; i<num; i++){
      print("%d", *(array+i));
    }

    printf("]\n");

    array2=(int*)realloc(array,2*num*sizeof(int));
     if (array2!=NULL) {
        for(int i=num; i<2*num; i++){
          printf("Ingresa el valor para el arreglo: ");
          scanf("%d", (array2+i));
        }
        printf("[ ");
        for(int=0; i<2*num; i++){
          printf("%d", *(array2+i));
        }
        printf("]\n");
      }
    
    free(array2);
  }
  return 0;
}
