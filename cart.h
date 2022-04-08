#ifndef CART_H
#define CART_H
#include <string>
#include <iostream>
#include "meerkat.h"

using namespace std;


class cart {
    private:
    
    meerkat a1, a2, a3, a4;
    
    int count;
    
    public:
    
    cart();
    
    bool addMeerkat(meerkat cat);
    
    void emptyCart();
    
    void printMeerkats();

~cart();
};
#endif