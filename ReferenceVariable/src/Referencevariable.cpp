#include<iostream>
using namespace std;

class Test{
private:
	char &ch;
public:
	Test( char &ch2 ) : ch( ch2 ){

	}
};
int main( void ){
	char ch1 = 'A';
	Test t( ch1 );
	size_t size = sizeof( t );
	cout << "Size	:	" << size << endl;
	return 0;
}


int main5( void ){
	int arr1[ 3 ] = { 10, 20,30};
	int (&arr2)[3] = arr1;     // arr2 is reference variable arr1
	for(int index= 0; index < 3; ++ index)
		cout<<"arr[index]"<<arr2[ index ]<< endl;
	return 0;
}

int main4(){
	int num1=10;
	int &num2= num1;       //Reference variable num2 of num1
	int &num3= num2;       //Reference variable num3 of num2

	++ num1;	//11
	++ num2;	//12
	++ num3;	//13


	cout<<"Number 1 :"<<num1 <<" "<<&num1<<endl;
	cout<<"Number 2 :"<<num2 <<" "<<&num2 <<endl;
	cout<<"Number 3 :"<<num3 <<" "<<&num3 <<endl;
	return 0;
}

int main3(){
	int num1=10;
	int &num2= num1;       //Reference variablenum2 of num1
	cout<<"Number 1 :"<<num1 <<" "<<&num1<<endl;
	cout<<"Number 2 :"<<num2 <<" "<<&num2 <<endl;
	return 0;
}


int main2(){
	int num1=10;
	int num2= num1;
	cout<<"Number 1"<<num1 <<" "<<&num1<<endl;
	cout<<"Number 2"<<num2 <<" "<<&num2 <<endl;
	return 0;

}

int main1(){
	int num1=10;
	int *num2= &num1;
	cout<<"Number 1"<<num1 <<" "<<&num1<<endl;
	cout<<"Number 2"<<num2 <<" "<<&num2 <<endl;
	return 0;
}

/*
#include<iostream>
using namespace std;

void print( int number ){
	cout<<"int	:	"<<number<<endl;
}
void print( int &number ){
	cout<<"int&	:	"<<number<<endl;
}
int main( void ){
	print( 10 );	//int	:	10

	int value = 10;
	//print( value );	//error: call to 'print' is ambiguous
	return 0;
}    */
