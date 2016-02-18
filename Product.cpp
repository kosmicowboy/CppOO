//
// Created by Kyle on 2/17/16.
//

#include "Product.h"

Product::Product(const string &description, double price) : description(description), price(price) { }

const string& Product::getDescription() const {
    return description;
}

double Product::getPrice() const {
    return price;
}

