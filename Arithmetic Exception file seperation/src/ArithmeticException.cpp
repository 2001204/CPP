
#include"../include/ArithmeticException"
using namespace exception;

ArithmeticException::ArithmeticException( string message, int lineNumber, string functionName, string fileName)
: message( message ), lineNumber( lineNumber), functionName(functionName), fileName( fileName ){
}

string ArithmeticException::getMessage( void )const{
		return this->message;
}
int ArithmeticException ::getLineNumber( void )const{
		return this->lineNumber;
}
string ArithmeticException::getFunctionName( void )const{
		return this->functionName;
}
string ArithmeticException::getFileName( void )const{
		return this-> fileName;
}
