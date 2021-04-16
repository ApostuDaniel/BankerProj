#ifndef CURRENCY_H
#define CURRENCY_H
#include <string>
#include <map>
//values of currency in gold grams
namespace currency{

	inline const std::map< std::string, double> goldTable = { {"USD", 57.14}, {"CAD", 71.45}, 
			{"CHF", 52.55}, {"EUR", 47.70}, {"GBP", 41.34}, {"JPY", 6216.77}, {"MDL", 1024.64}, {"RON", 235.03} };
}
#endif // !CURRENCY_H

