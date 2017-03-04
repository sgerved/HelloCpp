#pragma once
#include <string>

class WeightEntry
{
private:
	int weight;
	std::string date;
public:
	WeightEntry();
	WeightEntry(int weightOfDate, std::string dateOfWeight);
	int getWeight() { return weight; };
	std::string getDate() { return date; };
};