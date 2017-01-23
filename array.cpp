#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;

int main(){
  int n[10];
  
  for(int i=0; i < (sizeof(n)/sizeof(*n)); i++){
    n[i] = i + 100;
  }
  
  cout << "Element" << setw(13) << "Value" << endl;

  for (int j=0; j < (sizeof(n)/sizeof(*n)) ; j++){
    cout << setw(7) << j << setw(13) << n[j] << endl;
  }
  return 0;
}

