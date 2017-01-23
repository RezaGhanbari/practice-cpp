#include <iostream>
#include <ctime>

using namespace std;

int * getRandom(){
  static int r[10];
  
  // set the seed
  srand((unsigned)time(NULL));
  
  for (int i=0; i<(sizeof(r)/sizeof(*r)); ++i){
    r[i] = rand();
    cout << r[i] << endl;
  }
  return r;
}

int main(){
  int *p;
  p = getRandom();

  for (int j=0; j<10; j++){
    cout << *(p+j) << endl;
  }
  return 0;
}
