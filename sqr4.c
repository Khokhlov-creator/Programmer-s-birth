#include <stdio.h>

int main()
{
	int i;
	int a[10];
	for(i=0; i<10; i++)
				a[i]=1;
	for(i=1; i<9; i++)
				a[i]=a[i-1]+a[i]+a[i+1];
	for(i=1; i<9; i++)
				a[i]=a[i-1]+a[i];
	for(i=0; i<9; i++)
				print("%d ", a[i]);
	return 0;	
}
