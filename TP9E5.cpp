#include<iostream>
#include<vector>
#include<stdlib.h>
#include<math.h>
#include<time.h>
using namespace std;
class estudiante{
	private:
		string nombre;
		int edad,calificacion;
	public:
		void getNombre();
		void getEdad();
		void getCalificacion();
		void setNombre();
		void setEdad();
		void setCalificacion();
};
void estudiante::getNombre(){
	cout<<"El nombre del estudiante es: "<<nombre<<endl;
}
void estudiante::getEdad(){
	cout<<"La edad del estudiante es: "<<edad<<endl;
}
void estudiante::getCalificacion(){
	cout<<"La calificacion de estudiante es: "<<calificacion<<endl;
}
void estudiante::setNombre(){
	cout<<"Ingresar nombre del alumno: ";
	cin>>nombre;
}
void estudiante::setEdad(){
	cout<<"Ingresar edad del alumno: ";
	cin>>edad;
}
void estudiante::setCalificacion(){
	cout<<"Ingresar calificacion del alumno: ";
	cin>>calificacion;
}
int main(){
	estudiante estudiante1;
	estudiante1.setNombre();
	estudiante1.setEdad();
	estudiante1.setCalificacion();
	estudiante1.getNombre();
	estudiante1.getEdad();
	estudiante1.getCalificacion();
	return 0;
}
