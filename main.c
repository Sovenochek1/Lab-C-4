#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){

{
	int n, i;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	int a[n];
	srand(time(0));
	for(i=0; i<n; i++){
		a[i]=rand()%10;
		printf("%2d", a[i]);
	}

        printf("\nNon-repeating elements of array: \n");
	int count = 0;
	while (count < n){
		int re = 0;
		for (i=0;i < n;i++)
		{ 
if (a[count] == a [i]) re==1;
}

if (re==0) printf ("%2d", &a[i]);
count++; 
}
	}
	return 0;
}