#include <iostream>
using namespace std;
int main() {
  int size;
  cout<<"Enter the size: ";
  cin>>size;
  for (int i = 0; i < size; i++) {
    for(int j = 0; j < (size*2) - i - 2; j++) {
      cout<<"*";
    }
    for(int j = 0; j < i*2 +1; j++ ) {
      if(j%2==0) {
        cout<<i+1;
      }
      else {
        cout<<"*";
      }
    }
    for(int j = 0; j < (size*2) - i - 2; j++) {
      cout<<"*";
    }
    cout<<endl;
  }
}
