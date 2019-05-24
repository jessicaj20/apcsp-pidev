#include <stdio.h>


int main()
{
   int a = 4;
   for (int i = 1; i < 100; i++)
   {
     if (i % a == 0)
     {
       printf("i is %d\n", i);
     }
     //printf("done -a is equal to %d\n",a);
   }
}
