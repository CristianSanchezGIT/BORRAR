#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	int cantidad,xx,nume,milo;
	float j,l,numero,multi,divi,canti;
do {
	system ("cls");
	 
	 cout<<"................................"<<endl;
	 cout<<"..                            .."<<endl;
	 cout<<"..  Elija 1 Para Sumar        .."<<endl;	
	 cout<<"..  Elija 2 Para Restar       .."<<endl;	
	 cout<<"..  Elija 3 Para Multiplicar  .."<<endl;	
	 cout<<"..  Elija 4 Para Dividir      .."<<endl;	
	 cout<<"..  Elija 0 Para Salir        .."<<endl;
	 cout<<"..                            .."<<endl;
	 cout<<"................................"<<endl;
	 cin>> nume;
	 
	  switch (nume) {
	  case 1:
		  
		  system ("cls");
		  
		  cout<<""<<endl;
		  cout<<"..            suma             .."<<endl;
		  cout<<".. Cuantos Numeros Desea Sumar.."<<endl;
		  cin>> cantidad;
		  j=0;
		  for (int xx=1;xx<cantidad+1;xx++) {
			  if(j==0){
				  cout<<".. Ingrese El Primer Numero.."<<endl;
				  cin>> numero;
				  j=numero;
				  l=numero;
				  
			  } else {
				  cout<<".. Ingrese El Siguiente Numero.."<<endl;
				  cin>> numero;
				  l=l+numero;
			  }  
		  }
		  
		  cout<<".. El Resultado Es: "<<l<<" .."<<endl;
		  cout<<".................................................."<<endl;
		  cout<<"Si Desea Realizar Otra Operacion Pulse (1) Si No Pulse Lo Que Quiera"<<endl;
		  cin>> milo;
		  break;
	  case 2:
	
			  system ("cls");
			  
			  cout<<""<<endl;
			  cout<<"..            Resta             .."<<endl;
			  cout<<".. Cuantos Numeros Desea Restar.."<<endl;
			  cin>> cantidad;
			  j=0;
			  for (int xx=1;xx<cantidad+1;xx++) {
				 if(j==0){
				     cout<<".. Ingrese El Primer Numero.."<<endl;
				     cin>> numero;
					 j=numero;
					 l=numero;
					 
				 } else {
				 cout<<".. Ingrese El Siguiente Numero.."<<endl;
				 cin>> numero;
				 l=l-numero;
				 }  
			  }
		   	
		  cout<<".. El Resultado Es: "<<l<<" .."<<endl;
		  cout<<".................................................."<<endl;
		  cout<<"Si Desea Realizar Otra Operacion Pulse (1) Si No Pulse Lo Que Quiera"<<endl;
		  cin>> milo;
		  break;
	  case 3:
		  
		  system ("cls");
		  
		  cout<<""<<endl;
		  cout<<"..            Multiplicacion            .."<<endl;
		  cout<<".. Cuantos Numeros Desea Multiplicar.."<<endl;
		  cin>> cantidad;
		  j=0;
		  for (int xx=1;xx<cantidad+1;xx++) {
			  if(j==0){
				  cout<<".. Ingrese El Primer Numero.."<<endl;
				  cin>> numero;
				  j=numero;
				  l=numero;
				  
			  } else {
				  cout<<".. Ingrese El Siguiente Numero.."<<endl;
				  cin>> numero;
				  l=l*numero;
			  }  
		  }
		  
		  cout<<".. El Resultado Es: "<<l<<" .."<<endl;
		  cout<<".................................................."<<endl;
		  cout<<"Si Desea Realizar Otra Operacion Pulse (1) Si No Pulse Lo Que Quiera"<<endl;
		  cin>> milo;
		  break;
	  case 4:
		 
			  system ("cls");
			  
			  cout<<""<<endl;
			  cout<<"..            Divicion             .."<<endl;
			  cout<<".. Ingrese El Primer Numero A Dividir.."<<endl;
			  cin>> canti;
			  cout<<".. Ingrese El Segundo Numero A Dividir.."<<endl;
			  cin>> multi;
			  divi=canti/multi;
		  
		  cout<<".. El Resultado Es: "<<divi<<" .."<<endl;
		  cout<<".................................................."<<endl;
		  cout<<"Si Desea Realizar Otra Operacion Pulse (1) Si No Pulse Lo Que Quiera"<<endl;
		  cin>> milo;
		  break;
	   case 0:
		  
		  cout<<""<<endl;
		   milo=2;
		 
		  break;
	   default:  cout<<" Esta Opcion No Es Valida"<<endl;
		  cout<<"Si Desea Realizar Otra Operacion Pulse (1) Si No Pulse Lo Que Quiera"<<endl;
		  cin>> milo;
	    };
	 
    } 
	while(milo==1);
	
	return 0;
}

