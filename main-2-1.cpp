#include <iostream>
#include <stdlib.h>
#include <string>
#include "meerkat.h"
#include "cart.h"

using namespace std;


int main()

{
    cart cart;
    meerkat a1,a2,a3,a4,a5;
    meerkat meer[5]={a1,a2,a3,a4,a5};
    a1.setName("a1");
    a1.setAge(10);

    a2.setName("a2");
    a2.setAge(11);

    a3.setName("a3");
    a3.setAge(30);

    a4.setName("a4");
    a4.setAge(12);

    a5.setName("a5");
    a5.setAge(50);


    for (int i = 0; i < 5; i++){

        if (cart.addMeerkat(meer[i])==false){

            cout << "Cart is full" <<endl;
        }
    }

    cart.printMeerkats();

  return 0;

}