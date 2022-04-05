#include <iostream>
#include "meerkat.h"
using namespace std;
int main(){
    Meerkat a1, a2,a3,a4;
    cout << "Original name: " << a1.getName() <<endl;
    a1.setName("a1");
    cout << "name: " << a1.getName() <<endl;
    cout << "Original age: " << a1.getName() <<endl;
    a1.setAge(10);
    cout << "age: " << a1.getAge()<<endl;

    cout << "Original name: " << a1.getName() <<endl;
    a2.setName("a2");
    cout << "name: " << a2.getName() <<endl;
    cout << "Original age: " << a1.getName() <<endl;
    a2.setAge(12);
    cout << "age: " << a3.getAge()<<endl;

    cout << "Original name: " << a1.getName() <<endl;
    a3.setName("a3");
    cout << "name: " << a3.getName() <<endl;
    cout << "Original age: " << a1.getName() <<endl;
    a3.setAge(14);
    cout << "age: " << a3.getAge()<<endl;

    cout << "Original name: " << a1.getName() <<endl;
    a4.setName("a4");
    cout << "name: " << a4.getName() <<endl;
    cout << "Original age: " << a1.getName() <<endl;
    a4.setAge(120);
    cout << "age: " << a4.getAge()<<endl;

    return 0;
}
