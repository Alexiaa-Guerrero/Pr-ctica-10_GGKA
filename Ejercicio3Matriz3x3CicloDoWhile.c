/*Karla Alexia Guerrero González
Práctica 10 17/10/24
Impresión de matriz 3 x 3 Ciclo Do While*/

#include <stdio.h>

int main()
{
  int arr[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
  int i = 0, j = 0;

  do
    {
      j = 0;
        do
        {
          printf("%d ", arr[i][j]);
          j++;
        }
        while(j < 3);
      printf("\n");
      i++;
    while(i < 3);
    }
return 0;
}


        
