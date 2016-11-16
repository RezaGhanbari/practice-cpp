#include <iostream>

using namespace std;

int main(){
    enum Days {Sat, Sun, Mon, Tue, Wed, Thu, Fri};
    Days DayOff;
    int x;
    cout << "What day would you like off (0-6)? ";
    cin >> x;

    DayOff=Days(x);

    if (DayOff == Sun || DayOff == Sat)
        cout << "\nYou're already off on weekends!\n";
    else
        cout << "\nOkay, I'll put in the vacation day.\n";
    return 0;

}