#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  float d;
  float* ptrtod;
  float e;
  float* ptrtoe;

  ptrtod = &d;
  ptrtoe = &e;

  d = 1.2345;
  e = 6.7891;
  
  printf("The value of d is %f\n", d);
  printf("The address of d is %d\n", &d);
  printf("The value of ptrtod is %d\n", ptrtod);

  printf("The value of e is %f\n", e);
  printf("The address of e is %d\n", &e);
  printf("The value of ptrtoe is %d\n", ptrtoe);

  float z;
  float* ptrtoz;

  ptrtoz = &z;

  z = e;

  ptrtoe = ptrtod;
  ptrtod = ptrtoz;

  printf("The value of d is %f\n", *ptrtod);
  printf("The address of d is %d\n", &d);
  printf("The value of e is %f\n", *ptrtoe);
  printf("The address of e is %d\n", &e);
}
