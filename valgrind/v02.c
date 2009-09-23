#include <stdlib.h>

int main()
{
	char *x = malloc(10);
	x[10] = 'l';
	return 0;
}

