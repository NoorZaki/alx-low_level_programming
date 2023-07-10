#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  *argstostr - concatenates all arguments of the program.
  *@ac: argument count.
  *@av: pointer to array of size ac.
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  */
char *argstostr(int ac, char **av)
{
if (ac == 0 || av == NULL)
{
return NULL;
}
int total_len = 0;
for (int i = 0; i < ac; i++)
{
total_len += strlen(av[i]) + 1; // +1 for the '\n'
}
char *new_str = malloc(total_len * sizeof(char));
if (new_str == NULL)
{
return NULL;
}
int i = 0;
for (int j = 0; j < ac; j++)
{
strcat(new_str + i, av[j]);
i += strlen(av[j]);
strcat(new_str + i, "\n");
i++;
}
return new_str;
}


