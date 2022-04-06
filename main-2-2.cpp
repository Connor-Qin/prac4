#include <iostream>
#include "person.h"
#include "aircraft.h"
using namespace std;
int main(){
    person person1("connor",100000);
    person person2("jack",99999);
    person person3("kkkkkk",88888);
    aircraft air("Plane111",person1,person2);
    cout << "aircraft details: " <<endl;
    air.printDetails();
    air.setPilot(person3);
    cout << "aircraft details: " <<endl;
    air.printDetails();
    return 0;
}