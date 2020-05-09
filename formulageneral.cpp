#include "iostream"
 
#include "math.h"

using namespace std;
 int main(void)
 {
     int a,b,c;
     float raiz,sr,x,rs,y;

     cout << "Digite el valor de a :";
     cin >> a;

    cout << "Digite el valor de b :";
     cin >> b;

     cout << "Digite el valor de c :";
     cin >> c;
      
     raiz = sqrt(pow(b,2)-4*a*c ); 
     
     sr = -b + raiz;
     rs = -b - raiz;
     x = sr/ 2*a;
     y = rs/ 2*a;

    cout << " El resultado es :" << x << " y " << y;
    return 0;
 }