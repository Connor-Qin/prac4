#ifndef CART_H
#define CART_H
#include <string>
#include <iostream>
#include "meerkat.h"

using namespace std;

class cart{
    
    
    public:
    cart();
    meerkat meerkat1,meerkat2,meerkat3,meerkat4,meerkat5;
    int count;
    bool addMeerkat(meerkat cat); 
    void emptyCart();               // remove all meerkats from the cart
    void printMeerkats();           // print the name, a space, the age, then a new line
                                // for each meerkat in the order they were added
    ~cart();
};
#endif