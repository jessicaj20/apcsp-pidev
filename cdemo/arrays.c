#include <stdio.h>

int arrayAdd (int* arr, int s, int n)
{
  for (int i = 0; i < s; i++)
  {
    arr[i] = arr[i] + n;
  }
}

int main(void) 
{
  int arr[100];
  for (int i = 0; i < 100; i++)
  {
    arr[i] = i * i;
  }

  //call arrayAdd
  int s = 100;
  int n = 1;
  arrayAdd(arr, s, n);

  printf("Print Array:\n");
  for (int i = 0; i < s; i++)
  {
    printf("%d, ", arr[i]);
  }
}
