#include<iostream>
#include<vector>
#include<stdlib.h>
#include<math.h>
#include<time.h>
using namespace std;
class operaciones{
	private:
		int n1;
		int n2;
	public:
		operaciones();
		int suma(int a, int b);
		int resta(int a, int b);
		int multiplicacion(int a, int b);
		float division(int a, int b);
};
operaciones::operaciones(){
	cout<<"Ingresar primer entero: ";
	cin>>n1;
	cout<<"Ingresar segundo entero: ";
	cin>>n2;
	cout<<n1<<" + "<<n2<<" = "<<suma(n1,n2)<<endl;
	cout<<n1<<" - "<<n2<<" = "<<resta(n1,n2)<<endl;
	cout<<n1<<" x "<<n2<<" = "<<multiplicacion(n1,n2)<<endl;
	cout<<n1<<" / "<<n2<<" = "<<division(n1,n2)<<endl;
}
int operaciones::suma(int a, int b){
	int n;
	n=a+b;
	return n;
}
int operaciones::resta(int a, int b){
	int n;
	n=a-b;
	return n;
}
int operaciones::multiplicacion(int a, int b){
	int n;
	n=a*b;
	return n;
}
float operaciones::division(int a, int b){
	float n;
	n=(float)a/b;
	return n;
}

int main(){
	operaciones op1;
	return 0;
}
