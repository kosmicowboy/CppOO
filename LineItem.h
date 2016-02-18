//
// Created by Kyle on 2/17/16.
//

#ifndef INVOICE_LINEITEM_H
#define INVOICE_LINEITEM_H


#include "Product.h"

class LineItem {
public:

    LineItem(const Product &prod, int qty);

    void print();
    double getTotal();

private:
    Product prod;
    int qty;
};


#endif //INVOICE_LINEITEM_H
