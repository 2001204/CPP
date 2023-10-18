#include<iostream>
#include<string>
using namespace std;

class Date{
private:
	int day;
	int month;
	int year;
public:
	Date( void ){            //parameterless constructor
	 	this->day=0;
		this->month=0;
	    this->year=0;
	}
	/* Date( void ): day( 0 ), month( 0 ), year( 0 ){
	   }
	 */
	Date( int day, int month, int year){    //parameterized constructor
		this->day = day;
		this->month = month;
		this->year = year;
	}
	/* Date( int day, int month, int year ): day( day ), month( month ), year( year ){
		}
	*/

	void setDay(const int day){
			this->day=day;
		}

		int getDay()const{
			return this->day;
		}

		void setMonth(const int month){
			this->month=month;
		}

		int getMonth()const{
			return this->month;
		}

		void setYear(const int year){
			this->year=year;
		}

		int getYear()const{
			return this->year;
		}
	friend istream& operator>>( istream &cin, Date &other){
		cout<< " Day : ";
		cin>> other.day;
		cout<< " Empl id : ";
		cin>> other.day;
		cout<< " year : ";
		cin>> other.year;
		return cin;
	}
	friend ostream& operator<<( ostream &cout, Date &other){
		cout<< other.day<< "/"<<other.month<<"/"<<other.year;
		return cout;
	}
};


class Employee{
private:
	string name;
	int empid;
	float salary;
	Date joindate;        //association in hierarchy
	// object of one class defined as member function in another class --> association
public:
	Employee( void ): name( 0 ), empid( 0 ), salary ( 0 ){      //joindate( 0 )

	}
	Employee(string name, int empid, float salary, Date joindate  ): name( name ), empid( empid ), salary ( salary ), joindate( joindate ){

	}
	string getname(void){
		return this->name;
	}
	void setname(string name){
		this->name = name;
	}
	int getempid(void){
		return this->empid;
	}
	void setempid(int empid){
		this->empid = empid;
	}
	float getsalary(void){
		return this->salary;
	}
	void setsalary(float salary){
		this->salary = salary;
	}
	Date getjoindate(void){
		return this->joindate;
	}
	void setjoindate( Date joindate){
			this->joindate = joindate;
	}

	friend istream& operator>>( istream &cin, Employee &other){
		cout <<"Name : ";
		cin >> other.name ;
		cout <<"EmpID : ";
		cin >> other.empid ;
		cout<<"salary : ";
		cin>> other.salary ;
		cout<<" joindate : ";
		cin>> other.joindate ;
		return cin;
	}
	friend ostream& operator<<( ostream &cout, Employee &other){
		cout<<"Name : "<< other.name << endl;
		cout<<"Empl ID : "<< other.empid<< endl;
		cout<<"Salary : "<< other.salary<< endl;
		cout<<"Joining Date : "<< other.joindate<< endl;
		return cout;
	}

};

int main( void ){
	Date dt( 01, 10, 1998);
	Employee Emp;
	cin>>Emp;   //operator( cin , Emp )
	cout<<Emp;   //operator( cout , Emp)
	return 0;
}








