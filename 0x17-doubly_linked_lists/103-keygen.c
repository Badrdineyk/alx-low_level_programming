#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints passwords for the crackme5.
 * @argc: Number of arguments.
 * @argv: Array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char *codex;
	char password[7];
	int len = strlen(argv[1]), index, t;

	codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	t = (len ^ 59) & 63;
	password[0] = codex[t];

	t = 0;
	for (index = 0; index < len; index++)
		t += argv[1][index];
	password[1] = codex[(t ^ 79) & 63];

	t = 1;
	for (index = 0; index < len; index++)
		t *= argv[1][index];
	password[2] = codex[(t ^ 85) & 63];

	t = 0;
	for (index = 0; index < len; index++)
	{
		if (argv[1][index] > t)
			t = argv[1][index];
	}
	srand(t ^ 14);
	password[3] = codex[rand() & 63];

	t = 0;
	for (index = 0; index < len; index++)
		t += (argv[1][index] * argv[1][index]);
	password[4] = codex[(t ^ 239) & 63];

	for (index = 0; index < argv[1][0]; index++)
		t = rand();
	password[5] = codex[(t ^ 229) & 63];

	password[6] = '\0';
	printf("%s", password);
	return (0);
}
