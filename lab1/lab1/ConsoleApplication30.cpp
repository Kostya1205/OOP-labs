#include <iostream>
#include "cars.h"

int main()
{
	Cars car= Cars("Mers");
	std::string name;
	int weight;
	std::cout << "Name:";
	getline(std::cin, name);
	std::cout << "Weight:";
	std::cin>>weight;
	car.setName(name);
	car.setWeight(weight);
	std::cout << "Car Name:" << car.getName() << "\nWeight:" << car.getWeight();
}
