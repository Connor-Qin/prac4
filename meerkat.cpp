#include <iostream>
#include "meerkat.h"
using namespace std;
Meerkat::Meerkat(){

}


        void Meerkat::setName(string meerName){
            name = meerName;
        }
        string Meerkat::getName(){
            return name;
        }

        void Meerkat::setAge(int meerAge)
        {
            age = meerAge;
        }

        int Meerkat::getAge()
        {
            return age;
        }


Meerkat::~Meerkat()
{
}
