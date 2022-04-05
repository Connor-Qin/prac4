#include <iostream>
#ifndef LIBRARY_H
#define LIBRARY_H
#include <string>

class Library
{
public:
    Library();
    
    std::string bname;
    
    void borrow_book(string book_name);
    string receive_book();
    ~Book();
};
#endif
