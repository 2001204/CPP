#include"Employee.h"
using namespace nemployee;
int main( void ){
	Employee emp;	//Here class Employee is instantiated and name of the instance is emp.

	emp.acceptRecord( );	//acceptRecord() function is called  on object emp;

	emp.printRecord( );		//printRecord() function is called  on object emp;

	return 0;
}
