class Patient
{
public:
	Patient()
	{
		noofdays = 0;
		bedtype = 0;
	}

	bool Resize(int b, int d)
	{
		if(b > 0 && d > 0) 
		{
			bedtype = b;
			noofdays = d;
			return true;
		}
		return false;
	}
		
		
	/*	switch(bedtype)
		{
			case 1:
			price = 500;
			break;

			case 2:
			price = 350;
			break;

			default:
			price = 200;
		}

		if(bedtype == 1)
		price = 500;
	
		if(bedtype == 2)
		price = 350;
		
		if(bedtype == 3)
		price = 200;
		return price;*/

	virtual double Amount() const 
	{
		double price = 0;

		if(bedtype == 1)
		price = 500;
	
		if(bedtype == 2)
		price = 350;
		
		if(bedtype == 3)
			price = 200;

		return noofdays * price;
	}
	
/*	double Amount() const
	{
		return noofdays * price;
	}*/
private:
	int bedtype;
	int noofdays;

};

//InHousePatient is a subclass derived from Patient which is called base class
class InHousePatient : public Patient
{
public:
	InHousePatient(float d = 0.05) : Patient()
	{
		Discount = d;
	}
	


	double Amount() const
	{
		float Amount = Patient::Amount();
		{
		if(Amount > 5000)
		{
		return Patient::Amount() - 0.05 * Amount;
		}
		else 
			return Amount;
		}
	}
	
private:
	float Discount;
};

class GST : public InHousePatient 
{
	public:
		GST( float g = 0.05) : InHousePatient()
		{
			tax = g;
		}

		double Amount() const
		{
			float Amount = InHousePatient::Amount();
			{
				return InHousePatient::Amount() + tax * Amount;
			}
		}
	private:
		float tax;
};
