 #include <iostream>
 using namespace std;

 int multiplicacion(int a, int b){
 if(a==0 || b==0)
 return 0;
 else
 return multiplicacion(a,b-1) + a;
 }
 int potencia(int a, int b){
 if(b==0)
 return 1;
 else
 return potencia(a,b-1) * a;
 }
 int factorial(int n);
 int main()
 {
 int n;
 int a, b;
 cout << "Ingrese numero : "; cin >> n;
 cout << "Tu factorial " << n << " es = " << factorial(n)<<endl;
 cout << "Ingrese valor de a : " << endl; cin >> a;
 cout << "Ingrese valor de b : " << endl; cin >> b;
 cout << a << " * " << b << " = " << multiplicacion(a,b) << endl;
 cout << a << " elevado a " << b << " = " << potencia(a,b) << endl;
 return 0;

 }

 int factorial(int n) {
 if(n > 1)
 return n * factorial(n - 1);
 else
 return 1;
 }







