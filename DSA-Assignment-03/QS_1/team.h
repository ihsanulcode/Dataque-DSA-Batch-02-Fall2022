#ifndef TEAM_H
#define TEAM_H
#include <iostream>
using namespace std;

class Team{
     public:
     string name;
     string initial;
     int numberOfGoals;
     Team();
     Team(string,string,int);
     bool operator < (Team);
     bool operator > (Team);
     bool operator <= (Team);
     bool operator >= (Team);
     bool operator == (Team);
     bool operator != (Team);
     friend ostream &operator<<(ostream &, Team &);
};

#endif // TEAM_H
