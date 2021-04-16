#ifndef REGISTERED_USER_H
#define REGISTERED_USER_H
#include "Account.h"
#include <string>
#include <vector>
#include <map>


class RegisteredUser {
private:
	std::string userName;
	long long password;
	std::vector<Account*> userAccounts;
	std::map<std::string, long double> totalValue;

public:
	RegisteredUser(const std::string& name, const std::string& dataBase);	//for initialization from databse
	RegisteredUser(const std::string& name, long long hash_password);	//initialization at signup
	~RegisteredUser();	// going to use this to update the database at the end of the working session
	void countTotalValue();
	long double getTotalValue(const std::string& currency) const;
	Account& operator[](const std::string& accountName);
	Account& operator[](int index);
	const std::string& getName() const;
	void addAccount(const std::string& inputName, const std::string& inputCurrency, const std::string& inputDetails, const long double initAmount);
	void printInfo();
};



#endif // !REGISTERED_USER_H

