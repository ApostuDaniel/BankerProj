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
	long long moneyAmount;
public:
	Account(const std::string& inputName, const std::string& inputCurrency, const std::string& inputDetails, const long long initAmount);
	void updateCurrency(std::string newCurrency);
	const std::string& getName() const;
	const std::string& getCurrency() const;
	const std::string& getDetails() const;
	long long getAmount() const;
	void updateAmount(long long value);
};

#endif // !ACCOUNT_H

