#include<iostream>
#include<string>
using namespace std;
class Date{
private:
	int day;
	int month;
	int year;

public:
	Date(void):day(0),month(0),year(0){

	}
	Date(int day, int month, int year):day(day), month(month), year(year){

	}

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

	friend istream& operator>>(istream &cin, Date &other){
		cout<<"Day"<<endl;
		cin>>other.day;
		cout<<"Month"<<endl;
		cin>>other.month;
		cout<<"Year"<<endl;
		cin>>other.year;
		return cin;
	}

	friend ostream& operator<<(ostream &cout, Date &other){
		cout<<other.day<<"/"<<other.month<<"/"<<other.year<<endl;
		return cout;
	}
};

class Employee{
private:
	int empid;
	float salary;
	string name;
	Date joindate;

public:
	Employee(void){
		this->empid=123;
		this->salary=67000;
		this->name="ajinkya";
		this->joindate.setDay(15);
		this->joindate.setMonth(5);
		this->joindate.setYear(2023);
	}

	/*void setEmpid(const int empid){
		this->empid=empid;
	}

	int getEmpid()const{
		return this->empid;
	}

	void setSalary(const float salary){
		this->salary=salary;
	}

	float getSalary()const{
		return this->salary;
	}

	void setName(const string name){
		this->name=name;
	}

	string getName()const{
		return this->name;
	}*/


		friend istream& operator>>(istream &cin, Employee &other){
			cout<<"Name:  "<<endl;
			cin>>other.name;
			cout<<"Empid:  "<<endl;
			cin>>other.empid;
			cout<<"Salary:  "<<endl;
			cin>>other.salary;
			cout<<"Join Date:  "<<endl;
			cin>>other.joindate;
			return cin;
		}

		friend ostream& operator<<(ostream &cout, Employee &other){
			cout<<other.name<<endl;
			cout<<other.empid<<endl;
			cout<<other.salary<<endl;
			cout<<other.joindate<<endl;
			return cout;
		}
	};

int main(void){
	Date dt;
	/*dt.setDay(15);
	dt.getDay();

	dt.setMonth(5);
	dt.getMonth();

	dt.setYear(2023);
	dt.getYear();*/

	Employee emp;
	/*emp.setName("Ajinkya");
	emp.getName();

	emp.setEmpid(410217);
	emp.getEmpid();

	emp.setSalary(67000);
	emp.getSalary();*/

	cout<<emp;
	cin>>emp;
	cout<<emp;
	cout<<dt;


	return 0;
}
