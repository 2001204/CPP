#include<iostream>
#include<string>
using namespace std;
class Person{
public:
	string name;
	int age;
public:
	Person( void ){
		cout<< "Person (void)"<< endl;
		this->name= "";
		this->age=0;
	}
	Person( string name, int age){
		cout<<"Person( string name, int age)"<<endl;
		this->name = name;
		this->age = age;
	}
	void showrecord( void ){
		cout<< "Name : "<< this->name << endl;
		cout<< "Age : "<< this->age << endl;
	}
	~Person( void ){
		cout << "~person( void )" << endl;
	}
};

class Employee: public Person{
private:
	int empid;
	float salary;
public:
	Employee( void ){
	//	cout<<" Employee( void )"<< endl;
		this->empid = 0;
		this->salary = 0;
	}
	Employee( int empid, float salary ){
		cout<<" Employee( int empid, float salary )"<< endl;
		this->empid = empid;
		this->salary = salary;
	}

	Employee( string name, int age, int empid, float salary ): Person (name, age){
			cout<<" Employee( string name, int age, int empid, float salary )"<< endl;
			this->name = name;
			this->age = age;
			this->empid = empid;
			this->salary = salary;
	}
	void printrecord( void ){
		this->showrecord();
		cout<< "Emp ID : "<< this->empid<< endl;
		cout<< "Salary : "<< this->salary<< endl;

	}
	~Employee( void ){
		cout<< "~Employee( void )"<< endl;

	}
};

int main( void ){
	Employee e( "Dipak", 22, 1234, 50000.00f);
	//e.showrecord();
	e.printrecord();
	cout<<"___------__--__----__________-----__"<<endl;
	return 0;
}


int main4( void ){
	Person p( "Dipak", 22 );    //paramerized constructor call
	p.showrecord();

	return 0;
}

int main3( void ){
	Employee e;
	Person *ptr = new Person();    //dynamic memory allocation with constuctor
	cout<<"_______________________"<< endl;
	delete ptr;
	return 0;
}

int main2( void ){
	Employee e;
	e.showrecord();
	e.printrecord();
	return 0;
}

int main1( void ){
	Person p;                     //check size of objects
	cout<< sizeof( p )<< endl;

	Employee e;
	cout<< sizeof( e )<< endl;
	return 0;
}








