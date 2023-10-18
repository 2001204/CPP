#include<iostream>
#include<string>
using namespace std;

class ArithmeticException{
private:
	string message;
	int lineNumber;
	string functionName;
	string fileName;
public:
	ArithmeticException( string message, int lineNumber, string functionName, string fileName)
	: message( message ), lineNumber( lineNumber ), functionName( functionName), fileName( fileName ){

	}
	void printStackTrace(){
		cout<< this->message<< " in " << this->fileName<<":"<<this->functionName <<" at line no."<< this-> lineNumber<<endl;
	}
};

void accept_record( int &number){
	cout<<"Number : ";
	cin>> number;
}

int calculate( int num1, int num2){
	if (( num2 == 0 )||(num1 == 0))
		throw ArithmeticException("Divide by Zero Exception", __LINE__, __FUNCTION__ , __FILE__ );
	int result = num1 / num2;
	return result;
}

void print_record(int &result){
	cout<<" Result : "<< result<<endl;
}

int main( void ){
	try{
		int num1;
		accept_record( num1 );

		int num2;
		accept_record( num2 );

		int result = calculate( num1, num2 );
		print_record( result );
	}catch( ArithmeticException &ex){
		ex.printStackTrace();
	}
	return 0;
}

int main1( void ){
	int linenumber = __LINE__;
	cout<< linenumber <<endl;
	string str =__FUNCTION__;
	cout<< str <<endl;
	string str1 = __FILE__;
	cout<< str1 <<endl;
	string str2 = __DATE__;
	cout<< str2 <<endl;
	string str3 = __TIME__;
	cout<< str3 <<endl;
	return 0;
}







