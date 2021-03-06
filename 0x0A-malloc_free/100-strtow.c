#include "holberton.h"
#include <stdlib.h>


/**
 * countwords - counts the number of space seperated words in a string
 * @s - the string to check through
 *
 * Return: the number of words in the string
 */
int countwords(char *s)
{
	char last_char = ' ';
	int words = 0;

	while (*s)
	{
		if (last_char == ' ' && *s != ' ')
			words++;
		last_char = *s++;
	}
	return (words);
}

/**
 * find_lengths - finds the length of each word in your string
 * @s: the overall string to look for
 * @num_words: the number of words in this string
 *
 * Return: an array with the length of each respective word in str
 */
int *find_lengths(char *s, int num_words)
{
	int *lengths;
	int current_word_len = 0;
	int index = 0;

	lengths = malloc(sizeof(int) * num_words);
	if (lengths == NULL)
		return (NULL);

	while (*s)
	{
		if (*s == ' ')
		{
			if (current_word_len != 0)
			{
				lengths[index++] = current_word_len;
				current_word_len = 0;
			}
		}
		else
			current_word_len++;
		s++;
	}

	if (index + 1 == num_words)
		lengths[index] = current_word_len;
	return (lengths);
}

/**
 * find_indices - finds the start index of each word in your string
 * @s: the overall string to look for. Will always start with a word.
 * @num_words: the number of words in this string
 *
 * Return: an array with the start index for each respective word in str
 */
int *find_indices(char *s, int num_words)
{
	int *indices;
	char last_char = ' ';
	int index = 0;
	int i;

	indices = malloc(sizeof(int) * num_words);
	if (indices == NULL)
		return (NULL);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (last_char == ' ' && s[i] != ' ')
			indices[index++] = i;
		last_char = s[i];
	}

	return (indices);
}

/**
 * strtow - splits a string into words and returns a pointer to array of words
 * @str: string of words
 *
 * Return: Returns NULL if str == NULL or str == "", or if function fails
 * else, returns a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	int num_words, i, j;
	int *word_lengths;
	int *start_indices;
	char **mem;

	if (str == NULL) /* checks for edge cases */
		return (NULL);
	while (*str == ' ')
		str++;
	if (!(*str))
		return (NULL);
	num_words = countwords(str);
	if (num_words == 0)
		return (NULL);
	word_lengths = find_lengths(str, num_words);
	if (word_lengths == NULL)
		return (NULL);
	start_indices = find_indices(str, num_words);
	if (start_indices == NULL)
	{
		free(word_lengths);
		return (NULL);
	}
	mem = malloc(sizeof(char *) * (num_words + 1));
	if (mem == NULL)
	{
		free(word_lengths);
		free(start_indices);
		return (NULL);
	}
	for (i = 0; i < num_words; i++)
	{
		mem[i] = malloc(sizeof(char) * (word_lengths[i] + 1));
		if (mem[i] == NULL) /* if error */
		{
			for (j = 0; j < i; j++) /* free prev allocated mem */
				free(mem[i]);
			free(mem);
			free(word_lengths);
			free(start_indices);
			return (NULL);
		}
	}
	mem[i] = NULL; /* last element is NULL as per instructions */
	for (i = 0; i < num_words; i++) /* for each word */
	{
		for (j = 0; j < word_lengths[i]; j++)
		{
			mem[i][j] = str[start_indices[i] + j];
		}
		mem[i][j] = '\0';
	}
	free(word_lengths);
	free(start_indices);
	return (mem);
}
