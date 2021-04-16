#include "Account.h"
#include "RegisteredUser.h"
#include "Currency.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>

RegisteredUser::RegisteredUser(const std::string& name, const std::string& dataBase)
{
	//opens database, gets info from databse and initializes the object, closes database
}

RegisteredUser::RegisteredUser(const std::string& name, long long hash_password) : userName{name}, password(hash_password)
{
	userAccounts.clear();
}

RegisteredUser::~RegisteredUser()
{
	//updates the database at the end of the working session

	for (auto it : userAccounts)
	{
		delete it;
	}
	userAccounts.clear();
}
void RegisteredUser::countTotalValue()
{
	totalValue.clear();
	for (auto acc : userAccounts)
	{
		totalValue[acc->getCurrency()] += acc->getAmount();
	}
}

long double RegisteredUser::getTotalValue(const std::string& currency) const
{
	return totalValue.at(currency);
}

Account& RegisteredUser::operator[](const std::string& accountName)
{
	for (auto account : userAccounts)
	{
		if (accountName == account->getName()) return *account;
	}
	throw("No account with this name");
}

Account& RegisteredUser::operator[](int index)
{
	if (index < 0 || index >= userAccounts.size()) throw("Invalid index");
	return *userAccounts[index];
}


const std::string& RegisteredUser::getName() const
{
	return userName;
}
void RegisteredUser::addAccount(const std::string& inputName, const std::string& inputCurrency, const std::string& inputDetails, const long double initAmount)
{
	userAccounts.push_back(new Account(inputName, inputCurrency, inputDetails, initAmount));
	countTotalValue();
}

void RegisteredUser::printInfo()
{
	std::cout << userName <<" :    " <<  password << '\n';
	for (auto it : userAccounts)
	{
		it->printInfo();
	}
	this->countTotalValue();
	for (auto map_it : totalValue)
	{
		std::cout << map_it.second << " " << map_it.first << '\n';
	}
}
