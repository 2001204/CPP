#include<cstdio>
#include<cstdlib>

#include"Employee.h"
using namespace nemployee;
void Employee::acceptRecord( void ){	//Member function
	printf("Name	:	");
	fflush(stdout);
	scanf("%s", name );
	printf("Empid	:	");
	fflush(stdout);
	scanf("%d", &empid );
	printf("Salary	:	");
	fflush(stdout);
	scanf("%f", &salary );
}

void Employee::printRecord( void ){	//Member function
	printf("Name	:	%s\n", name);
	printf("Empid	:	%d\n", empid);
	printf("Salary	:	%f\n", salary);
}
