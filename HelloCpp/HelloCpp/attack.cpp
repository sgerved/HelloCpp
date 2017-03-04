#include "stdafx.h"
#include "attack.h"

using namespace std;

Attack::Attack()
{
}

void Attack::addAttack(string ip, string type)
{
    string log = "";
    log += "Attack type:\n";
    log += type + "\n";
    log += "From ip address:\n";
    log += ip + "\n";
    log += "-----------------------";
    logs.push_back(log);
}
