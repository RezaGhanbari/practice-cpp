#include <iostream>

using namespace std;

class Line {
public:
  void setLength(double len);
  double getLength(void);
  Line(double len);
private:
  double length;
};

Line::Line(double len): length(len){
  cout << "Fucking item created" << endl;
}

void Line::setLength(double len){
  length = len;
}

double Line::getLength(void){
  return length;
}
 
int main(){
  Line line(10.0);
  
  cout << "Length of line : " << line.getLength() << endl;
  
  line.setLength(6.0);
  cout << "New line's length is : " << line.getLength() << endl;

  return 0;
}

  
