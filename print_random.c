#include <stdio.h>
#include <stdlib.h>
#include <time.h>




int main()
{
	int a;
	

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
	for(a=0;a<7;a++)
	putchar( randchar(a) );
	putchar('\n');

	return(0);
}
