#include <iostream>

using namespace std;

main (){
	int fil = 0,col=0, **pm_notas;
		cout<<"ingrese la cantidad de Estudiantes:";
			cin>>fil;
	cout<<"ingrese la cantidad   Notas por estudiante:";
	cin>>col;
	
	pm_notas = new int *[fil];
	
	for(int i=0;i<fil;i++){
		pm_notas[i]= new int [col];
	}
	for(int i=0;i<fil;i++){
			cout<<"_____Estudiante________"<<i<<endl;

			for(int ii=0;ii<col;ii++){
				cout<<"Estudiante"<<i<<", Nota:"<<ii<<":";
			cin>>*(*(pm_notas)+ii);
			
	}
	cout<<"_____________"<<endl;
		
}
	cout<<"------Mostrar Notas------"<<endl;
		for(int i=0;i<fil;i++){
			cout<<"_____Estudiante________"<<i<<endl;

			for(int ii=0;ii<col;ii++){
				cout<<"Estudiante"<<i<<", Nota:"<<ii<<":";
			cout<<*(*(pm_notas+i)+ii)<<endl;
			
	}
	cout<<"_____________"<<endl;
	
	cout<<"_______________"<<endl;
	for(int i=0;i<fil;i++){
		delete []pm_notas[i];
		
	}
delete []pm_notas[i];
}

	
	
	
	system("pause");
	
}