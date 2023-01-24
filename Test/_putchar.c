#include <unistd.h>

/**
  * _putchar - writes to the stdout
  * @c: character to print
  * Reurn: 1 on success, else -1 . errno is set apprioparetely.
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
