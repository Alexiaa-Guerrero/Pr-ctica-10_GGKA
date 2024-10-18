/*Karla Alexia Guerrero González
Práctica 10 17/10/24
Suma de matrices 3 x 3 dadas por el usuario*/

#include <stdio.h>

int main()
{
  int arrUno[3][3] = {{}, {}, {}};
  int arrDos[3][3] = {{}, {}, {}};
  int i, j;
  for(i = 0; i < 3; i++)
      {
        for(j = 0; j < 3; j++)
          {
            printf("Ingrese el elemento de matriz de fila %d y columna %d", i, j);
            scanf("%d", &arrUno[i][j]);
          }
      }
  for(i = 0; i < 3; i++)
      {
        for(j = 0; j < 3; j++)
          {
            printf("Ingrese el elemento de matriz de fila %d y columna %d", i, j);
            scanf("%d", &arrDos[i][j]);
          }
      }











    for(i = 0; i < 3; i++)
      {
        for(j = 0; j < 3; j++)
          {
            printf("%d ", arr[i][j]);
          }
        printf("\n");
      }
return 0;
}
