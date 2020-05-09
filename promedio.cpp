 #include "iostream"
using namespace std;
int main(void)
{
   int a,b,c,suma;
   float div;

   cout <<"Digite el valor de a :";
         cin >> a;

   cout <<"Digite el valor de b :";
        cin >> b;

   cout <<"Digite el valor de c :";
         cin >> c;
    
    suma = a + b +c;
    div = (float) suma/3.0;

    cout << endl << "El promedio es :" << div;
   
   return 0;
}