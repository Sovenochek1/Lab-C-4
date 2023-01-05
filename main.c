#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main ()
{
	int n, i, j, re;
	printf ("Enter the size of array: ");
	scanf ("%d", &n);
	int a[n];
	srand(time(NULL));
	for (i=0; i<n; i++)
	{
		a[i]=rand()%10;
		printf ("%2d", a[i]);
	}
	printf ("\nNon-epeating elements of array:\n");
	for (i=0; i<n; i++)
	{
		re=1;
		for (j=0; j<n; j++)
		if (a[i]==a[j] && i!=j)
		{
			re=0;
			break;
		}
		if (re==1) printf ("%2d", a[i]);
	}
	return 0;
}