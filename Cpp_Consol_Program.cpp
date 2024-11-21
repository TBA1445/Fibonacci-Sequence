#include <iostream>
#include <stdint.h>
#include <math.h>
using namespace std;

int main()
{

    int A, B, C, userNumber, temp;
    C=2;
    A=0;
    B=1;
    

    cout << "Enter a Number: ";
    cin >> userNumber;


  while (userNumber<1) {
    cout << "Enter a Number: ";
    cin >> userNumber;
  }
  
  
    if (userNumber>=3) {
       cout << 0 << ", ";
       cout << 1 << ", ";
       
      
       do{
       C=C+1;
       temp=A+B;
       A=B;
       B=temp;
       
       cout << temp << ", ";
       } while (userNumber>C);
    }
    if (userNumber==1) {
        cout << "0";
    }
    if (userNumber==2) {
        cout << A << ", " << B << ", ";
    }
}
