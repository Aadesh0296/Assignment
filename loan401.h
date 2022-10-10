#include<cstdio>

class Loan
{
public:
	virtual float GetRate() = 0;

/*	double GetEMI(double p, float n)
	{
		principle = p;
		period = n;
		float r = GetRate();
	}*/
	
	void Setprinciple(double principle)
	{
		this -> principle = principle;
	}
	
	double Getprinciple()
	{
		return principle;
	}

	void Setperiod(float period)
	{
		this -> period = period;
	}
	
	double Getperiod()
	{
		return period;
	}


	double GetEMI()
	{
		double emi = 0;
		float rate = GetRate();
		emi = principle * (1 + (rate * period)/100)/(12 * period);
		
		return emi;
	}

private: 
	double principle;
	float period;


};

class PersonalLoan : public Loan

{

public: 
	PersonalLoan()
	{
		this -> principle = principle;
	}

	float GetRate()
	{
		float rate = 0;
	 double amount=Loan::Getprinciple();
		
		rate = amount <= 500000 ? 0.15:0.16;

		return rate;

	}


private: 
	float rate;
	double principle;
};


class HomeLoan : public Loan

{

public: 
	HomeLoan()
	{
		this -> principle = principle;
	}
	float GetRate()
	{
		float rate = 0;

	 double amount=Loan::Getprinciple();
		
			rate = amount <= 2000000 ? 0.10:0.11;

		return rate;
	}

private: 
	float rate;
	double principle;
};



