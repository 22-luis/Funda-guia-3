#include "iostream"
#include "cmath"

using namespace std;

int main(void)
{
    float r,a,p;

    cout << "Digite el radio del circulo :";
    cin >> r;
cout << endl;

    a = pow(r,2)*3.14;
    cout << "El area es :"<< a;
cout <<endl;
    
     p = 2*3.14*r;
     cout << "El perimetro es :"<< p; 

    return 0;
}