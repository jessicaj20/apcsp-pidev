#include <stdio.h>

float areaofcircle (float r, float a)
{
  a = r * r * 3.14;
  return a;
}

int main(void) 
{
  //call areaofcircle
  float i;
  for (i=3.5; i<=12.5; i++)
  {
    float r = i;
    float a;
    a = areaofcircle(r, a);
    printf("The area of the circle is %f\n", a);
  }
}
