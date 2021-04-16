#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
#include <vector>

class Account
{
private:
	std::string accountName;
	std::string currency;
	std::string details;
	long double moneyAmount;
public:
	Account(const std::string& inputName, const std::string& inputCurrency, const std::string& inputDetails, const long double initAmount);
	void updateCurrency(const std::string& newCurrency);
	const std::string& getName() const;
	const std::string& getCurrency() const;
	const std::string& getDetails() const;
	long double getAmount() const;
	void updateAmount(long double value);
	void printInfo() const;
};

#endif // !ACCOUNT_H

