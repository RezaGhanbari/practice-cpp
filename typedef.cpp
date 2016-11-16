#include <iostream>

using namespace std;

typedef unsigned short int USHORT;
int main(){
    USHORT width = 5;
    USHORT length;
    length = 10;
    USHORT area = width*length;

    cout << "Width:" << width << "\n";
    cout << "Length: " << length << endl;
    cout << "Area: " << area <<endl;
}