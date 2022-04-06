#include <iostream>
#include "aircraft.h"
#include "person.h"
using namespace std;
aircraft::aircraft(string callsign, person thePilot, person theCoPilot){
    this->callsign = callsign;
    this->thePilot = thePilot;
    this->theCoPilot =theCoPilot;
}


    void aircraft::setPilot(person thePilot){
        this->thePilot = thePilot;
    }
    person aircraft:: getPilot(){
        return thePilot;
        
    }
    
    void aircraft::setCoPilot(person theCoPilot){
        this->theCoPilot =theCoPilot;
    }
    person aircraft::getCoPilot(){
        return thePilot;
    }
    void printDetails(){
         cout << "call sign: " << callsign <<endl;
         cout << "the pilot: " << thePilot.getName() <<endl;
         cout << "the co-pilot: " << theCoPilot.getName() <<endl;
     }

aircraft::~aircraft()
{
}