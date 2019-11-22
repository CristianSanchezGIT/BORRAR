#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	char pregunta;
	do{
		for (int tt=0;tt<60;tt++) {
			cout<< tt<<endl;
		}
		cout<<" Desea Volver A Intentarlo (s) Para Continuar De Lo Contrario Oprima Otra Cosa "<<endl;
		cin>> pregunta;
	} 
	while(pregunta=='s');
	
	return 0;
}
