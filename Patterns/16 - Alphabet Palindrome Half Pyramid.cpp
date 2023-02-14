#include <iostream>
using namespace std;
int main() {
  int size;
  cout<<"Enter the size: ";
  cin>>size;
  for (int i = 0; i < size; i++) {
    char ch = 'A';
    for(int j = 0; j <= i; j++, ch++) {
      cout<<ch<<" ";
    }
    ch-=2;
    for(int j = 0; j < i; j++, ch--) {
      cout<<ch<<" ";
    }
    cout<<endl;
  }
  
}
