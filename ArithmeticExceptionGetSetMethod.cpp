#include<iostream>
#include<string>
using namespace std;
class ArithmeticException{
private:
  const string message;
  const int lineNumber;
  const string functionName;
  const string fileName;
public:
  ArithmeticException( string message, int lineNumber, string functionName, string fileName );

  string getMessage( void )const;

  int getLineNumber( void )const;

  string getFunctionName( void )const;

  string getFileName( void )const;

};

ArithmeticException::ArithmeticException( string message, int lineNumber, string functionName, string fileName )
: message( message ), lineNumber( lineNumber ), functionName( functionName ), fileName( fileName ){
}
string ArithmeticException::getMessage( void )const{
  return this->message;
}
int ArithmeticException::getLineNumber( void )const{
  return this->lineNumber;
}
string ArithmeticException::getFunctionName( void )const{
  return this->functionName;
}
string ArithmeticException::getFileName( void )const{
  return this->fileName;
}

void accept_record( int &number ){
  cout << "Number	:	";
  cin >> number;
}
int calculate( int num1, int num2 ){
  if( num2 == 0 )
	throw ArithmeticException("Divide by zero exception", __LINE__, __FUNCTION__, __FILE__ );
  return num1 / num2;
}
void print_record( int &result ){
  cout << "Result	:	" << result << endl;
}
int main( void ){
  try{
	int num1;
	accept_record( num1 );

	int num2;
	accept_record( num2 );

	int result = calculate( num1, num2 );
	print_record( result );

  }catch( ArithmeticException &ex ){
	  cout << ex.getMessage( ) <<endl;
  }
  return 0;
}
