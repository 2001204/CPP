
#include"../include/ArithmeticException"
using namespace exception;

#include"../include/Calculator"

int util:: calculate(int num1,int num2)throw( ArithmeticException ){
	if( num2 == 0 )
		throw ArithmeticException("Divide by zero exception", __LINE__, __FUNCTION__, __FILE__ );
		  return num1 / num2;
}
