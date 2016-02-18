//
// Created by Kyle on 2/17/16.
//

#include "Address.h"
#include <iostream>

using namespace std;

Address::Address(const string &name, const string &street, const string &city, const string &state, const string &zip)
        : name(name), street(street), city(city), state(state), zip(zip) { }

void Address::print() {
    cout << name << "\n"
        << street << "\n"
        << city << "\n"
        << state << "\n"
        << zip << "\n\n";
}