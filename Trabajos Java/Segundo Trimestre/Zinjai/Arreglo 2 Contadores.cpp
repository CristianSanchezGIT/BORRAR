#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
    int a1[20], a2[20];
	int i;
	
	//Inicializacion De Copiar En a1
	for (i=0; i<20;i++)
		a1[i]=i+1;
	//Inicializacion De Copiar En a2
	for (i=0; i<20;i++)
		a2[i]=a1[i];
	//Mostrar a2
	for (i=0; i<20;i++)
		cout<<a2[i]<<endl;
	//Mostrar a1
	for (i=0; i<20;i++)
		cout<<a1[i]<<endl;
	
	return 0;
}

