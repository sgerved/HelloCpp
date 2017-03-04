#include <string>
#include <vector>
#include "WeightEntry.h"

class Person
{
private:
    std::string name;
    std::vector<WeightEntry> weightLog;
public:
    Person();
    Person(std::string nameStr);
	void addWeightLog(WeightEntry weightEntry) { weightLog.push_back(weightEntry); };
    std::string getWeights();
};
