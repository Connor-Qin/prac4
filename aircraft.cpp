#include <iostream>
#include "aircraft.h"
#include "person.h"
using namespace std;

aircraft::aircraft (string callsign, person thePilot, person theCoPilot)
{

    a_callsign = callsign;
    a_thePilot = thePilot;
    a_theCoPilot = theCoPilot;

}

void aircraft::setPilot(person thePilot){
    a_thePilot = thePilot;
}
person aircraft:: getPilot(){
    return a_thePilot;

}

void aircraft::setCoPilot(person theCoPilot){
    a_theCoPilot =theCoPilot;
}
person aircraft::getCoPilot(){
    return a_theCoPilot;
}
void printDetails(){

    cout << "the pilot: " << person.getName() <<" and Salary is " << person.getSalary()<<endl;
    cout << "the co-pilot: " << person.getName() << " and Salary is " << person.getSalary()<<endl;
}

aircraft::~aircraft()
{
}