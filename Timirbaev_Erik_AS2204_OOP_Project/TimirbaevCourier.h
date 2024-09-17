#pragma once
#include <iostream>
#include <fstream>
#include <string>

class TimirbaevCourier
{
private:
	int id;
	std::string firstname;
	std::string surname;
	int age;
	std::string phone;

public:
	static int MaxId;

	TimirbaevCourier() {
		id = ++MaxId;
		//std::cout << "������ �����������." << std::endl;
	}

	friend std::istream& operator >> (std::istream& cin, TimirbaevCourier& courier);
	friend std::ostream& operator << (std::ostream& cout, TimirbaevCourier& courier);
	friend std::ifstream& operator >> (std::ifstream& fin, TimirbaevCourier& courier);
	friend std::ofstream& operator << (std::ofstream& fout, TimirbaevCourier& courier);

	~TimirbaevCourier() {
		//std::cout << "������ ����������." << std::endl;
	}
};