#include <iostream>
using namespace std;
int main() {
  int size;
  cout<<"Enter the size: ";
  cin>>size;
  for (int i = 0; i < size; i++) {
    for(int j = 0; j <= size-i-1; j++) {
      if(j==0 || i==0 || j==size-i-1){
        cout<<j+1<<" ";
      }
      else {
        cout<<"  ";
      }
    }
    cout<<endl;
  }
}
