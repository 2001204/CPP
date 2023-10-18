#include<cstdio>

struct employee{
	char name[20];
	int empid;
	float salary;
};

void accept_record(struct employee *ptr)
{
	printf("enter employee Name:\n");
	scanf("%s", ptr->name);

	printf("\nenter employee ID");
	scanf("%d", &ptr->empid);

	printf("\nenter employee Salary:");
	scanf("%f", &ptr->salary);

}

void print_record(struct employee *ptr){

	printf("Employee Name: %s\n", ptr->name);
	printf("Employee ID: %d\n", ptr->empid);
	printf("Employee Salary: %.3f\n", ptr->salary);
}


int main(void)
{
	struct employee e;
	//fflush(stdin);
	//printf("Enter employee Details:\n");
	accept_record(&e);

	//printf("\nEmployee Details:\n");
	print_record(&e);

    return 0;
}


