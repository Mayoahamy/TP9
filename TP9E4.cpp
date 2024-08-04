#include<iostream>
#include<vector>
#include<stdlib.h>
#include<math.h>
#include<time.h>
using namespace std;
class Sumatoria{
	private:
		vector<int> sum;
		int suma=0;
	public:
		Sumatoria();
		~Sumatoria();
};
Sumatoria::Sumatoria(){
	int n=1;
	cout<<"Ingresar valores para la sumatoria. Para detener, ingresar 0: ";
	while(n!=0){
		cin>>n;
		sum.push_back(n);
	}
}
Sumatoria::~Sumatoria(){
	for(int i=0;i<sum.size();i++){
		suma+=sum[i];
	}
	cout<<endl<<"El resultado de la sumatoria es: "<<suma;
}
int main(){
	Sumatoria sumatoria1;
	return 0;
}
