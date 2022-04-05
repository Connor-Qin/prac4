#include <iostream>
#include "Meerkat.h"
using namespace std;
Meerkat::Meerkat()
{
    m_name = " ";
    m_age = 0;
};

void Meerkat::setName(string meerName){
    m_name = meerName;
}
string Meerkat::getName(){
    return m_name;
}

void Meerkat::setAge(int age)
{
    m_age = age;
}

int Meerkat::getAge(int age)
{
    return m_age;
}

Meerkat::~Meerkat()
{
}