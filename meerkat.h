#ifndef MEERKAT_H
#define MEERKAT_H
#include <string>
#include <iostream>
using namespace std;
class meerkat
{
    string name;
    int age;

public:
    meerkat();

    void setName(string meerName);   // change the meerkat's name
    string getName();

    void setAge(int meerAge);        // change the meerkat's age
    int getAge();

    ~Meerkat();
};
#endif