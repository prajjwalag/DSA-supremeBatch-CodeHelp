#include <iostream>
using namespace std;
int main() {
  int row, col;
  cout<<"Enter the number of columns: ";
  cin>>col;
  cout<<"Enter the numer of rows: ";
  cin>>row;
  for (int i = 0; i < row; i++) {
    for(int j = 0; j < col; j++) {
      cout<<"* ";
    }
    cout<<endl;
  }
}
