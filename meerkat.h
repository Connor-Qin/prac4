#ifndef MEERKAT_H
#define MEERKAT_H
#include <string>
#include <iostream>
using namespace std;
// Class definition for a Panda
class Meerkat
{

public:
    Meerkat();
    string name;
    int age;

    void setName(string meerName);   // change the meerkat's name
    string getName();

    void setAge(int meerAge);        // change the meerkat's age
    int getAge();

    ~Meerkat();
};
#endif