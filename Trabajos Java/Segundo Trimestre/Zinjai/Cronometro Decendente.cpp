#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

 
  char Cronometro;
  do {
	  
	  cout<< "" <<endl;
	  cout<< "" <<endl;
	  cout<< "" <<endl;
	  cout<< "    =================================================================" <<endl;
	  cout<< "    |                                                               |" <<endl;
	  cout<< "    |                          Hola Mundo                           |" <<endl;
	  cout<< "    |                                                               |" <<endl;
	  cout<< "    |               Bienvenido Al Contador Decendente               |" <<endl;	
	  cout<< "    |                                                               |" <<endl;
	  cout<< "    =================================================================" <<endl;
	  
	  Esperar Tecla 
	  
	  for (int www=100;www>-1;www--) {
		 cout<< www <<endl;  }
	  
		 cout<< " Si Desea Reiniciar El Cronometro Pulse(s)De Lo Contrario Pulse Otra Tecla" <<endl;
		 cin>> Cronometro;
	} 
      while (Cronometro=='s');
  
	return 0;
}

