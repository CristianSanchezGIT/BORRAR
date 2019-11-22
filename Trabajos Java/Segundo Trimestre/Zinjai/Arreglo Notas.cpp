#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float promedio;
	float suman;1
	int canotas;
	float notas[50];
	int pro;
	cout<< "                                         "<<endl;
	cout<< "     ...................................."<<endl;
	cout<< "     ..                                .."<<endl;
	cout<< "     ..  Cuantas Notas Va A Promediar  .."<<endl;
	cout<< "     ..                                .."<<endl;
	cout<< "     ..       (Maximo 50 Notas)        .."<<endl;
	cout<< "     ..                                .."<<endl;
	cout<< "     ...................................."<<endl;
      cin>> canotas;
	
	for (int pro=0;pro<canotas;pro++) {
		cout<< "     ...................................."<<endl;
		cout<< "     ..                                .."<<endl;
		cout<<"     ..    Digite La Nota Numero "<<pro+1<<":    .."<<endl;
		cin>> notas[pro];
		
	}
	
	suman=0;
	for (int pro=0;pro<canotas;pro++) {
		suman=suman+notas[pro];
		
	}
	promedio=suman/canotas;
	cout<<"El Promedio De La Notan Final Es: "<<promedio<<""<<endl;

	return 0;
}

