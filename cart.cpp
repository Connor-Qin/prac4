#include <iostream>
#include <string>
#include "cart.h"
#include "meerkat.h"
#include "meerkat.cpp"
using namespace std;

cart::cart(){
    count =0;
}

bool cart::addMeerkat(meerkat cat){

    if(count>=4){
        return false;
    }
    this->listMeerkat[count]=cat;
    count++;
    return true;
}

void cart::emptyCart(){
    count=0;
}

void cart::printMeerkats(){
    for(int i=0;i<count;i++){
        cout<< "meerkat name is "<<this->listMeerkat[i].getName()
        << " age is " << this->listMeerkat[i].getAge() << endl;
    }
}

cart::~cart()
{
}
