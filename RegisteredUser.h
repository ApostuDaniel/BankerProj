#ifndef REGISTERED_USER_H
#define REGISTERED_USER_H
#include "Account.h"
#include <string>
#include <vector>


class RegisteredUser {
private:
	std::string userName;
	long long password;
	std::vector<Account> userAccounts;
	long long totalValue;

public:
	RegisteredUser(const std::string& name, const std::string& dataBase);	//for initialization from databse
	RegisteredUser(const std::string& name, long long hash_password);	//initialization at signup
	void countTotalValue();
	Account& operator[](const std::string& accountName);
	Account& operator[](int index);

};



#endif // !REGISTERED_USER_H

