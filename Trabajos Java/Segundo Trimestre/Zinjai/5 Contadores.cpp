#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	int tt;
	int num;
	int milo;
	do {
		
	system ("cls");
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"        =========================================="<<endl;
	cout<<"        ==                                      =="<<endl;
	cout<<"        ==    Elija 1 Para Contar De 5  en 5    =="<<endl;
	cout<<"        ==    Elija 2 Para Contar De 10 en 10   =="<<endl;
	cout<<"        ==    Elija 3 Para Contar De 11 en 11   =="<<endl;
	cout<<"        ==    Elija 4 Para Contar De 20 en 20   =="<<endl;
	cout<<"        ==    Elija 5 Para Contar De 25 en 25   =="<<endl;
	cout<<"        ==    Elija 0 Para Salir Del Programa   =="<<endl;
	cout<<"        ==                                      =="<<endl;
	cout<<"        =========================================="<<endl;
	cin>> num;
	cout<<".................................................."<<endl;
	switch (num) {
	case 1:
		for (int tt=0;tt<101;tt=tt+5) {
			cout<<".."<< tt<<endl;
		}
		cout<<".................................................."<<endl;
		cout<<"Si Desea Volver A Inicia Otro Contador Pulse (1) Si No Pulse Lo Que Quiera"<<endl;
		cin>> milo;
		break;
	case 2:
		for (int tt=0;tt<101;tt=tt+10) {
			cout<<".... "<< tt<<endl;
		}
		cout<<".................................................."<<endl;
		cout<<"Si Desea Volver A Inicia Otro Contador Pulse (1) Si No Pulse Lo Que Quiera"<<endl;
		cin>> milo;
		break;
	case 3:
		for (int tt=0;tt<101;tt=tt+11) {
			cout<<".... "<< tt<<endl;
		}
		cout<<".................................................."<<endl;
		cout<<"Si Desea Volver A Inicia Otro Contador Pulse (1) Si No Pulse Lo Que Quiera"<<endl;
		cin>> milo;
		break;
	case 4:
		for (int tt=0;tt<101;tt=tt+20) {
			cout<<".... "<< tt<<endl;
		}
		cout<<".................................................."<<endl;
		cout<<"Si Desea Volver A Inicia Otro Contador Pulse (1) Si No Pulse Lo Que Quiera"<<endl;
		cin>> milo;
		break;
	case 5:
		for (int tt=0;tt<101;tt=tt+25) {
			cout<<".... "<< tt<<endl;
		}
		cout<<".................................................."<<endl;
		cout<<"Si Desea Volver A Inicia Otro Contador Pulse (1) Si No Pulse Lo Que Quiera"<<endl;
		cin>> milo;
		break;
	case 0:
		
		cout<<""<<endl;
	  milo=2;
		
		break;
	default:  cout<<" Esta Opcion No Es Valida"<<endl;
		cout<<"Si Desea Volver A Inicia Otro Contador Pulse (1) Si No Pulse Lo Que Quiera"<<endl;
		cin>> milo;
	};
	
	} 
	while(milo==1);
	
	return 0;
}

