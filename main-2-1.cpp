#include <iostream>
#include <stdlib.h>

#include "meerkat.h"

#include "cart.h"
using namespace std;
int main(int argc, char const *argv[]){

    meerkat a1,a2,a3,a4,a5;
    a1.setName("111");
    a1.setAge(11);
    a2.setName("222");
    a2.setAge(22);
    a3.setName("333");
    a3.setAge(33);
    a4.setName("444");
    a4.setAge(44);
    a5.setName("555");
    a5.setAge(55);
    cart aa;
    meerkat M[5] = {a1,a2,a3,a4,a5};

    for(int i=0; i<5;i++){
        if(aa.addMeerkat(M[i])==false){
            cout<<"the cart is full"<< endl;
        }
    }
    aa.printMeerkats();
    return 0;
}