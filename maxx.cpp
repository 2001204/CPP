#include<stdio.h>

int main( void )
{
	int fno=5;
	int sno=6;
	int *ptr =&fno;
	int *qtr=&sno;
	if(*ptr > *qtr)
	{
		printf("fno is greater %d", fno);

	}
	else
		printf("sno is greater %d", sno);

	return 0;
}
