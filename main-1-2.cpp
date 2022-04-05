#include <iostream>
#include "person.h"
using namespace std;
int main(){
    Person a1("aaaaa",1000);
    cout << "Original name: " << a1.getName() << ", Original salary: " << a1.getSalary() <<endl;
    a1.setName("person1");
    a1.setSalary(2000);
    cout << "name: " << a1.getName() <<"salary: " << a1.getSalary() << endl;
    
    Person a2("bbbbb",2000);
    cout << "Original name: " << a2.getName() << ", Original salary: " << a2.getSalary() <<endl;
    a2.setName("person2");
    a2.setSalary(900);
    cout << "name: " << a2.getName() <<" salary: " << a2.getSalary() << endl;
    
    Person a3("cccccc",3000);
    cout << "Original name: " << a3.getName() << ", Original salary: " << a3.getSalary() <<endl;
    a3.setName("person3");
    a3.setSalary(6121);
    cout << "name: " << a3.getName() <<" salary: " << a3.getSalary() << endl;
    
    Person a4("dddddd",9000);
    cout << "Original name: " << a4.getName() << ", Original salary: " << a4.getSalary() <<endl;
    a4.setName("person4");
    a4.setSalary(12222);
    cout << "name: " << a4.getName() <<" salary: " << a4.getSalary() << endl;
    

    return 0;
}