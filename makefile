Book.o: Book.h Book.cpp
    g++ Book.o

Library.o: Library.h Library.cpp
    g++ Library.o

total:
    g++ Book.o Library.o main.cpp