#include "iostream"

using namespace std;

int main(void)
{
    int cant;
    float pre,mul;
    string prod;

 cout <<"Producto :";
         cin >> prod;

   cout <<"Precio :$";
        cin >> pre;

   cout <<"Cantidad :";
         cin >> cant;

    mul = pre*cant;
    cout << "La cantidad de dinero gastado es :$"<< mul;     
     
     return 0;
}