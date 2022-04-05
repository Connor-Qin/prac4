#include <iostream>
#ifndef BOOK_H
#define BOOK_H
#include <string>

class Book
{
public:
    Book();
    
    std::string name;
    
    void set_book(string bo_name);
    string get_book();
    ~Book();
};
#endif