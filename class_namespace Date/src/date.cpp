#include<iostream>
using namespace std;
#include"date.h"
using namespace calender;

void date::acceptrecord(){
		cout<<"Enter the day";
		cin>>day;
		cout<<"Enter the month";
		cin>>month;
		cout<<"Enter the day";
		cin>>year;
}
void date::printrecord(){
		cout<<"The date is: " ;
		cout<<day<<"/"<<month<<"/"<<year;
}

void date::validatedate(){
		if ((day == 31) && (month == 2) || (month == 4) || (month == 9) || (month == 11))
			cout<<"Wrong date";
		else if ((month == 2) && (day == 30) || (day == 31))
			cout<<"Wrong date";
		else if ((month == 2) && (day == 29) && (year%4 != 0) && (year%100 == 0))
			cout<<"Wrong date";
		else
			cout<<"\nRight date";

			//((month == 2) && (day == 29) && (year%400 == 0) && (year%4 == 0));
}

void date::adddays(){
	int count, m;
	 cin>>count;
	 cout<<"\n new date=";
	 int m2[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	 int i,k=0,p,a;
	 for(i=0;i<m2;i++)
	  k=k+m2[i];
	 k=k+day+count;
	 cout<<"\n new date=";
	 if(k<=365)
	 {
	  for(i=0;i<13;i++)
	  {
	   p=k-m2[i];
	   if(p<=m2[i+1])
	   {
	    a=i+1;
	    break;
	   }
	   else
	    k=p;
	  }
	  cout<<p<<"/"<<a<<"/"<<year;
	 }
	 else
	 {
	  k=k-365;
	   for(i=0;i<13;i++)
	    {
	     p=k-m2[i];
	     if(p<=m2[i+1])
	     {
	       a=i+1;
	       break;
	     }
	     else
	      k=p;
	    }
	  cout<<p<<"/"<<a<<"/"<<year+1;
	 }

}

/*
bool date::validatedate(){
		if ((day == 31) && (month == 2) || (month == 4) || (month == 9) || (month == 11))
			return false;
		if ((month == 2) && (day == 30) || (day == 31))
			return false;
		if ((month == 2) && (day == 29) && (year%4 != 0) && (year%100 == 0))
			return false;
		if ((month == 2) && (day == 29) && (year%400 == 0) && (year%4 == 0))
			return true;
}
*/
