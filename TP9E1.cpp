#include<iostream>
#include<vector>
#include<stdlib.h>
#include<math.h>
#include<time.h>
using namespace std;
class Alumno{
	private:
		int edad;
		string nombre;
	public:
		Alumno();
		void print();
		void mayor();
};
Alumno::Alumno(){
	cout<<"Ingresar nombre del alumno: ";
	cin>>nombre;
	cout<<"Ingresar edad del alumno: ";
	cin>>edad;
}
void Alumno::print(){
	cout<<nombre<<endl<<edad;
}
void Alumno::mayor(){
	if(edad>=18){
		cout<<"El alumno es mayor de edad";
	}
	else{
		cout<<"El alumno es menor de edad";
	}
}
int main(){
	Alumno alumno1;
	cout<<endl;
	alumno1.print();
	cout<<endl;
	alumno1.mayor();
	return 0;
}
