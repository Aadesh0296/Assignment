#include<cmath>

class Investment 
{

public:
	Investment()
	{
		amount;
		period;
 	}
	
	void setamount()
	{
		this -> amount = amount;
	}
	double getamount()
	{
		return amount;
	}
	void setperiod()
	{
		this -> period = period;
	}
	double getperiod()
	{
		return period;
	}
	double Interestrate()
	{
		double rate = 0;
		if(amount < 10000)
			rate = 8.0;
		if(amount > 10000 && amount < 50000)
			rate = 9.0;
		if(amount > 50000)
			rate = 10.0;
		if(period > 5)
			rate = 1.0;
		return rate;
	}
	double GetInterest(int n, double amount, double period)
	{
		double interest = 0;
		double newamount = 0;
		double rate = Interestrate();
		if(n!=0)
		{
			interest = (amount * period * rate)/100;
		}
		else
		{
			newamount = amount * pow(( 1+ rate/100),period);
			interest = newamount - amount;
		}
			return interest;


	}


private:

	double amount;
	int period;	

	};
