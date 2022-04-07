#include <iostream>
#include <stdlib.h>
#include "cart.h"
#include "meerkat.h"
using namespace std;
int main(){
    cart A; //object of cart

    meerkat a[5]; //5 objects of meerkat

    a[0].setName("111");
    a[0].setAge(11);
    a[1].setName("222");
    a[1].setAge(22);
    a[2].setName("333");
    a[2].setAge(33);
    a[3].setName("444");
    a[3].setAge(44);
    a[4].setName("555");
    a[4].setAge(55);

    for(int i=0;i<=4;i++){
        if(A.addMeerkat(a[i])){
            cout<<"Meerkat added successfully.";
            
        }else{
            cout<<"Cart is full. you can't add meerkat now";
            
        }

    cout<<endl;

    }
    return 0;
}