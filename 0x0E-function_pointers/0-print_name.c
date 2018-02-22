/**
 * print_name - prints a name
 * @name: the name to be printed
 * @f: the function to do the printing
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
