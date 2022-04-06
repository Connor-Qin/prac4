#include <iostream>
#include "meerkat.h"
#include "cart.h"
using namespace std;
meerkat::meerkat(){
    Meerkat(string name){
        this.name=name;
    }
    
}



cart::cart(){
    
}
bool addMeerkat(meerkat cat){
    int count =0;
    if(count>5){
        n[count+1] =cat.name;
        return 1;
    }else{
        return 0;
    }
}

void emptyCart(){
    if(count==0){
        cout<< "cart is empty"<<endl;
    }else{
        cout << "cart is not empty"<<endl;
    }
}

void printMeerkats(){
    for(int i=0;i<count;i++){
        
    }
}


cart::~cart()
{
}
