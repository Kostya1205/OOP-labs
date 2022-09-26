#pragma once
#include <string> 
#include <iostream> 

 

class Cars {
public:
	Cars(std::string nameOfCar, int weightOfCar) {
		this->nameOfCar = nameOfCar;
		this->weightOfCar = weightOfCar;
	}
	Cars(std::string nameOfCar) {
		this->nameOfCar = nameOfCar;
		weightOfCar = 1500;
	}
	Cars() {
		nameOfCar = "Mers";
		weightOfCar = 155;
	}
	~Cars() {
	std::cout << "Destuctor is work!";
	}
	void setName(std::string);
	std::string getName();
	void setWeight(int);
	int getWeight();

private:
	std::string nameOfCar;
	int weightOfCar;
};