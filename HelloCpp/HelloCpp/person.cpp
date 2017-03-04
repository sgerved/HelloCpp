#include "stdafx.h"
#include "person.h"
#include <iostream>

using namespace std;

Person::Person()
{}

Person::Person(string nameStr) : name(nameStr)
{}

string Person::getWeights()
{
    string output = "";
    for(WeightEntry weight : weightLog)
    {
		output += "Weight: " + to_string(weight.getWeight()) + ", date: " + weight.getDate() + "\n";
    }
    return output;
}
