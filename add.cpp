#include<iostream>
using namespace std;

int main()
{
	//adding integers no.
	int a,b,c;
	cout<<"enter the two numbers: ";
	cin>>a>>b;
	c= a+b;
	cout<<"addition is: "<<c;

	// Adding binary numbers
	int b1 = 0b1010;
	int b2 = 0b1101;
	int bSum = b1 + b2;
    cout << "\nSum of binary numbers: "<<bSum<<endl;

	// Adding characters (concatenation)
	char char1 = 'H';
	char char2 = 'i';
	string concatenated = string(1, char1) + string(1, char2);
	cout << "Concatenated characters: " << concatenated << endl;

	return 0;

}
