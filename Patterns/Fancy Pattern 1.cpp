#include <iostream>
using namespace std;
int main() {
  int size;
  cout<<"Enter the size: ";
  cin>>size;
  for (int i = 0; i < size; i++) {
    for(int j = 0; j <= i; j++) {
      if(j==i) {
        cout<<j+1;
      } else {
        cout<<j+1<<"*";    
      }
    }
    cout<<endl;
  }
  for (int i = 0; i < size; i++) {
    for(int j = 0; j < size-i-1; j++) {
      if(j==size-i-2) {
        cout<<j+1;
      } else {
        cout<<j+1<<"*";    
      }
    }
    cout<<endl;
  }
}
