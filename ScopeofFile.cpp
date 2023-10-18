#include<cstdio>

int num1 = 10;

//File Scope
namespace na{
	int num2 = 20;

	//Namespace scope
	namespace nb{	//Nested namespace
		int num3 = 30;
	}
}

int main( void ){
	printf("Num1	:	%d\n", ::num1);	//20
	printf("Num2	:	%d\n", na::num2);	//20
	printf("Num3	:	%d\n", na::nb::num3);	//30
	return 0;
}
