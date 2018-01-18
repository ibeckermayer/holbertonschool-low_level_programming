#include <unistd.h>

/**
 * main - main function
 * Return: exit code
 */
int main(void)
{
	char b[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

<<<<<<< HEAD
	write(2, b, (int)(sizeof(b)-1));
=======
	write(2, b, sizeof(b)-1);
>>>>>>> 3e1fd6758a70412679b10db172811c088e1e2bdb
	return (1);
}
