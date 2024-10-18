/*Karla Alexia Guerrero González
Práctica 10 17/10/24
Impresión de matriz 3 x 3 Ciclo While*/

#include <stdio.h>

int main()
{
  int arr[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
  int i = 0, j = 0;
  
  while(i < 3)
    {
      while(j < 3)
        {
          printf("%d ", arr[i][j]);
          j++;
        }
      j = 0;
      printf("\n");
      i++;
    }
  
return 0;
}
