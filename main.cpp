#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

/* user defined function identifier */
/* ' & ' represents somthing being used in two different places */
void time(int&, int&, int&, int);

int main() {

  int secs = 0;
  int mins;
  int hours;
  int seconds;

  /* cout << " Enter number of seconds: ";
   cin >> secs;
   cout << " Enter number of minutes: ";
   cin >> mins;
   cout << " Enter number of hours: ";
   cin >> hours; */
  cout << "enter number of seconds wating to be converted: ";
  cin >> secs;

   time(hours, mins, seconds, secs); 
/*
  cout << "Hours: " << hours << endl;

  cout << "Minutes: " << mins << endl;
  cout << "Seconds: " << seconds << endl;} */

  return 0;
}

/* user defined function */
void time(int &hours, int &mins, int &seconds, int secs) {

  int total;

  total = (secs % 3600); 
  cout << total << endl; 

  hours = secs / 3600;
  cout << " Hours: " << hours << endl;

  mins = total / 60;
  cout << " Minutes: " << mins << endl;

  secs = total % 60;
  cout << " Seconds: " << secs <<  endl;
 
  }