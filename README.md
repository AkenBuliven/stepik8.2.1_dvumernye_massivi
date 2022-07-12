# stepik8.2.1_dvumernye_massivi

Вывести элементы двумерного массива (матрицы) на экран.

Входные данные:
Два натуральных числа 
N
N и 
M
M. Далее с новой строки 
N
N строк по 
M
M целых чисел в каждой. 
N
N и 
M
M не превышают десяти.

Выходные данные: 
Вывести матрицу 
N
N на 
M
M. Числа в строках записывать через пробел.

Sample Input:
3 4
1 2 3 4
1 3 4 5
0 2 3 -2
Sample Output:
1 2 3 4
1 3 4 5
0 2 3 -2


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
