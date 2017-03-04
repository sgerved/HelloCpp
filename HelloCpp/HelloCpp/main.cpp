#include "stdafx.h"
#include <iostream>
#include "attack.h"
#include "person.h"

using namespace std;

/**
 * Comment out the argc and argv, so we don't get
 * any compiler warnings.
 * @brief main
 * @return
 */
int main(int /*argc*/, char /**argv[]*/)
{
    Person person("Mismis");
    person.addWeightLog(WeightEntry(90, "04-03-3017"));
    person.addWeightLog(WeightEntry(92, "04-02-3017"));
    person.addWeightLog(WeightEntry(94, "04-01-3017"));
    cout << person.getWeights() << endl;

	// Press Enter to exit message, so we can se the output
	cout << "Press Enter to exit" << endl;
	getchar();
    return 0;
}

/*
* Old code for keeping :)
*/

void oldCodeFOrKeeping()
{
	cout << "Init Attack log" << endl;
	Attack attack;
	attack.addAttack("127.0.0.1", "Dos");
	attack.addAttack("192.168.1.1", "?");
	for (auto log : attack.getLogs())
	{
		cout << log << endl;
	}
	cout << "End";
}
