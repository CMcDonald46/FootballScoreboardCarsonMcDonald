// Carson McDonald
// Dr. T
// COSC-1437
// Prog. Assignement 4
// Football_Scoreboard
// This program will allow the user to enter the information of two teams and will display the information to the screen in the format of a scoreboard.
#include <iostream>

using namespace std;

// Class for Team (objects).
class Team
{
private:
  string name;
  string coach_name;
  string home_city;
  bool home_status;
  int score;
  int timeouts;
public:
  Team() // Default Constructor.
{
  name = "";
  coach_name = "";
  home_city = "";
  home_status = false;
  score = 0;
  timeouts = 0;
}
// Setters or Mutators.
  void setName(string n){name = n;}
  void setCoach_Name(string c){coach_name = c;}
  void setHome_City(string h){home_city = h;}
  void setHome_Status(bool hs){home_status = hs;}
  void setScore(int s){score = s;}
  void setTimeouts(int t){timeouts = t;}
// Getters or Accessors.
  string getName() const {return name;}
  string getCoach_Name() const {return coach_name;}
  string getHome_City() const {return home_city;}
  bool getHome_Status() const {return home_status;}
  int getScore() const {return score;}
  int getTimeouts() const {return timeouts;}
};


int main() 
{
  
}