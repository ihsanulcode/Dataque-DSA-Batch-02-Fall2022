#include "team.h"

Team::Team()
{
}

Team::Team(string name, string initial, int numberOfGoals)
{
    this->name = name;
    this->initial = initial;
    this->numberOfGoals = numberOfGoals;
}
bool Team::operator>(Team t)
{
    if (numberOfGoals > t.numberOfGoals)
        return true;
    else
        return false;
}

bool Team::operator<(Team t)
{
    if (numberOfGoals < t.numberOfGoals)

        return true;
    else
        return false;
}
bool Team::operator>=(Team t)
{
    if (numberOfGoals >= t.numberOfGoals)
        return true;
    else
        return false;
}

bool Team::operator<=(Team t)
{
    if (numberOfGoals <= t.numberOfGoals)
        return true;
    else
        return false;
}
bool Team::operator==(Team t)
{
    if (numberOfGoals == t.numberOfGoals)
        return true;
    else
        return false;
}

bool Team::operator!=(Team t)
{
    if (numberOfGoals != t.numberOfGoals)
        return true;
    else
        return false;
}
ostream &operator<<(ostream &os, Team &t)
{
    os << t.name << ", " << t.initial << ", " << t.numberOfGoals;
    return os;
}
