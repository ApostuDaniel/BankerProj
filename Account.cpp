#include "Account.h"
#include "Currency.h"
#include <iostream>
#include <string>
#include <vector>

Account::Account(const std::string& inputName, const std::string& inputCurrency, const std::string& inputDetails, const long double initAmount) :
	accountName{ inputName }, currency{ inputCurrency }, details{ inputDetails }, moneyAmount{ initAmount }
{
}

void Account::updateCurrency(const std::string& newCurrency) 
{
	moneyAmount = moneyAmount * currency::goldTable.at(newCurrency) / currency::goldTable.at(currency);
	currency = newCurrency;
}

const std::string& Account::getName() const
{
	return accountName;
}

const std::string& Account::getCurrency() const
{
	return currency;
}

const std::string& Account::getDetails() const
{
	return details;
}

long double Account::getAmount() const
{
	return moneyAmount;
}

void Account::updateAmount(long double value)
{
	moneyAmount += value;
}

void Account::printInfo() const{
	std::cout << accountName << '\n' << details << '\n' << moneyAmount << " " << currency << '\n';
	
}