#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>
using namespace std;
// Class definition for a Panda
class person
{
    string name;
    int salary;
public:
    
    person(string n, int s);
    void setName(string myName);  
    string getName();

    void setSalary(int mySalary);      
    int getSalary();

    ~person();
};
#endif