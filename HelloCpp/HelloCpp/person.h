#include <string>
#include <vector>

class Person
{
private:
    std::string name;
    std::vector<int> weightLog;
public:
    Person();
    Person(std::string nameStr);
    void addWeightLog(int weight);
    std::string getWeights();
};
