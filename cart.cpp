#include <iostream>

#include "meerkat.h"
#include "cart.h"

using namespace std;

cart::cart(){

    count=4;

}

bool cart::addMeerkat(meerkat cat){

    if(count < 1){ // determine the count is whether less than 1

       return false;
    }

    switch(count){ // Determine what the count is
       case 4:
           a1 = cat;
           count--;
           return true;
           break;
       case 3:
           a2 = cat;
           count--;
           return true;
           break;
       case 2:
           a3 = cat;
           count--;
           return true;
           break;
       case 1:
           a4 = cat;
           count--;
           return true;
           break;
   }
   return true;
}

void cart::printMeerkats()
{
   if(count == 0){
       cout << a1.getName() << " " << a1.getAge() << endl;
       cout << a2.getName() << " " << a2.getAge() << endl;
       cout << a3.getName() << " " << a3.getAge() << endl;
       cout << a4.getName() << " " << a4.getAge() << endl;
   }
   if(count == 1){
       cout << a1.getName() << " " << a1.getAge() << endl;
       cout << a2.getName() << " " << a2.getAge() << endl;
       cout << a3.getName() << " " << a3.getAge() << endl;

   }
   if(count == 2){
       cout << a1.getName() << " " << a1.getAge() << endl;
       cout << a2.getName() << " " << a2.getAge() << endl;

   }
   if(count == 3){
       cout << a1.getName() << " " << a1.getAge() << endl;
   }

}

void cart::emptyCart(){

    count =4; //reset the count to 0

}

cart::~cart()
{
}
