#ifndef AIRCRAFT_H
#define AIRCRAFT_H
#include <string>
#include "person.h"
#include <iostream>
using namespace std;

class aircraft{

    private:
    string a_callsign;
    person a_thePilot;
    person a_theCoPilot;
    public:
    aircraft(string callsign, person thePilot,person theCoPilot);
    void setPilot(person thePilot);      // change the pilot
    person getPilot();
    void setCoPilot(person theCoPilot);  // change the co-pilot
    person getCoPilot();
    void printDetails(); // print the callsign, a new line, the pilot name,


    ~aircraft();
};
#endif