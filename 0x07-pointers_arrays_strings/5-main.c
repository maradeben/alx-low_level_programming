#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    t = _strstr("First, solve the problem. Then, write the code.", "solve");
    printf("%s\n", t);

   /* t = _strstr("First, solve the problem. Then, write the code.", "School"); */
  /*  printf("%s\n", t);*/

    t = _strstr("First, solve the problem. Then, write the code.", "");
    printf("%s\n", t);
    return (0);
}
