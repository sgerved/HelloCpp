#include <string>
#include <vector>

class Attack
{
private:
    std::string ipAddress;
    std::string type;
    std::vector<std::string> logs;
public:
    Attack();
    std::vector<std::string> getLogs() { return logs; }
    void addAttack(std::string ip, std::string type);
};
