#include "patient.h"
#include <iostream>
#include<string>
using namespace std;
double GetHospitalExp(const Patient& data)
{
	return data.Amount();
}

int main(void)
{
	int id, days, bed;
	string name;
	printf("Enter your name\n");
	cin>>name;
	printf("Enter Patient Id\n: ");
	scanf("%d",&id);
	printf("Enter Bed Type 1/2/3:\n ");
	scanf("%d", &bed);
	printf("No. of days admitted:\n");
	scanf("%d",&days);
	cout<<"Hello!! " <<name<<endl;
	printf("Patient ID: %d \n",id);

	Patient a;
	a.Resize(bed,days);
	printf("Total Billing Amount = %.2lf\n", GetHospitalExp(a));

	InHousePatient b;
	b.Resize(bed,days);
	printf("Total Billing with Discount= %.2lf\n", GetHospitalExp(b));
	
	GST c;
	c.Resize(bed,days);
	printf("Total Bill with GST=  %.2lf \n", GetHospitalExp(c));

	printf("Thank you !! Stay Healthy\n");
}
