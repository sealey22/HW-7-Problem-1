#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

/* user defined function identifier */
void seconds(int, int &, int &, int &);

int main() {

  int secs;
  int mins;
  int hours;
  int second;

  /* cout << " Enter number of seconds: ";
   cin >> secs;
   cout << " Enter number of minutes: ";
   cin >> mins;
   cout << " Enter number of hours: ";
   cin >> hours; */
  double sec;
  cout << "enter number of seconds: ";
  cin >> sec;

  seconds(hours, mins, secs, second);

  cout << hours << endl;
  cout << secs << endl;
  cout << mins << endl;
  cout << second << endl;

  return 0;
}

/* user defined function */
void seconds(int hours, int mins, int secs, int second) {

  int time;

  time = (seconds % 3600);

  hours = seconds / 60;

  mins = time / 60;

  secs = time % 60;

  time = sec;
};