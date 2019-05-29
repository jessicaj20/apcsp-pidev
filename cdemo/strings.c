#include <stdio.h>
#include <string.h>

int main(void) 
{
  char str2[27] = "abcdefghijklmnopqrstuvwxyz\0";

  char str1[27];
  str1[0] = 'a';
  for (int i = 1; i <=26; i++)
  {
    str1[i] = str1[i-1] + 1;
  }
  str1[26] = '\0';

  if (strcmp(str1, str2) == 0)
    printf("The strings are identical\n");
  else
    printf("The strings are not identical\n");

  str1[0] = 'A';
  for (int i = 1; i <=26; i++)
  {
    str1[i] = str1[i] - 32;
  }
  str1[26] = '\0';
  
  if (strcmp(str1, str2) == 0)
    printf("The strings are identical\n");
  else
    printf("The strings are not identical\n");

  char str3[55] = "abcdefghijklmnopqrstuvwxyz\0";
  strcat(str3, str1);
  str3 [54] = '\0';

  printf("Print all 3 strings:\n");
  printf("%s\n", str1);
  printf("%s\n", str2);
  printf("%s\n", str3);
}
