#include <stdio.h>

char line()
{
	char s;
	int i = 0;

	printf("Write your line (write # at the end to exit): \n");

	while ((s = getchar()) != '#') {
		if (s == ' ' || s == '\t')
			++i;
		else if (s != ' ' || s != '\t') {
				if (i != 0) 
					printf("  "); 
				putchar(s);
				i = 0;
		}
	}
	return 0;
}

int main()
{
	line();
}


