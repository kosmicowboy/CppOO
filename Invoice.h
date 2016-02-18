//
// Created by Kyle on 2/17/16.
//

#ifndef INVOICE_INVOICE_H
#define INVOICE_INVOICE_H

#include "LineItem.h"
#include "Address.h"
#include "Product.h"
#include <vector>

using namespace std;

class Invoice {
public:

    Invoice(const Address &adrs);

    void add(Product p, int q);

    void print();

    double total();

private:
    Address adrs;
    vector <LineItem> item;
    double amountDue;
};


#endif //INVOICE_INVOICE_H
