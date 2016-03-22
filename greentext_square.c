#include <stdio.h>
#include <string.h>
void wordPlay();
int main (int argc, char **argv)
{
	if (argc < 2) 
	{
		printf("This program turns your word into a nice greentext square.\nusage: %s [words]\n", argv[0]);
		return 0;
	}
	int i = 1;
	for (i; i < argc; i++)
	{
		wordPlay(argv[i]);
	}
	return 0;
}
void wordPlay(char *word)
{
	int i = 0, x = 0, wordlength = 0, repeat = 0, a = 0, t = 0;
	wordlength = strlen(word);
	repeat = wordlength - 2;
	for (i; i < wordlength; i++)
	{
		a = 0;
		t = 1;
		if ( i == 0)
			printf(">%s\n", word);
		else
		{
			printf(">%c", word[i]);
			if (i == wordlength - 1)
			{
				for (t; t < wordlength; t++)
				{
					printf("%c", word[wordlength - (t + 1)]);
				}
				printf("\n");
			}
			else
			{
				for (a; a < repeat; a++)
					printf(" ");
				printf("%c\n", word[wordlength - (i + 1)]);
			}
		}
	}
}
