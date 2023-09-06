#include "main.h"

/**
 * @main - calls the function
 * Return: 0
 */

int main()
{
	char input[] = "I love  C Programming";
	char **words = strtow(input);

	if (words == NULL)
	{
		printf("Memory allocation failed.\n");
		return 1;
	}

	for (int i = 0; words[i] != NULL; i++)
	{
		printf("%s\n", words[i]);
		free(words[i])
	}

	free(words);
	return 0;
}

char** strtow(char *str)
{
	int numWords = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			numWords++;
		}
	}
	numWords++; // Account for the last words

	// Allocate memory for the array of strings
	char **words = (char**)malloc((numWords + 1) * sizeof(char*));

	if (words == NULL)
	{
		return NULL; // Memory allocation failed
	}

	// Split the string into words
	char *token = strtok(str, " ");
	int i = 0;

	while (token != NULL)
	{
		words[i] = (char*)malloc(strlen(token) + 1);
		if (words[i] == NULL)
		{
			// Memory allocation for a word failed, free previously allocated memory
			for (int j = 0; j < i; j++)
			{
				free(words[j]);
			}
			free(words);
			return NULL;
		}

		strcpy(words[i], token);
		i++;
		token = strtok(NULL, " ");
	}

	words[i] = NULL; // Null-terminate the array of words
	return words;
}
