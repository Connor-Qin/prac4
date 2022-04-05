#include <iostream>
#include "person.h"
using namespace std;
Person::Person(string n, int s){
    name = n;
    salary =s;
}


    void Person::setName(string myName){
        name = myName;
    }
    string Person::getName(){
        return name;
    }

    void Person::setSalary(int mySalary)
    {
        salary = mySalary;
    }

    int Person::getSalary()
    {
        return salary;
    }

Person::~Person()
{
}