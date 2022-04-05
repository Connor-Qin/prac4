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
    string m_name;
    int m_age;
    
    void setName(string meerName);   // change the meerkat's name
    string getName();
    
    void setAge(int meerAge);        // change the meerkat's age
    int getAge();
    
    ~meerkat();
};
#endif 