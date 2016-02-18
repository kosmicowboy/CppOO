//
// Created by Kyle on 2/17/16.
//

#include "LineItem.h"
#include <iostream>
#include <iomanip>

LineItem::LineItem(const Product &prod, int qty) : prod(prod), qty(qty) { }

void LineItem::print() {
    cout << left << setw(28)
    << prod.getDescription()
    << right << fixed << setprecision(2)
    << setw(7) << prod.getPrice()
    << setw(7) << qty
    << setw(7) << getTotal() << "\n";

}

double LineItem::getTotal() {
    return prod.getPrice() * qty;
}