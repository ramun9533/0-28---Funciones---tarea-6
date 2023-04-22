//funciones
#include <iostream>
using namespace std;
int menu(){
    int menu;
cout<<"Menu"<<endl;
cout<<"Oprime 1 si deseas el perimetro obtener el perimetro de un tringulo Escaleno"<<endl;
cout<<"Oprime 2 si deseas el perimetro obtener el perimetro de un tringulo Isosceles"<<endl;
cout<<"Oprime 3 si deseas el perimetro obtener el perimetro de un tringulo Escaleno"<<endl;
cout<<"Dime que perimetro que deseas obtener"<<endl;
cin>>menu;
return menu;
}
float calcPerimEquilatero (float ladO1){
    float perimetro;
    perimetro = ladO1 * 3;
    return perimetro;
}
float calcPerimIsosceles (float ladO1, float ladO2){
    float perimetro;
    perimetro = (ladO1 * 2) + ladO2;
    return perimetro;
}
float calcPerimEscaleno (float ladO1, float ladO2, float ladO3){
    float perimetro;
    perimetro = ladO1 + ladO2 + ladO3;
    return perimetro;
}