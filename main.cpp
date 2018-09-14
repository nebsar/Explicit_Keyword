/* 
 * File:   main.cpp
 * Author: Eagleye
 *
 * Created on September 14, 2018, 1:44 AM
 */

#include <iostream>

class Base {
    int _x;

public:

    Base() {
    }
    explicit Base(int i) : _x{i}
    {
        std::cout << _x << '\n';
    }

    void print() {
        std::cout << _x << '\n';
    }
};

void function(Base b) {
    b.print();
}

int main() {

    Base b(10);

    Base d = 20;

    function(40);

    function(d);

    return 0;
}

