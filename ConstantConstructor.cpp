#include<iostream>
using namespace std;


class Test{
private:
	int num1;
	int num2;
	mutable int count;
public:
	Test(void): num1( 0 ), num2( 0 ), count( 0 ){
	this->num1=this->num1+10;
	this->num2=this->num2+20;
	}
	void showRecord(/*Test *const this = &t1*/){
		this->num1=this->num1+5;
		cout<<"Num1 : "<<this->num1<<endl;
		cout<<"Num2 : "<<this->num2<<endl;
	}

	void printRecord(/*const Test *const  = &t1*/){
		//this->num1 = this->num1 + 5;	//Not OK
		cout << "Num1	:	" << this->num1 << endl;

		//this->num2 = this->num2 + 5;	//Not OK
		cout << "Num2	:	" << this->num2 << endl;

		this-> count = this->count + 1;
		cout << "Count	:	" << this->count << endl;
	}
};
int main( void ){
	Test t1;
	t1.showRecord();	//OK
	t1.printRecord( );	//OK

	const Test t2;
	//t2.showRecord );	//Not OK
	t2.printRecord( );	//OK

	Test t3;
	t3.showRecord();	//OK
	t3.printRecord( );	//OK
	return 0;
}

int main2( void ){
	Test t1;
	t1.showRecord( );
	t1.printRecord( );
	return 0;
}

int main1( void ){
	Test t1;
	int num1= 10;
	int *const ptr1 = &num1;
	//*ptr = 50;
	cout<< "Num : "<<num1<< endl;
	cout<< "Num : "<<*ptr1<< endl;

	const int num2 =20;
	const int *const ptr2 = &num2;

	cout<< "Num : "<< num2<< endl;
	cout<< "Num : "<< *ptr2<< endl;
}
