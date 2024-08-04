#include<iostream>
#include<vector>
#include<stdlib.h>
#include<math.h>
#include<time.h>
using namespace std;
class empleado{
	private:
		string nombre;
		int sueldo;
	public:
		empleado();
		void imprimir();
		void impuesto();
};
empleado::empleado(){
	cout<<"Ingresar nombre del empleado: ";
	cin>>nombre;
	cout<<"Ingresar sueldo en pesos mensual del empleado: ";
	cin>>sueldo;
}
void empleado::imprimir(){
	cout<<"El nombre del empleado es: "<<nombre<<" y su suedo mensual es de $"<<sueldo<<endl;
}
void empleado::impuesto(){
	if(sueldo>3000){
		cout<<"El empleado debe pagar impuestos";
	}
	else{
		cout<<"El empleado no debe pagar impuestos";
	}
}

int main(){
	empleado empleado1;
	empleado1.imprimir();
	empleado1.impuesto();
	return 0;
}
