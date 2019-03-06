#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
    double  b1,a1,b2,a2,at,ac,vco,vci,pi;/* b1: primera base, a1: primera altura, b2: segunda base, a2: segunda base, 
	                                       at: area del triangulo, ac: area del cuadrado, vco: volumen del cono, vci: volumune del cilindro*/
	
	cout<<"Digite la base y la altura \n";
	cout<<"base = ";
	cin>>b1;
	cout<<"altura = ";
	cin>>a1;
	
	ac = b1 * a1; //base por altura
	at = ac / 2;  //base por altura entre 2

	cout<<"Con estas medidas: \n";
	cout<<"Area de un triangulo de base "<<b1<<" y altura "<<a1<<" = ";
	cout<<at;
	cout<<"\nArea de un cuadrado de base "<<b1<<" y altura "<<a1<<" = ";
	cout<<ac;
	
	cout<<endl<<"\nDigite la base y la altura \n";
	cout<<"base = ";
	cin>>b2;
	cout<<"altura = ";
	cin>>a2;

    b2 = b2 / 2;  //base entre dos para obtener el radio
    pi = M_PI;    //M_PI de la libreria math.h para la constante pi
    
    vci = pi * pow(b2,2) * a2;  // pi por radio al cuadrado por la altura, volumen de un cilindro
    vco = vci / 3;                // pi por radio al cuadrado por la altura entre 3, volumen de un cono
    
    cout<<"Con estas medidas: \n";
	cout<<"Volumen de un cono de base "<<b2<<" y altura "<<a2<<" = ";
	cout<<vco;
	cout<<"\nVolumen de un cilindro de base "<<b2<<" y altura "<<a2<<" = ";
	cout<<vci<<endl;
    
    system("pause");
	return 0;
         }
