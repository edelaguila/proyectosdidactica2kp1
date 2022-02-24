#include <iostream>
#include <cmath>
using namespace std;

const float Pi = 3.14154;

int main(){
 char opcion;
 cout<<"Selecciona el area que deseas calcular"<<endl;
 cout<<" a) Circulo\n b) Cuadrado\n c) Rectangulo\n d) Triangulo\n"; cin>>opcion;
 switch(opcion){
  case 'a': cout << "Aqui estara la funcion areaDelCirculo()" << endl; break;
  case 'b': cout << "Aqui estara la funcion areaDelCuadrado()" << endl; break;
  case 'c': cout << "Aqui estara la funcion areaDelRectangulo()" << endl; break;
  case 'd': cout << "Aqui estara la funcion areaDelTriangulo()" << endl; break;
 }
 return 0;
}
