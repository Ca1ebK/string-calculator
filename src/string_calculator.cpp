#include "string_calculator.hpp"
 
using namespace std;
 
int string_calculator(string str) {
	int sum{0};

	for (size_t i = 0; i < str.size(); i++) {
		if (str[i] != ';' && str[i] != ',') {
			sum += static_cast<int>(str[i] - '0');
		}
	}
	return sum;	
}
