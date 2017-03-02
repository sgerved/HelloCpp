#include <iostream>
#include "classes/attack.h"
#include "classes/person.h"

using namespace std;

/**
 * Comment out the argc and argv, so we don't get
 * any compiler warnings.
 * @brief main
 * @return
 */
int main(int /*argc*/, char /**argv[]*/)
{
    cout << "Init Attack" << endl;
    Attack attack;
    attack.addAttack("127.0.0.1", "Dos");
    attack.addAttack("192.168.1.1", "?");
    for(auto log :  attack.getLogs())
    {
        cout << log << endl;
    }
    cout << "End";

    Person person("Mismis");
    person.addWeightLog(123);
    person.addWeightLog(456);
    person.addWeightLog(789);
    cout << person.getWeights() << endl;
    return 0;
}
