#include <iostream>
using namespace std;
int main() {
  int size;
  cout<<"Enter the size: ";
  cin>>size;
  int num=3;
  for (int i = 0; i < size; i++, num++) {
    for(int j = 0; j <= i; j++) {
      cout<<num;
    }
    cout<<endl;
  }
  num-=2;
  for (int i = 0; i < size; i++, num--) {
    for(int j = 0; j < size-i-1; j++) {
      cout<<num;
    }
    cout<<endl;
  }
}
