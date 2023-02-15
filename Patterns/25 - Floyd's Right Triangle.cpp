#include <iostream>
using namespace std;
int main() {
  int size;
  cout<<"Enter the size: ";
  cin>>size;
  int num=1;
  for(int i=0; i<size; i++) {
    for(int j=0; j<=i; j++, num++) {
      cout<<num<<" ";
    }
    cout<<endl;
  }
}
