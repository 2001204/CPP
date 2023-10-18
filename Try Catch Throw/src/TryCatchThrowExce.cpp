#include<iostream>
#include<string>
using namespace std;

int main (void){
	try{
		string ex("exception");
		throw ex;

		try{
		}catch (  string &ex ){
			cout<< "Inside nested catch block"<< endl;
		}
	}catch ( string &ex ){
		cout<<"Inside outer catch block"<< endl;

	}catch( ... ){

		cout<<"Inside outer generic catch block"<<endl;

	}
	return 0;

}
