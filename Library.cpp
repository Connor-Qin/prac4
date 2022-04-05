
#include <iostream>
#include "Library.h"
using namespace std;

Library::Library()
{
    name = "1";
    book_name = "love";
    
}

void Library::set_book(string bo_name){
    if(book_name == no_name){
        cout << "success"<< endl;
    }else{
        cout << "no book"<< endl;
    }
}
void Library::get_book(string bo_name){
    name = bo_name;
    cout << "get book"<< endl;
}

Library::~Library()
{
}