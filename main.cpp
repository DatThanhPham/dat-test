#include "Cinema.h"
#include <iostream>

using namespace std;

#include <iostream>

int main() {
    // Create a StandardCinema with 5 rows and 6 columns
    StandardCinema standardCinema(6, 6);

    // Create a VIPCinema with 7 rows and 8 columns on a Thursday
    VIPCinema vipCinema(7, 8, "Thursday");

    // Book some tickets in StandardCinema
    standardCinema.bookTicket(3, 3);
    standardCinema.bookTicket(4, 5);

    // Book some tickets in VIPCinema
    vipCinema.bookTicket(1, 2);
    vipCinema.bookTicket(6, 7);

    // Display total prices
    cout << "Total price in Standard Cinema: $" << standardCinema.getTotalPrice() << endl;
    cout << "Total price in VIP Cinema: $" << vipCinema.getTotalPrice() << endl;

    return 0;
}
