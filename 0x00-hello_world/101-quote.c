#include <unistd.h>

/**
 * main - main function
 * Return: exit code
 */
int main(void)
{
	char buf[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-"
		"19\n";

	write(2, buf, (int)sizeof(buf));
	return (1);
}
