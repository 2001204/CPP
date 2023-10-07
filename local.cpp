#include<cstdio>


/*
int sum( int num1, int num2 ); //global Function Declaration: OK
int main( void )    //local function declaration
{
	int add;
	add=sum(40,20); //Function Call
	printf("Addition=%d",add);
	return 0;
}
int sum( int num1, int num2 ){ //Called Function
	int result = num1 + num2;
	return result;
}
*/

/*
int main1( void )    //local function declaration
{
	//Calling Function
	int add;
	int sum( int num1, int num2 ); //Local Function Declaration: OK
	add=sum(10,20); //Function Call
	printf("Addition=%d",add);
	return 0;
}
int sum( int num1, int num2 ){ //Called Function
	int result = num1 + num2;
	return result;
}
*/


//Treated as declaration as well as definition
int sum( int num1, int num2 )
{ //Called Function
int result = num1 + num2;
return result;
}
int main( void ){//Calling Function
int add;
add= sum( 10, 20 ); //Function Call
printf("Addition=%d",add);
return 0;
}
