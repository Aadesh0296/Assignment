#include "loan401.h"
#include<cstdio>

int main(void)

{
	double p;
	float n;
	int i;
	printf("Enter Principle Amount:\n");
	scanf("%lf", &p);
	printf("Period:\n");
	scanf("%f", &n);

//	Loan a;

//	a.Setprinciple(p);
//	a.Setperiod(n);
	
	printf("Which type of loan you want:\n 1) Personal Loan \n 2) Home Loan\n");
	scanf("%d", &i);

	if(i == 1)
	{	

	PersonalLoan x;
	x.Setprinciple(p);
	x.Setperiod(n);
	printf("EMI for Personal Loan: %.2lf \n", x.GetEMI());
	}
	else
	{
	HomeLoan y;

	y.Setprinciple(p);
	y.Setperiod(n);
	printf("EMI for Home Loan: %.2lf \n", y.GetEMI());
	}
}
