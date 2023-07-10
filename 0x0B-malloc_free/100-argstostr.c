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
char **strtow(char *str)
{
if (str == NULL || str[0] == '\0')
{
return NULL;
}
int word_count = 1;
char *word;
for (int i = 0; str[i] != '\0'; i++)
{
if (str[i] == ' ')
{
word_count++;
}
}
char **words = malloc(sizeof(char *) * (word_count + 1));
if (words == NULL)
{
return NULL;
}
int j = 0;
word = strtok(str, " ");
while (word != NULL)
{
words[j++] = word;
word = strtok(NULL, " ");
}
words[j] = NULL;
return words;
}

