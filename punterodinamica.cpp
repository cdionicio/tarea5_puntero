#include <iostream>
using namespace std;

//punteros con asignacion de memoria dinamica
// new 0 reservar un espacio en memoria
//delete[] =liberar la memoria
//recolector de basura
main(){
	int total=0,*p_notas;
	p_notas = new int [total];
	char res;
	do {
		cout<<"ingrese nota"<<total<<":";
		cin>>p_notas[total];
		total++;
		cout<<"Desea ingresar otro valor (s/n):";
		cin>>res;
		
	}while(res=='s'|| res=='s');
	
	cout<< "mostrar notas" <<endl;
	for (int i=0;i<total;i++){
		cout<<"Nota ("<<i<<"): "<<*p_notas<<endl;
	     p_notas++;
			
}
delete[]p_notas;

system("pause");
}
