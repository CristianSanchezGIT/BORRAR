#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int a1[100];
	int i;
	
	//Inicializacion De Copiar En a1
	for (i=100; i>0;i--)
		a1[i]=i-1;
	
	//Mostrar a1
	for (i=100; i>0;i--)
		cout<<a1[i]<<endl;
	
	return 0;
}

