#include <iostream>
using namespace std;
int main() {
  int size;
  cout<<"Enter the size: ";
  cin>>size;
  for (int i = 0; i < size; i++) {
    int num = 1;
    for(int j = 0; j <= i; j++, num++) {
      cout<<num<<" ";
    }
    num-=2;
    for(int j = 0; j < i; j++, num--) {
      cout<<num<<" ";
    }
    cout<<endl;
  }
  
}
