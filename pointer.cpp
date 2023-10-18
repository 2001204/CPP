#include<cstdio>

int main( void )
{

	int num1=10;
	//const int *ptr= &num1;
	int *ptr= &num1;
	int num2= 20;
	//num1=30;
	ptr= &num2;

	printf("Address of Num1 : %p\n ",&num1);
	printf("Address of Num2 : %p\n ",&num2);

	printf("Number1 : %d\n ",num1);
	//printf("Number : %d\n",*ptr);

	printf("Number2 : %d\n ",num2);
	printf("Number stored in pointer : %d\n",*ptr);
	printf("Address of pointer: %d\n",&ptr);
	return 0;

}
