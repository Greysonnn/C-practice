#include <iostream>
using namespace std;

int main() {
   int shipWeightPounds;
   int shipCostCents = 0;
   const int FLAT_FEE_CENTS = 75;
   const int CENTS_PER_POUND = 25;
   
   cin >> shipWeightPounds;  // collect shipping weight as input
   shipCostCents = FLAT_FEE_CENTS + (CENTS_PER_POUND * shipWeightPounds); //calculate shipping cost

   cout << "Weight(lb): " << shipWeightPounds;
   cout << ", Flat fee(cents): " << FLAT_FEE_CENTS;
   cout << ", Cents per lb: " << CENTS_PER_POUND << endl;
   cout << "Shipping cost(cents): " << shipCostCents << endl;
