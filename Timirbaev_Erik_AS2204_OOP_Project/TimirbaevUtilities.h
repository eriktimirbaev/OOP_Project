#pragma once
#include <iostream>
#include <string>


inline bool IntCheck(std::string input) {
	for (int i = 0; i < input.length(); i++) {
		if (isdigit((unsigned char)input[i])) continue;
		else return false;
	}
	if (input.length() == 0) return false;
	return true;
}

inline int GetCorrectNumber(int min, int max) {
	std::string num;
	while ((std::getline(std::cin, num)).fail() || IntCheck(num) == false || stoi(num) < min || stoi(num) > max) {
		std::cout << "¬ведите номер от " << min << " до " << max << ": ";
	}
	return stoi(num);
}