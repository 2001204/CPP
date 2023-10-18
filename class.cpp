#include<iostream>
using namespace std;
class Employee{
private:
	char name[32];	//32 Bytes
	int empid;		//4 Bytes
	float salary;	//4 Bytes
public:
	void acceptRecord( ){
		cout << "Name	:	";
		cin >> name;
		cout << "Empid	:	";
		cin >> empid;
		cout << "Salary	:	";
		cin >> salary;
	}
	void printRecord( ){
		cout << "Name	:	" << name <<endl;
		cout << "Empid	:	" << empid <<endl;
		cout << "Salary	:	" << salary <<endl;
	}
};
int main( void ){
	Employee emp1;
	Employee emp2;
	Employee emp3;


	emp2.acceptRecord();
	cout << sizeof( emp1 ) <<"	"<< &emp1 << endl;
	cout << sizeof( emp2 ) <<"	"<< &emp2 << endl;
	cout << sizeof( emp3 ) <<"	"<< &emp3 << endl;

	return 0;
}
