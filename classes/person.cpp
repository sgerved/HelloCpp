#include "classes/person.h"
#include <iostream>

using namespace std;

Person::Person() {}

Person::Person(string nameStr) : name(nameStr)
{
}

void Person::addWeightLog(int weight)
{
    weightLog.push_back(weight);
    cout << "Weight added: " << weight << endl;
}

string Person::getWeights()
{
    string output = "";
    for(int weight :  weightLog)
    {
        output += weight + ",\n";
    }
    return output;
}
