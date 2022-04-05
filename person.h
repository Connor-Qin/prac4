#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>
using namespace std;
// Class definition for a Panda
class Person
{

public:
    
    Person(string n, int s);
    string name;
    int salary;


    void setName(string myName);  
    string getName();

    void setSalary(int mySalary);      
    int getSalary();

    ~Person();
};
#endif