//main
#include <iostream>
#include "funciones.h"
using namespace std;
int main()
{
    float lado1, lado2, lado3, p;
    int menU; 
    menU = menu();
    switch (menU)
    {   
        case 1:
                cout<<"Dame la medida del lado"<<endl; 
                cin>>lado1;      
                p = calcPerimEquilatero(lado1);
                cout<<"el perimetro del triangulo equilatero es "<<p<<endl;
                break;
        case 2:
                cout<<"Dame la medida del lado que es igual al otro lado"<<endl; 
                cin>>lado1;
                cout<<"Dame la medida del otro lado"<<endl; 
                cin>>lado2;
            p = calcPerimIsosceles (lado1, lado2);
             cout<<"el perimetro del triangulo equilatero es "<<p<<endl;
            break;
        case 3:
            cout<<"Dame la medida del lado"<<endl; 
                cin>>lado1;
                cout<<"Dame la medida del otro lado"<<endl; 
                cin>>lado2;
                cout<<"Dame la medida del otro lado"<<endl; 
                cin>>lado3;
                p = calcPerimEscaleno (lado1, lado2, lado3);
            cout<<"El perimetro del triangulo equilatero es "<<p<<endl;
            break;
        default:
              break;

    }

}