#include "Account.h"
#include "RegisteredUser.h"
#include "Currency.h"
#include <iostream>

int main()
{
    RegisteredUser dan{ "Apostu Daniel", 123312213 };
    dan.addAccount("reifeissen", "RON", "Reiffeisen bank account", 1700.52);
    dan.printInfo();
    dan["reifeissen"].updateCurrency("EUR");
    dan.addAccount("bcr", "EUR", "BCR bank account", 1700.52);
    dan.printInfo();

}

