#include <iostream>
#include "meerkat.h"
using namespace std;
int main(){
    meerkat bob, a2,a3,a4;
    cout << "Original name: " << bob.getName() <<endl;
    bob.setName("Bob");
    cout << "name: " << bob.getName() <<endl;
    cout << "Original age: " << bob.getAge() <<endl;
    bob.setAge(10);
    cout << "age: " << bob.getAge()<<endl;

    cout << "Original name: " << a2.getName() <<endl;
    a2.setName("a2");
    cout << "name: " << a2.getName() <<endl;
    cout << "Original age: " << a2.getAge() <<endl;
    a2.setAge(12);
    cout << "age: " << a2.getAge()<<endl;

    cout << "Original name: " << a3.getName() <<endl;
    a3.setName("a3");
    cout << "name: " << a3.getName() <<endl;
    cout << "Original age: " << a3.getAge() <<endl;
    a3.setAge(14);
    cout << "age: " << a3.getAge()<<endl;

    cout << "Original name: " << a4.getName() <<endl;
    a4.setName("a4");
    cout << "name: " << a4.getName() <<endl;
    cout << "Original age: " << a4.getAge() <<endl;
    a4.setAge(120);
    cout << "age: " << a4.getAge()<<endl;

    return 0;
}