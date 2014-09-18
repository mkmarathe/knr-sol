// pgm to copy ip to op replacing each string one more blanks by a single blank

#include <stdio.h>


int main ()
{
	int	c; 
	int last_space=0;

	while ((c = getchar()) != EOF) {
		if (c == ' ')  {
			if (last_space !=1)
				putchar(c);
			last_space = 1;
			continue;
		}
		last_space = 0;
		putchar(c);
	}
}
