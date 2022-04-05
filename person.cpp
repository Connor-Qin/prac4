#include <iostream>

using namespace std;
class Person
{
    private:
    string name;
    int salary;

    public:
    Person(string n,int s){
        name =n;
        salary =s;
    }
    void setName(string myName){
        name = myName;
    }
    string getName(){
        return name;
    }

    void setSalary(int mySalary)
    {
        salary = mySalary;
    }

    int getSalary()
    {
        return salary;
    }
};

