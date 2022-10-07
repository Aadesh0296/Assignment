#include <cstdio>

class Money
{
public:
	Money(int rs, int ps)
	{
		rupees = rs + ps / 100;
		paise = ps % 100;
		#ifdef TESTING
		puts("Interval instance initialized");
		#endif
	}

	//copy constructor
	Money(const Money& amount)
	{
		rupees = amount.rupees;
		paise = amount.paise;
		#ifdef TESTING
		puts("Interval instance copy initialized");
		#endif
	}
	
	int Currency() const
	{
		return 100 * rupees + paise;
	}

	void Print() const
	{
	//	if (rupees < 0 && paise < 0)
		
	//	else if (paise < 0)

	//	printf("%d rupees %d paise\n", -rupees, -paise);
		
		
	//	else 

		printf("%d rupees %d paise\n", rupees, paise);
	}

	//overloading addition(+) operator
	Money operator+(const Money& rhs) const
	{
		return Money(rupees + rhs.rupees, paise + rhs.paise);
	}
	
	//overloading subtraction(-) operator
	Money operator-(const Money& rhs) const
	{
		if (Currency() > rhs.Currency())
		{
			return Money(rupees - rhs.rupees, paise - rhs.paise);
		}
		else
		{

		 return Money(rhs.rupees - rupees, rhs.paise - paise);
		}

	/*	if (Money(rupees < rhs.rupees))
		{
		else if (Money(paise < rhs.paise))
		{
		 return Money(rhs.rupees - rupees, rhs.paise - paise);
		}
		}
	 	 else*/
		//	return Money(rupees - rhs.rupees, paise - rhs.paise);


//			return Money(rhs.rupees - rupees, paise - rhs.paise);
	}
	

	~Money()
	{
		#ifdef TESTING
		puts("Interval instance finalized");
		#endif
	}
private:
	int rupees;
	int paise;
};

