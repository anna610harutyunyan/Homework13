#include <iostream>
#include <string>

class Customer 
{
private:
	std::string unic_indentifier;
	std::string name;
	std::string address;
	std::string nationality;
	std::string contact;
	int age;
	int avarage_income;
	int account_number;
	int credit_obligation;
public:
	Customer(std::string customerunic_indentifier, std::string customername, std::string customernationality,int customercredit_obligation,  int customeraccount_number, std::string customercontact, std::string costomeraddress, int customeravarage_income, int customerage)
	{
		unic_indentifier = customerunic_indentifier;
		name = customername;
		address = costomeraddress;
		nationality = customernationality;
		avarage_income=customeravarage_income;
		account_number = customeraccount_number;
		contact = customercontact;
		age = customerage;
		if (customerage <= 0)
		{
			std::cerr << "Age can't be small or equal to 0!!! Kindly check the details:___";
		}
		credit_obligation = customercredit_obligation;

	}

	bool is_accountholder(int account_number)
	{
		return account_number !=0;
	}
	bool provide_credit(int  credit_obligation, int avarage_incom, int loan_perioud)// if income is grather than minimum consumer basket we can give gim new loan

	{
		if (avarage_income - (credit_obligation / loan_perioud) > 53.000)
			return true;
	}

	~Customer()
	{
		std::cout << "Destructor is called:_";
	}

};


int main(int argc, char** argv)
{
	

	return 0;
}