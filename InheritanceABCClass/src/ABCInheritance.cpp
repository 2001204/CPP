#include<iostream>
using namespace std;
class A{
private:
	int num1;
public:
	A( void ){
	cout<<"A( void )"<<endl;
	this->num1= 10;
	}
	A(int num1){
		cout<<"A(int num1)"<<endl;
		this->num1 = num1;
	}
	void printrecord(){
	cout<<"num1 : "<<this->num1<<endl;
	}
	~A( void ){
		cout<<"~A(void)"<<endl;
	}
};

class B : public A{
private:
	int num2;
public:
	B( void ){
	cout<<"B( void )"<<endl;
	this->num2= 20;
	}
	B(int num2){
		cout<<"B(int num2)"<<endl;
		this->num2= num2;
	}
	B(int num1, int num2): A (num1){
		cout<<"B(int num1, int num2)"<<endl;
		this->num2 = num2;
		}
	void printrecord(){
		A ::printrecord();
		///scout<<"num1 : "<<this->num1<<endl;
		cout<<"num2 : "<<this->num2<<endl;
	}
	~B( void ){
		cout<<"~B(void)"<<endl;
	}
};

class C : public A{
private:
	int num3;
public:
	C( void ){
	cout<<"C( void )"<<endl;
	this->num3= 30;
	}
	C(int num3){
		cout<<"C(int num3)"<<endl;
		this->num3= num3;
	}
	C(int num1, int num3): A(num1){
		cout<<"C(int num1, int num3)"<<endl;
		this->num3= num3;
		}
	void printrecord(){
		A::printrecord();
		//cout<<"num1 : "<<this->num1<<endl;
		cout<<"num3 : "<<this->num3<<endl;
	}
	~C( void ){
		cout<<"~C(void)"<<endl;
	}
};

class D : public B, C{
private:
	int num4;
public:
	D( void ){
	cout<<"D( void )"<<endl;
	this->num4= 40;
	}
	D(int num4){
		cout<<"D(int num4)"<<endl;
		this->num4= num4;
	}
	D(int num1, int num2, int num3, int num4):B( num1, num2), C( num1, num3){
		cout<<"D(int num1, int num2, int num3, int num4)"<<endl;
		this->num4= num4;
		}

	void printrecord(){
		B::printrecord();
		C::printrecord();
		cout<<"num4 : "<<this->num4<<endl;
	}
	~D( void ){
		cout<<"~D(void)"<<endl;
	}
};


int main( void ){
	///A a(10);
	///a.printrecord();
	//B b(20);
	//b.printrecord();
	//C c(30);
	//c.printrecord();
	D d1(100,200,300,400);
    d1.printrecord();
	//D d;
    //cout << sizeof( d ) << endl;   //size A=4, B= 8,C= 8, D=20
	cout<<"-------------"<<endl;
    return 0;
}








