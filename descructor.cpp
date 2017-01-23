#include <iostream>

using namespace std;

class Line{
public:
  void setLength(double len);
  double getLength(void);
  Line(double len);
  ~Line();
private:
  double length;
};

Line::Line(double len): length(len){
  cout << "Fucking item has been created!" << endl;
}

Line::~Line(void){
  cout << "Item has been fired" << endl;
}

void Line::setLength(double len){
  length = len;
}

double Line::getLength(void){
  return length;
}

int main(){

  Line line(100.);

  cout << line.getLength() << endl;
  line.setLength(1000.0);
  cout << line.getLength() << endl;
  return 0;
}

