#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main(){

  int n, m, i, j;
  scanf("%d %d", &n, &m);

  int array[n][m];
  int k = 0;

  for(i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      scanf("%d", &array[i][j]);
    }
  } 
  printf("\n");

  for (i = 0; i < n; i++)
  {
    for ( j = 0; j < m; j++)
        printf("%d ", array[i][j]);
    printf("\n");
  }


  return 0;
   
}

