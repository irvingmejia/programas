//incluir la libreria 
#include<iostream>
/*utilizar todos los caracteres y funciones
de la libreria
*/
using namespace std;
// funcion principal
int main(){
	//declarar variable
	int a,b,c,d,e,suma,promedio;
	//funcion de la variable
	cout<<"por favor digita el primer numero"<<endl;
	cin>>a;
	cout<<"por favor digita el segundo numero"<<endl;
	cin>>b;
	cout<<"por favor digita el tercer numero"<<endl;
	cin>>c;
	cout<<"por favor digita el cuarto numero"<<endl;
	cin>>d;
	cout<<"porfavor digita el quinto numero"<<endl;
	cin>>e;
	promedio = (a+b+c+d+e)/5;
	cout<<"tu promedio general es de:"<<promedio<<endl;
	if(promedio  >=7){
	cout<<"tu calificacion es aprobatoria"<<endl;
	}  
	else{
		cout<<"lo lamento tu calificacion no es aprobatoria";
	}
			cout<<"gracias por usar esta aplicacion";
			return 0;
			
}

	
