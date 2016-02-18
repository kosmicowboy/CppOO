//
// Created by Kyle on 2/17/16.
//

#ifndef INVOICE_PRODUCT_H
#define INVOICE_PRODUCT_H

#include <string>

using namespace std;

class Product {
public:

    Product(const string &description, double price);

    const string &getDescription() const;

    double getPrice() const;

private:
    string description;
    double price;
};


#endif //INVOICE_PRODUCT_H
