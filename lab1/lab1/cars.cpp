#include "cars.h"

void Cars::setName(std::string carName) {
	Cars::nameOfCar = carName;
}

std::string Cars::getName()
{
	return Cars::nameOfCar;
}

void Cars::setWeight(int carWeight) {
	Cars::weightOfCar = carWeight;
}

int Cars::getWeight()
{
	return Cars::weightOfCar;
}
