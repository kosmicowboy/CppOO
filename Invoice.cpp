//
// Created by Kyle on 2/17/16.
//

#include "Invoice.h"
#include <iostream>
Invoice::Invoice(const Address &adrs) : adrs(adrs) { amountDue = 0;}

void Invoice::print() {
    cout << "                         INVOICE                       \n\n";
    adrs.print();
    for (int i = 0; i < item.size(); i++)
        item[i].print();
    cout << "Total:                                   " << total();
}

void Invoice::add(Product p, int q) {
    LineItem l(p, q);
    item.push_back(l);
}

double Invoice::total() {
    for (int i = 0; i < item.size(); i++)
        amountDue += item[i].getTotal();
    return amountDue;
}
