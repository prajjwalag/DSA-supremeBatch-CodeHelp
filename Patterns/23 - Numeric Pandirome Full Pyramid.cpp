#include <iostream>
using namespace std;
int main() {
  int size;
  cout<<"Enter the size: ";
  cin>>size;
  int element = 1;
  for (int i = 0; i < size; i++) {
    element=1;
    for(int j = 0; j < size-i-1; j++) {
        cout<<"  ";
    }
    for(int j=0; j <= i; j++, element++) {
      cout<<element<<" ";
    }
    element-=2;
    for(int j=0; j < i; j++, element--) {
      cout<<element<<" ";
    }
    cout<<endl;
  }
}
