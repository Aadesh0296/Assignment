#include"interest.h"
#include<cstdio>

/*double GetInterest( Investment& data , interesttype())
	
	return data.GetInterest;*/

int main(void)
{	
/*	bool interesttype()
		if(n == 1)
		{
			return true;
		}
		else (n == 0)
			return false;*/
	
	double amt;
	double p;
	int n;
	Investment i;
	printf("Enter Amount:\n");
	scanf("%lf",&amt);
	printf("Period:\n");
	scanf("%lf", &p);
	printf("Enter 1 for Simple Interest and 0 for Compound Interest\n");
	scanf("%d",&n);
//	bool type = 0;

/*	bool interesttype//()
	{
		if(n == 1)
			{
			return type = true;
			}
		if(n == 0)
		{
			return type = false;
		}
	}
//	Investment SI;*/

	if(n!=0)
	{
	printf("Calculated SI : %.2lf \n", i.GetInterest(n,amt,p));
	}
	else
	{
//	Investment CI;
	printf("Calculated CI : %.2lf \n", i.GetInterest(n,amt,p));
	}
}
