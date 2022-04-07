#ifndef CART_H
#define CART_H
#include <string>
#include <iostream>
#include "meerkat.h"

using namespace std;

class cart{
    private:

    meerkat listMeerkat[4];

    int count;
    
    public:
    cart();
    bool addMeerkat(meerkat cat);
    void emptyCart();               // remove all meerkats from the cart
    void printMeerkats();           // print the name, a space, the age, then a new line
                                // for each meerkat in the order they were added
    ~cart();
};
#endif