#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *new_dog - Write a function that creates a new dog.
 * @name: element name of the dog
 * @age: element age of the dog
 * @owner: element owener of the dog
 * Return: pointer to nwdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *nwdog;
	char *nwname, *nwowner;
	int a = 0, b = 0, c = 0, d = 0;

	nwdog = malloc(sizeof(struct dog));
	if (nwdog == NULL)
		return (NULL);
	for (a = 0; name[a] != '\0'; a++)
		;
	for (b = 0; owner[b] != '\0'; b++)
		;
	nwname = malloc(sizeof(char) * (a + 1));
		if (nwname == NULL)
		return (NULL);
	nwowner = malloc(sizeof(char) * (b + 1));
		if (nwowner == NULL)
		return (NULL);
	for (c = 0; c <= a; c++)
	nwname[c] = name[c];
	for (d = 0; d <= b; d++)
	nwowner[d] = owner[d];
	nwdog->name = nwname;
	nwdog->age = age;
	nwdog->owner = owner;
	return (nwdog);
}
