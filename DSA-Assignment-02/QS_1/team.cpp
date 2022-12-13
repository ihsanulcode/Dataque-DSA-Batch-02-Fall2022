#include "team.h"

Team::Team()
{
}

Team::Team(string name, string country, int numberOfGoals)
{
    this->name = name;
    this->country = country;
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
    os << t.name << ", " << t.country << ", " << t.numberOfGoals;
    return os;
}
