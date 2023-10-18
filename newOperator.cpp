#include<iostream>
#include<new>
using namespace std;




//for 2D array
int main( void ){
	int **ptr =new int*[ 2 ];
	for (int index =0; index < 2; ++ index )
		ptr[ index ]= new int[ 3 ];
	void acceptrecord( void );
	for( int row =0; row <2; ++ row){
		for( int col = 0; col < 3; ++ col){
			cout<< "Enter element : ";
			cin>> ptr[ row ][ col ];
		   }
    	}

	void printrecord( void );
	for( int row =0; row <2; ++ row){
		for( int col = 0; col < 3; ++ col){
			cout<<ptr[ row ][ col ]<<"  ";
			}
		cout<<endl;
		    }


	for (int index = 0; index <2; ++ index){
		delete[ ] ptr [ index ];
	delete[] ptr;
	ptr = nullptr;
	}
	return 0;
}

int main5(){
	try{
			int count = -3;
			int *ptr =new int[ count  ];
			//cout<<"count :" <<count;      if positive value given then remove comment
		}catch( bad_alloc &ex ){
			cout << ex.what( ) <<endl;

		}

		return 0;
}
/*
int main4(){
	int *ptr =new int;

	*ptr =123;
	cout<< *ptr<< endl;
	delete ptr;
	return 0;
}

int main3( void ){
	int *ptr1 = new int;
	int *ptr1 = new int( );
	int *ptr1 = new int( 4 );
	int *ptr1 = new int[ 3 ];
return 0;

}

int main2(){

	int *ptr = new int[ 3 ];
	ptr[0]= 10;
	ptr[1]= 20;
	ptr[2]= 30;
	for ( int index = 0; index < 3; ++ index){
		cout<< " Value : "<< index <<endl;
		cout<<ptr[ index ]<<endl;
	}
		delete [] ptr;
	ptr = nullptr;
	return 0;
}


int main1( void ){
	int *ptr=new int;  //dynamic memory allocatiom

	*ptr= 10;     //dereferencing

	cout<< " Value : "<<*ptr<<endl;

	delete ptr;   //dynamic memory deallocation

	ptr=nullptr;

	return 0;
}
*/
