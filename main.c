#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
	int n, i;
	printf ("Enter the size of array: \n");
	scanf ("%d", &n);
	int a[n];
	srand (time(0));
	for (i = 0; i < n; i++)
	{
		a[i] = rand()%10;
		printf ("%2d", a[i]);
	}
	int count = 0;
	while (count < n)
	{
		int re = 0;
		for (i = 0; i < n; i++)
		{
			if ((a[count] == a[i]) && (count != i))
			re = 1;
			printf ("\n a[count] = %d, a[i] = %d, re = %d \n", a[count], a[i], re);
		}
		printf ("(re = %d)-> \n", re);
		if ((a[count] == a[i]) && (count == i))
		re = 0;
		printf ("%2d \n", a[count]);
		count++;
	}
	printf ("\nNon-repeating elements of array: \n");
	for (i = 0; i < n; i++);
    if ((a[count] == a[i]) && (count == i))
	printf ("%2d", a[i]);	
	return 0;
}