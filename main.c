#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main ()
{
	unsigned short a[10], i, j, re;
	srand (time(NULL));
	printf ("Array: \n");
	for (i=0; i<10; i++)
	{
		a[i]=rand()%10;
		printf ("%2d", a[i]);
	}
	printf ("\nNon-repeating elements of array:\n");
	for (i=0; i<10; i++)
	{
		re=1;
		for (j=0; j<10; j++)
		if (a[i]==a[j] && i!=j)
		{
			re=0;
			break;
		}
		if (re==1) printf ("%2d", a[i]);
	}
	return 0;
}