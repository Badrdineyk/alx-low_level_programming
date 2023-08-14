#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

int str_len(char *str);
char *str_cpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * str_len - Gets the length of a string.
 * @str: The string.
 *
 * Return: The string's length.
 */
int str_len(char *str)
{
	int length = 0;

	while (str[length] != '\0')
		length++;

	return (length);
}

/**
 * str_cpy - Copies the string pointed by src to the destination.
 * @dest: Th destination.
 * @src: The source string.
 *
 * Return: The copied string.
 */
char *str_cpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner's dog.
 *
 * Return: A pointer to new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);

	n_dog->name = malloc(sizeof(char) * (str_len(name) + 1));
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}

	n_dog->owner = malloc(sizeof(char) * (str_len(owner) + 1));
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}

	n_dog->name = str_cpy(n_dog->name, name);
	n_dog->age = age;
	n_dog->owner = str_cpy(n_dog->owner, owner);

	return (n_dog);
}
