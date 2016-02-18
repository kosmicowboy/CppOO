//
// Created by Kyle on 2/17/16.
//

#ifndef INVOICE_ADDRESS_H
#define INVOICE_ADDRESS_H

#include <string>

using namespace std;

class Address {
public:

    Address(const string &name, const string &street, const string &city, const string &state, const string &zip);

    void print();

private:
    string name;
    string street;
    string city;
    string state;
    string zip;
};


#endif //INVOICE_ADDRESS_H
