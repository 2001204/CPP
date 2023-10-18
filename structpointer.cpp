#include<cstdio>
//Global Structure
struct Employee{
	char name[ 30 ];
	int empid;
	float salary;
};
//Global function
void accept_record( struct Employee *const ptr )
{	
    printf("Name	:	");
	scanf("%s", ptr->name );
	printf("Empid	:	");
	scanf("%d", &ptr->empid );
	printf("Salary	:	");
	scanf("%f", &ptr->salary );
}
//Global function
void print_record( struct Employee *const ptr )
{
	printf("Name	:	%s\n", ptr->name);
	printf("Empid	:	%d\n", ptr->empid);
	printf("Salary	:	%f\n", ptr->salary);
}
//Global function
int main( void )
{	//Calling function
	struct Employee Emp;          //    *ptr = &num1

	printf("Using global structure pointer");
	
	accept_record( &Emp );   //&emp  paramer

	print_record( &Emp );

	return 0;
}