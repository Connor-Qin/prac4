#include <iostream>
#include "Book.h"
#include "Library.h"
using namespace std;
// main program
int main()
{
    Book a1();
    a1.set_book("love");
    a1.get_book();
    library stu();
    stu.borrow_book("love");
    
}