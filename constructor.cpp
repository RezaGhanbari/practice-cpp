#include <iostream>
using namespace std;

class Line {
public:
  void setLength(double len);
  double getLength(void);
  Line(); // .... :)) it is that fucker
private:
  double length;
};

void Line::setLength(double len){
  length = len;
}

double Line::getLength(void){
  return length;
}

Line::Line(void){
  cout << "Fucking object is created." << endl;
}

int main(){
  Line line;
  line.setLength(6.0);
  cout << "Length of line: " << line.getLength() << endl;
  return 0;
}
