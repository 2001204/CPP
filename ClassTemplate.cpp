#include<iostream>
#include<string>
using namespace std;

template<class T>
class Array{
private:
	int size;
	T *arr;
public:
	Array( void  ){
		this->size = 0;
		this->arr = nullptr;
	}
	Array( int size  ){
		this->size = size;
		this->arr = new T[ this->size ];
	}
	Array( const Array &other){
		this->size = other.size;
		this->arr = new T[ this->size ];
		for( int index = 0; index < this->size; ++ index )
			this->arr[ index ] = other.arr[ index ];
	}
	//const Array &other = a1
	//Array* const this = &a2
	Array& operator=( const Array &other ){
		this->~Array( );
		this->size = other.size;
		this->arr = new T[ this->size ];
		for( int index = 0; index < this->size; ++ index )
			this->arr[ index ] = other.arr[ index ];
		return(*this);
	}
	//Array *const this
	T& operator[ ]( int index ){
		return this->arr[ index ];
	}

	~Array( void ){
		if( this->arr != nullptr ){
			delete[] this->arr;
		}
		this->arr = nullptr;
	}
	friend istream& operator>>( istream &cin, Array<T> &other ){
		for( int index = 0; index < other.size; ++ index ){
			cout<<"Enter element	:	";
			cin >> other.arr[ index ];
		}
		return cin;
	}
	friend ostream& operator<<( ostream &cout, Array<T> &other ){
		for( int index = 0; index < other.size; ++ index ){
			cout << other.arr[ index ] <<endl;
		}
		return cout;
	}
};
int main( void ){
	Array<string> a1( 3 );

	cin >> a1;

	cout << a1;
	return 0;
}
int main2( void ){
	Array<double> a1( 3 );

	cin >> a1;

	cout << a1;
	return 0;
}
int main1( void ){
	Array<int> a1( 3 );

	cin >> a1;

	cout << a1;
	return 0;
}
