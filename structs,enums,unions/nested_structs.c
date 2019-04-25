#include<stdio.h>

struct Addr{
	int houseno;
	char area[26];
	char city[26];
	char state[26];
};

struct Emp
{
	int empno;
	char name[26];
	char desig[26];
	Addr address;
	float basic;
} worker;

int main(){
	struct Emp emp;
	printf("\nPlease enter empno\n");
	scanf(emp.empno);
	printf("\nPlease enter name\n");
	scanf(emp.name);
	printf("\nPlease enter desig\n");
	scanf(emp.desig);
	return 0;
}