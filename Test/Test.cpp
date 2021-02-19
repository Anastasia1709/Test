#include <stdio.h>

char line()
{
	char s;
	char total[255];
	int i = 0;

	printf("Write your line (write line with # at the end to exit): \n");

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
	while (getchar() != '#') {
		total[i] = getchar();
		i++;
	}
	return total[255];
}

int main()
{
	line();
}


