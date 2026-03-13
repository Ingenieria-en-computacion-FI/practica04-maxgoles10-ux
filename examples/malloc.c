#include <stdio.h>
#include <stdlib.h>


int main (){
  int*array;
  int num;
  
  printf("¿Cuantos elementos tiene el conjunto?\n");
  scanf("%d", &num);
  array = (int*)malloc(num*sizeof(int));
  
  if (array!=NULL) {
    printf("[ ");
    for(int i=0; i<num; i++)
      print("%d", *(array+i));
    printf("]\n");
    free(array);
  }
}
