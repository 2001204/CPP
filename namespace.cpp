#include<cstdio>
/*
namespace na{
	int num1=10;
}
namespace nb{
	int num2=10;
}
int main(){
	printf("Num1 = %d\n", na::num1);
	printf("Num2 = %d\n", nb::num2);
	return 0;
}

*/
int num1=50;

namespace na{
	int num2=20;
}
namespace nb{
	int num3=30;
}

int main(){
	printf("Num1 = %d\n", ::num1);
	printf("Num1 = %d\n", na::num2);
	printf("Num2 = %d\n", nb::num3);
	using namespace na;
	printf("Num1: %d\n", num2);
	using namespace nb;
	printf("Num2: %d",num3);
	return 0;
}
