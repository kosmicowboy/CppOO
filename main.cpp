#include <iostream>
#include "Address.h"
#include "Product.h"
#include "Invoice.h"

using namespace std;

int main() {

    Invoice myInvoice(Address("Bob Barker", "123 My Street", "los Angeles", "CA", "90210"));
    myInvoice.add(Product("Running Shoes", 59.99), 2);
    myInvoice.add(Product("Silver Chain", 9.99), 9);
    myInvoice.add(Product("Monster Energy", 1.87), 24);
    myInvoice.print();

    return 0;
}