#include <iostream>
#include <string>
#include "meerkat.h"
#include "meerkat.cpp"
#include "cart.h"
using namespace std;

cart::cart(){
    count =4;
}

bool cart::addMeerkat(meerkat cat){
    if(count<1){
        return false;
    }

    switch(count){
        case 4:
            meerkat1 = cat;
            count--;
            return true;
            break;
        case 3:
            meerkat2 = cat;
            count--;
            return true;
            break;
        case 2:
            meerkat3 = cat;
            count--;
            return true;
            break;
        case 1:
            meerkat4 = cat;
            count--;
            return true;
            break;
    }
    return true;
}

void cart::emptyCart(){
    count =4;
}

void cart::printMeerkats(){
    if(count ==0){
        cout<< meerkat1.getName() << " "<<meerkat1.getAge()<<endl;
        cout<< meerkat2.getName() << " "<<meerkat2.getAge()<<endl;
        cout<< meerkat3.getName() << " "<<meerkat3.getAge()<<endl;
        cout<< meerkat4.getName() << " "<<meerkat4.getAge()<<endl;
    }
    if(count ==1){
        cout<< meerkat1.getName() << " "<<meerkat1.getAge()<<endl;
        cout<< meerkat2.getName() << " "<<meerkat2.getAge()<<endl;
        cout<< meerkat3.getName() << " "<<meerkat3.getAge()<<endl;
    }
    if(count ==2){
        cout<< meerkat1.getName() << " "<<meerkat1.getAge()<<endl;
        cout<< meerkat2.getName() << " "<<meerkat2.getAge()<<endl;
    }
    if(count ==3){
        cout<< meerkat1.getName() << " "<<meerkat1.getAge()<<endl;

    }


}


cart::~cart()
{
}
