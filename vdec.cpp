#include <iostream>

using namespace std;


extern int a,b;
extern int c;
extern float f;
int func();
int main(){
  int a, b;
  int c;
  float f;
  
  int i = func();
  a = 10;
  b = 20;
  c = a+b;
  
  cout << c << endl << i << endl;
  
  return 0;
}


int func(){
  return 10;
}

