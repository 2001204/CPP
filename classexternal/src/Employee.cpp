#include<cstdio>
#include"Employee.h"

void Employee::acceptRecord( void ){	//Member function
	printf("Name	:	");
	fflush(stdout);
	scanf("%s", name );
	printf("\nEmpid	:	");
	fflush(stdout);
	scanf("%d", &empid );
	printf("\nSalary	:	");
	fflush(stdout);
	scanf("%f", &salary );
}

void Employee::printRecord( void ){	//Member function
	printf("\nName	:	%s\n", name);
	printf("Empid	:	%d\n", empid);
	printf("Salary	:	%f\n", salary);
}
