#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
const int zero=1;
int main(int argc, char *argv[]) {
	
	int cantidad,xx,nume,milo,rere,aaa,eee,sss,npp;
	float j,l,numero,multi,divi,canti,np,ccc,ppp;
	do {
		system ("cls");
	  
		cout<<"   "<<endl;
		cout<<"   "<<endl;
		cout<<"   "<<endl;
		cout<<"    #.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#"<<endl;
		cout<<"    .#.                                                 .#."<<endl;
		cout<<"    .#.  Elija 1  Para Sumar                            .#."<<endl;	
		cout<<"    .#.  Elija 2  Para Restar                           .#."<<endl;	
		cout<<"    .#.  Elija 3  Para Multiplicar                      .#."<<endl;	
		cout<<"    .#.  Elija 4  Para Dividir                          .#."<<endl;	
		cout<<"    .#.  Elija 5  Para Promedio De Cinco Numeros        .#."<<endl;	
		cout<<"    .#.  Elija 6  Convertir De Dolares A Pesos          .#."<<endl;	
		cout<<"    .#.  Elija 7  Elevado                               .#."<<endl;	
		cout<<"    .#.  Elija 8  Numero Mayor Y Menor                  .#."<<endl;	
		cout<<"    .#.  Elija 9  Convertir De Kilos A Gramos           .#."<<endl;	
		cout<<"    .#.  Elija 10 Convertir De Kilos A Libras           .#."<<endl;	
		cout<<"    .#.  Elija 11 Convertir De Kilometros A Centimetros .#."<<endl;	
		cout<<"    .#.  Elija 12 Seno Coseno Y Tangente                .#."<<endl;	
		cout<<"    .#.  Elija 0 Para Salir                             .#."<<endl;
		cout<<"    .#.                                                 .#."<<endl;
		cout<<"    #.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#"<<endl;
		cin>> nume;
		
		switch (nume) {
		case 1:
			do
			 {
			  system ("cls");
			 
			  cout<<""<<endl;
			  cout<<""<<endl;
			  cout<<""<<endl;
			  cout<<"   /////////////////////////////////////////////////"<<endl;
			  cout<<"   //                                             //"<<endl;
			  cout<<"   //   ######  ##   ##  ####    ####  ########   // "<<endl;
			  cout<<"   //   ##      ##   ##  ## ##  ## ##  ##    ##   //"<<endl;
			  cout<<"   //   ##      ##   ##  ##  # #   ##  ##    ##   //"<<endl;
			  cout<<"   //   ######  ##   ##  ##   #    ##  ########   //"<<endl;
			  cout<<"   //       ##  ##   ##  ##        ##  ##    ##   //"<<endl;
			  cout<<"   //       ##  ##   ##  ##        ##  ##    ##   //"<<endl;
			  cout<<"   //   ######  #######  ##        ##  ##    ##   //"<<endl;
			  cout<<"   //                                             //"<<endl;
			  cout<<"   //                                             //"<<endl;
			  cout<<"   //         Cuantos Numeros Desea Sumar         //"<<endl;
			  cin>> cantidad;
			  j=0;
			   for (int xx=1;xx<cantidad+1;xx++) {
				  if(j==0){
					   cout<<"   //                                             //"<<endl;
					   cout<<"   //     ..................................      //"<<endl;
					   cout<<"   //                                             //"<<endl;
					   cout<<"   //          Ingrese El Primer Numero           //"<<endl;
					   cin>> numero;
					   j=numero;
					  l=numero;
					   
				    } else {
						cout<<"   //                                             //"<<endl;
						cout<<"   //                                             //"<<endl;
						cout<<"   //        Ingrese El Siguiente Numero          //"<<endl;
					   cin>> numero;
					   l=l+numero;
				   }  
			    }
			   cout<<"   //                                             //"<<endl;
			   cout<<"   //     ..................................      //"<<endl;
			   cout<<"   //                                             //"<<endl;
			   cout<<"   //             El Resultado Es: "<<l<<"              //"<<endl;
			   cout<<"   //                                             //"<<endl;
			   cout<<"   /////////////////////////////////////////////////"<<endl;
			   cout<<""<<endl;
			   cout<<""<<endl;
                  
			   cout<<"   /////////////////////////////////////////////////"<<endl;
			   cout<<"   //                                             //"<<endl;
			   cout<<"   //     ..................................      //"<<endl;
			   cout<<"   //                                             //"<<endl;
			   cout<<"   //      Si Desea Seguir Sumando Pulse (1)      //"<<endl;
			   cout<<"   //          Si No Pulse Lo Que Quiera          //"<<endl;
			   cout<<"   //                                             //"<<endl;
			   cout<<"   //     ..................................      //"<<endl;
			   cin>> rere;
			   
			}
			while(rere==1);
			
			cout<<"   //                                             //"<<endl;
			cout<<"   //     ..................................      //"<<endl;
			cout<<"   //                                             //"<<endl;
			cout<<"   //      Si Desea Realizar Otra Operacion       //"<<endl;
			cout<<"   //     Pulse (1) Si No Pulse Lo Que Quiera     //"<<endl;
			cout<<"   //                                             //"<<endl;
			cout<<"   /////////////////////////////////////////////////"<<endl;
			cin>> milo;
			
			break;
		case 2:
			
			do {
			   system ("cls");
			   cout<<"   "<<endl;
			   cout<<"   "<<endl;
			   cout<<"   "<<endl;
			   cout<<"   /////////////////////////////////////////////////////"<<endl;
			   cout<<"   //                                                 //"<<endl;
			   cout<<"   //   #######  ######   ####### ########  #######   // "<<endl;
			   cout<<"   //   ##   ##  ##       ##         ##     ##   ##   //"<<endl;
			   cout<<"   //   ##   ##  ######   ##         ##     ##   ##   //"<<endl;
			   cout<<"   //   ######   ######   ######     ##     #######   //"<<endl;
			   cout<<"   //   ##   ##  ##            ##    ##     ##   ##   //"<<endl;
			   cout<<"   //   ##   ##  ##            ##    ##     ##   ##   //"<<endl;
			   cout<<"   //   ##   ##  ######   #######    ##     ##   ##   //"<<endl;
			   cout<<"   //                                                 //"<<endl;
			   cout<<"   //                                                 //"<<endl;
			   cout<<"   //         Cuantos Numeros Desea Restar            //"<<endl;
			   cin>> cantidad;
			   j=0;
			   for (int xx=1;xx<cantidad+1;xx++) {
				   if(j==0){
					   cout<<"   //                                                 //"<<endl;
					   cout<<"   //       ..................................        //"<<endl;
					   cout<<"   //                                                 //"<<endl;
					   cout<<"   //            Ingrese El Primer Numero             //"<<endl;
					   cin>> numero;
					   j=numero;
					   l=numero;
					  
				    } else {
						cout<<"   //                                                 //"<<endl;
						cout<<"   //                                                 //"<<endl;
						cout<<"   //          Ingrese El Siguiente Numero            //"<<endl;
					   cin>> numero;
					   l=l-numero;
				    }  
			    }
			  
			   cout<<"   //                                                 //"<<endl;
			   cout<<"   //       ..................................        //"<<endl;
			   cout<<"   //                                                 //"<<endl;
			   cout<<"   //               El Resultado Es: "<<l<<"                //"<<endl;
			   cout<<"   //                                                 //"<<endl;
			   cout<<"   /////////////////////////////////////////////////////"<<endl;
			   cout<<""<<endl;
			   cout<<""<<endl;
			  
			   cout<<"   /////////////////////////////////////////////////////"<<endl;
			   cout<<"   //                                                 //"<<endl;
			   cout<<"   //       ..................................        //"<<endl;
			   cout<<"   //                                                 //"<<endl;
			   cout<<"   //            Si No Pulse Lo Que Quiera            //"<<endl;
			   cout<<"   //                                                 //"<<endl;
			   cout<<"   //       ..................................        //"<<endl;
			   cin>> rere;
			 
		    }
		    while(rere==1);
			
			cout<<"   //                                                 //"<<endl;
			cout<<"   //       ..................................        //"<<endl;
			cout<<"   //                                                 //"<<endl;
			cout<<"   //        Si Desea Realizar Otra Operacion         //"<<endl;
			cout<<"   //       Pulse (1) Si No Pulse Lo Que Quiera       //"<<endl;
			cout<<"   //                                                 //"<<endl;
			cout<<"   /////////////////////////////////////////////////////"<<endl;
			cin>> milo;
			break;
			
		case 3:
			do {
			   system ("cls");
			   cout<<"   "<<endl;
			   cout<<"   "<<endl;
			   cout<<"   "<<endl;
			   cout<<"   ////////////////////////////////////////////////////////////////"<<endl;
			   cout<<"   //                                                             //"<<endl;
			   cout<<"   //   ####   #####  ##   ##  ##        ########  #######        // "<<endl;
			   cout<<"   //   ## ## ##  ##  ##   ##  ##        #  ##  #    ##           //"<<endl;
			   cout<<"   //   ##  # #   ##  ##   ##  ##           ##       ##           //"<<endl;      
			   cout<<"   //   ##   #    ##  ##   ##  ##           ##       ##           //"<<endl;
			   cout<<"   //   ##        ##  ##   ##  ##           ##       ##           //"<<endl;
			   cout<<"   //   ##        ##  ##   ##  ##    ##     ##       ##           //"<<endl;
			   cout<<"   //   ##        ##  #######  ########     ##     ######         //"<<endl;
			   cout<<"   //                                                             //"<<endl;
			   cout<<"   //                                                             //"<<endl;
			   cout<<"   //            Cuantos Numeros Desea Multiplicar                //"<<endl;
			   cin>> cantidad;
			   j=0;
			   for (int xx=1;xx<cantidad+1;xx++) {
				   if(j==0){
					   cout<<"   //                                                             //"<<endl;
					   cout<<"   //             ..................................              //"<<endl;
					   cout<<"   //                                                             //"<<endl;
					   cout<<"   //                  Ingrese El Primer Numero                   //"<<endl;
					   cin>> numero;
					   j=numero;
					   l=numero;
					 
				    } else {
						cout<<"   //                                                             //"<<endl;
						cout<<"   //                                                             //"<<endl;
						cout<<"   //                 Ingrese El Siguiente Numero                 //"<<endl;
					   cin>> numero;
					   l=l*numero;
				    }  
			    }
			   cout<<"   //                                                             //"<<endl;
			   cout<<"   //                                                             //"<<endl;
			   cout<<"   //             ..................................              //"<<endl;
			   cout<<"   //                                                             //"<<endl;
			   cout<<"   //                    El Resultado Es: "<<l<<"                      //"<<endl;
			   cout<<"   //                                                             //"<<endl;
			   cout<<"   //                                                             //"<<endl;
			   cout<<"   /////////////////////////////////////////////////////////////////"<<endl;
			   
			   cout<<""<<endl;
			   cout<<""<<endl;
			   cout<<"   ////////////////////////////////////////////////////////////////"<<endl;
			   cout<<"   //                                                            //"<<endl;
			   cout<<"   //          Si Desea Seguir Multiplicando Pulse (1)           //"<<endl;
			   cout<<"   //                Si No Pulse Lo Que Quiera                   //"<<endl;
			   cout<<"   //                                                            //"<<endl;
			   cout<<"   //            ..................................              //"<<endl;

			   cin>> rere;
			   
			}
			while(rere==1);
		 
			cout<<"   //                                                            //"<<endl;
			cout<<"   //              ..................................            //"<<endl;
			cout<<"   //                                                            //"<<endl;
			cout<<"   //               Si Desea Realizar Otra Operacion             //"<<endl;
			cout<<"   //              Pulse (1) Si No Pulse Lo Que Quiera           //"<<endl;
			cout<<"   //                                                            //"<<endl;
			cout<<"   ////////////////////////////////////////////////////////////////"<<endl;
		    cin>> milo;
			
			break;
		case 4:
			
			do {
			    system ("cls");
				cout<<"   "<<endl;
				cout<<"   "<<endl;
				cout<<"   "<<endl;
				cout<<"   ////////////////////////////////////////////////////////////////"<<endl;
				cout<<"   //                                                            //"<<endl;
				cout<<"   //                                   ##                       //"<<endl;
				cout<<"   //                                  ##                        //"<<endl;
				cout<<"   //                                 ##                         //"<<endl;      
				cout<<"   //                                ##                          //"<<endl;
				cout<<"   //                               ##                           //"<<endl;
				cout<<"   //                              ##                            //"<<endl;
				cout<<"   //                             ##                             //"<<endl;
				cout<<"   //                            ##                              //"<<endl;
				cout<<"   //                                                            //"<<endl;
				cout<<"   //              ..................................            //"<<endl;
				cout<<"   //                                                            //"<<endl;
				cout<<"   //              Ingrese El Primer Numero A Dividir            //"<<endl;
			    cin>> canti;
				
				cout<<"   //                                                            //"<<endl;
				cout<<"   //                                                            //"<<endl;
				cout<<"   //                  Ingrese El Segundo Numero                 //"<<endl;
			    cin>> multi;
			try
			{    
				if(multi==0)
					throw zero;
				else 
					
					divi=canti/multi;
				
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"   //              ..................................            //"<<endl;
				cout<<"   //                                                            //"<<endl;
				cout<<"   //                       El Resultado Es: "<<divi<<"                   //"<<endl;
				cout<<"   //                                                            //"<<endl;
				cout<<"   ////////////////////////////////////////////////////////////////"<<endl;
			}
			catch(int err)
			{
				if(err==zero)
					cout<<""<<endl;
				cout<<""<<endl;
				cout<<"   ////////////////////////////////////////////////////////////////"<<endl;
				cout<<"   //                                                            //"<<endl;
				cout<<"   //                     No Se Puede Didir Por 0                //"<<endl;
				cout<<"   //                                                            //"<<endl;
				cout<<"   ////////////////////////////////////////////////////////////////"<<endl;
				
			}
				
				
				
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"   ////////////////////////////////////////////////////////////////"<<endl;
				cout<<"   //                                                            //"<<endl;
				cout<<"   //          Si Desea Seguir Dividiendo Pulse (1)              //"<<endl;
				cout<<"   //                Si No Pulse Lo Que Quiera                   //"<<endl;
				cout<<"   //                                                            //"<<endl;
				cout<<"   //            ..................................              //"<<endl;
				cin>> rere;
				
			}
			while(rere==1);
			
			cout<<"   //                                                            //"<<endl;
			cout<<"   //              ..................................            //"<<endl;
			cout<<"   //                                                            //"<<endl;
			cout<<"   //               Si Desea Realizar Otra Operacion             //"<<endl;
			cout<<"   //              Pulse (1) Si No Pulse Lo Que Quiera           //"<<endl;
			cout<<"   //                                                            //"<<endl;
			cout<<"   ////////////////////////////////////////////////////////////////"<<endl;
			cin>> milo;
			
			break;
			
		case 5:
			do
			{
				system ("cls");
				cout<<"   "<<endl;
				cout<<"   "<<endl;
				cout<<"   "<<endl;
				cout<<"   /////////////////////////////////////////////////////////////////"<<endl;
				cout<<"   //                                                             //"<<endl;
				cout<<"   //          #######  #######   #######  ####     ####          //"<<endl;
				cout<<"   //          ##   ##  ##    #   ##   ##  ## ##   ## ##          //"<<endl;
				cout<<"   //          ##   ##  ##   ##   ##   ##  ##  ## ##  ##          //"<<endl;      
				cout<<"   //          #######  #######   ##   ##  ##    #    ##          //"<<endl;
				cout<<"   //          ##       ##   ##   ##   ##  ##         ##          //"<<endl;
				cout<<"   //          ##       ##    ##  ##   ##  ##         ##          //"<<endl;
				cout<<"   //          ##       ##    ##  #######  ##         ##          //"<<endl;
				cout<<"   //                                                             //"<<endl;
				cout<<"   //                                                             //"<<endl;
				cout<<"   //                                                             //"<<endl;
				cout<<"   //    ###    ##  ##    ##  ####     ####  ########  #######    //"<<endl;
				cout<<"   //    ####   ##  ##    ##  ## ##   ## ##  ##    ##  ##    ##   //"<<endl;
				cout<<"   //    ## ##  ##  ##    ##  ##  ## ##  ##  ##        ##    ##   //"<<endl;      
				cout<<"   //    ##  ## ##  ##    ##  ##    #    ##  ########  #######    //"<<endl;
				cout<<"   //    ##   ####  ##    ##  ##         ##  ##        ##    ##   //"<<endl;
				cout<<"   //    ##    ###  ##    ##  ##         ##  ##    ##  ##    ##   //"<<endl;
				cout<<"   //    ##     ##  ########  ##         ##  ########  ##    ##   //"<<endl;
				cout<<"   //                                                             //"<<endl;
				cout<<"   //                                                             //"<<endl;
				cout<<"   //               Cuantos Numeros Desea Promediar               //"<<endl;
				cin>> cantidad;
				j=0;
				for (int xx=1;xx<cantidad+1;xx++) {
					if(j==0){
						cout<<"   //                                                             //"<<endl;
						cout<<"   //            ....................................             //"<<endl;
						cout<<"   //                                                             //"<<endl;
						cout<<"   //                  Ingrese El Primer Numero                   //"<<endl;
						cin>> numero;
						j=numero;
						l=numero;
						
					} else {
						cout<<"   //                                                             //"<<endl;
						cout<<"   //                                                             //"<<endl;
						cout<<"   //                 Ingrese El Siguiente Numero                 //"<<endl;
						cin>> numero;
						l=l+numero;
					}  
				}
				
				np=l/cantidad;
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"   //                                                             //"<<endl;
				cout<<"   //            ....................................             //"<<endl;
				cout<<"   //                                                             //"<<endl;
				cout<<"   //                      El Promedio Es: "<<np<<"                      //"<<endl;
				cout<<"   //                                                             //"<<endl;
				cout<<"   /////////////////////////////////////////////////////////////////"<<endl;
				
				
				
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"   /////////////////////////////////////////////////////////////////"<<endl;
				cout<<"   //                                                             //"<<endl;
				cout<<"   //          Si Desea Seguir 	Promediando Pulse (1)             //"<<endl;
				cout<<"   //                Si No Pulse Lo Que Quiera                    //"<<endl;
				cout<<"   //                                                             //"<<endl;
				cout<<"   //            ..................................               //"<<endl;
				cin>> rere;
				
			}
			while(rere==1);
			cout<<""<<endl;
			cout<<"   //                                                             //"<<endl;
			cout<<"   //              ..................................             //"<<endl;
			cout<<"   //                                                             //"<<endl;
			cout<<"   //               Si Desea Realizar Otra Operacion              //"<<endl;
			cout<<"   //              Pulse (1) Si No Pulse Lo Que Quiera            //"<<endl;
			cout<<"   //                                                             //"<<endl;
			cout<<"   /////////////////////////////////////////////////////////////////"<<endl;
			cin>> milo;
			
			break;
		
		case 6:
			do
			{
				system ("cls");
				cout<<"   "<<endl;
				cout<<"   "<<endl;
				cout<<"   "<<endl;
				cout<<"   ///////////////////////////////////////////////////////////////////////"<<endl;
				cout<<"   //                                                                   //"<<endl;
				cout<<"   // ###### ###### ###  ## ##  ## ###### ###### ###### ######  ######  //"<<endl;
				cout<<"   // ##  ## ##  ## ###  ## ##  ## ##  ## ##  ##   ##     ##    ##  ##  //"<<endl;
				cout<<"   // ##     ##  ## ## # ## ##  ## ####   #####    ##     ##    #####   //"<<endl;      
				cout<<"   // ##  ## ##  ## ##  ###  ####  ##  ## ##  ##   ##     ##    ##  ##  //"<<endl;
				cout<<"   // ###### ###### ##  ###   ##   ###### ##  ##   ##   ######  ##  ##  //"<<endl;
				cout<<"   //                                                                   //"<<endl;
				cout<<"   //                                                                   //"<<endl;
				cout<<"   //    #####  ###### ##     ###### ###### ###### ######   ######      //"<<endl;
				cout<<"   //    ##  ## ##  ## ##     ##  ## ##  ## #   ## ##       ##  ##      //"<<endl;
				cout<<"   //    ##  ## ##  ## ##     ###### #####  ####   ######   ######      //"<<endl;      
				cout<<"   //    ##  ## ##  ## ##  ## ###### ##  ## ##  ##     ##   ##  ##      //"<<endl;
				cout<<"   //    #####  ###### ###### ##  ## ##  ## ###### ######   ##  ##      //"<<endl;
				cout<<"   //                                                                   //"<<endl;
				cout<<"   //                                                                   //"<<endl;
				cout<<"   //             ###### ###### ###### ###### ######                    //"<<endl;
				cout<<"   //             ##  ## ##   # ##     ##  ## ##                        //"<<endl;
				cout<<"   //             ###### ####   ###### ##  ## ######                    //"<<endl;      
				cout<<"   //             ##     ##   #     ## ##  ##     ##                    //"<<endl;
				cout<<"   //             ##     ###### ###### ###### ######                    //"<<endl;
				cout<<"   //                                                                   //"<<endl;
				cout<<"   ///////////////////////////////////////////////////////////////////////"<<endl;
				cout<<"   //                                                                   //"<<endl;
				cout<<"   //                Cuantos Dolares Desea Convertir                    //"<<endl;
				cout<<"   //                                                                   //"<<endl;
				cout<<"   ///////////////////////////////////////////////////////////////////////"<<endl;
				cin>> cantidad;
				
				np=cantidad*2500;
				cout<<"   ///////////////////////////////////////////////////////////////////////"<<endl;
				cout<<"   //                                                                   //"<<endl;
				cout<<"   //             "<<cantidad<< " Dolares Equivalen a "<<np<<" Pesos                    //"<<endl;
				cout<<"   //                                                                   //"<<endl;
				cout<<"   ///////////////////////////////////////////////////////////////////////"<<endl;
				
				
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"   ///////////////////////////////////////////////////////////////////////"<<endl;
				cout<<"   //                                                                   //"<<endl;
				cout<<"   //            Si Desea Seguir Convirtiendo Pulse (1)                 //"<<endl;
				cout<<"   //                   Si No Pulse Lo Que Quiera                       //"<<endl;
				cout<<"   //                                                                   //"<<endl;
				cout<<"   //                ..................................                 //"<<endl;
				cin>> rere;
				
			}
			while(rere==1);
			cout<<"   //                                                                   //"<<endl;
			cout<<"   //                ..................................                 //"<<endl;
			cout<<"   //                                                                   //"<<endl;
			cout<<"   //                 Si Desea Realizar Otra Operacion                  //"<<endl;
			cout<<"   //                Pulse (1) Si No Pulse Lo Que Quiera                //"<<endl;
			cout<<"   //                                                                   //"<<endl;
			cout<<"   ///////////////////////////////////////////////////////////////////////"<<endl;
			cin>> milo;
			
			break;	
		 
		case 7:
			do
			{
				system ("cls");
				cout<<"   "<<endl;
				cout<<"   "<<endl;
				cout<<"   "<<endl;
				cout<<"   ////////////////////////////////////////////////////////////////"<<endl;
				cout<<"   //                                                            //"<<endl;
				cout<<"   //   ##### ##   ##### ##   ## ##### ##### #### ##### ###  ##  // "<<endl;
				cout<<"   //   ## ## ##   ## ## ##   ## ## ## ## ##  ##  ## ## #### ##  //"<<endl;
				cout<<"   //   ##    ##   ##     ## ##  ##### ##     ##  ## ## ## ####  //"<<endl;
				cout<<"   //   ##### ##   ####    # #   ## ## ##     ##  ## ## ##  ###  //"<<endl;
				cout<<"   //   ##    ## # ##      # #   ## ## ## ##  ##  ## ## ##  ###  //"<<endl;
				cout<<"   //   ##### #### #####   ###   ## ## ##### #### ##### ##   ##  //"<<endl;
				cout<<"   //                                                            //"<<endl;
				cout<<"   ////////////////////////////////////////////////////////////////"<<endl;
				cout<<"                                                                   "<<endl;
				cout<<"   ////////////////////////////////////////////////////////////////"<<endl;
				cout<<"   //                                                            //"<<endl;
				cout<<"   //                   Que Numero Desea Elevar                  //"<<endl;
				cout<<"   //                                                            //"<<endl;
				cout<<"   //                                                            //"<<endl;
				cin>> cantidad;
				cout<<"   //                                                            //"<<endl;
				cout<<"   //               A Que Potencia Lo Desea Elevar               //"<<endl;
				cout<<"   //                                                            //"<<endl;
				cout<<"   //               ..............................               //"<<endl;
				cin>> npp;
				
				aaa=pow(cantidad,npp);
				cout<<"   //                                                            //"<<endl;
				cout<<"   //                                                            //"<<endl;
				cout<<"                         El Resultado Es: "<<aaa<<"              "<<endl;
				cout<<"   //                                                            //"<<endl;
				cout<<"   ////////////////////////////////////////////////////////////////"<<endl;
				cout<<""<<endl;
				
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"   ////////////////////////////////////////////////////////////////"<<endl;
				cout<<"   //                                                            //"<<endl;
				cout<<"   //          Si Desea Seguir Elevando Pulse (1)                //"<<endl;
				cout<<"   //                Si No Pulse Lo Que Quiera                   //"<<endl;
				cout<<"   //                                                            //"<<endl;
				cout<<"   //            ..................................              //"<<endl;
				cin>> rere;
				
			}
			while(rere==1);
			cout<<"   //                                                            //"<<endl;
			cout<<"   //            ..................................              //"<<endl;
			cout<<"   //                                                            //"<<endl;
			cout<<"   //             Si Desea Realizar Otra Operacion               //"<<endl;
			cout<<"   //            Pulse (1) Si No Pulse Lo Que Quiera             //"<<endl;
			cout<<"   //                                                            //"<<endl;
			cout<<"   ////////////////////////////////////////////////////////////////"<<endl;
			cin>> milo;
			
			break;	
			
		case 8:
			do
			{
				system ("cls");
				cout<<"   "<<endl;
				cout<<"   "<<endl;
				cout<<"   "<<endl;
				cout<<"   //////////////////////////////////////////////////////"<<endl;
				cout<<"   //                                                  //"<<endl;
				cout<<"   //   ###  ## ##  ## ###   ### ##### ###### ######   // "<<endl;
				cout<<"   //   #### ## ##  ## #### #### ##    ##  ## ##  ##   //"<<endl;
				cout<<"   //   ## #### ##  ## ##  #  ## ##### #####  ##  ##   //"<<endl;
				cout<<"   //   ##  ### ##  ## ##     ## ##    ##  ## ##  ##   //"<<endl;
				cout<<"   //   ##   ## ###### ##     ## ##### ##  ## ######   //"<<endl;
				cout<<"   //                                                  //"<<endl;
				cout<<"   //      ###   ### ###### ##  ## ###### #####        //"<<endl;
				cout<<"   //      #### #### ##  ## ##  ## ##  ## ##  ##       //"<<endl;
				cout<<"   //      ##  #  ## ######  ####  ##  ## #####        //"<<endl;
				cout<<"   //      ##     ## ##  ##   ##   ##  ## ##  ##       //"<<endl;
				cout<<"   //      ##     ## ##  ##   ##   ###### ##  ##       //"<<endl;
				cout<<"   //                                                  //"<<endl;
				cout<<"   //                     ##  ##                       //"<<endl;
				cout<<"   //                     ##  ##                       //"<<endl;
				cout<<"   //                      ####                        //"<<endl;
				cout<<"   //                       ##                         //"<<endl;
				cout<<"   //                       ##                         //"<<endl;
				cout<<"   //                                                  //"<<endl;
				cout<<"   //   ###  ## ##  ## ###   ### ##### ###### ######   // "<<endl;
				cout<<"   //   #### ## ##  ## #### #### ##    ##  ## ##  ##   //"<<endl;
				cout<<"   //   ## #### ##  ## ##  #  ## ##### #####  ##  ##   //"<<endl;
				cout<<"   //   ##  ### ##  ## ##     ## ##    ##  ## ##  ##   //"<<endl;
				cout<<"   //   ##   ## ###### ##     ## ##### ##  ## ######   //"<<endl;
				cout<<"   //                                                  //"<<endl;
				cout<<"   //      ###   ### ###### ##   ## ###### #####       //"<<endl;
				cout<<"   //      #### #### ##     ###  ## ##  ## ##  ##      //"<<endl;
				cout<<"   //      ##  #  ## ###### ## #### ##  ## #####       //"<<endl;
				cout<<"   //      ##     ## ##     ##  ### ##  ## ##  ##      //"<<endl;
				cout<<"   //      ##     ## ###### ##   ## ###### ##  ##      //"<<endl;
				cout<<"   //                                                  //"<<endl;
				cout<<"   //                                                  //"<<endl;
				cout<<"   //////////////////////////////////////////////////////"<<endl;
				cout<<"                                                         "<<endl;
				cout<<"   //////////////////////////////////////////////////////"<<endl;
				cout<<"   //                                                  //"<<endl;
				cout<<"   //             Ingrese El Primer Numero             //"<<endl;
				cout<<"   //                                                  //"<<endl;
				cout<<"   //             ........................             //"<<endl;
				cin>> ccc;
				
				cout<<"   //                                                  //"<<endl;
				cout<<"   //             Ingrese El Segundo Numero            //"<<endl;
				cout<<"   //                                                  //"<<endl;
				cout<<"   //////////////////////////////////////////////////////"<<endl;
				cin>> ppp;
				
				if(ccc==ppp){
					cout<<"   //////////////////////////////////////////////////////"<<endl;
					cout<<"   //                                                  //"<<endl;
					cout<<"   //              Los Numeros Son Iguales             //"<<endl;
					cout<<"   //                                                  //"<<endl;
					cout<<"   //////////////////////////////////////////////////////"<<endl;
				} else {
					if(ccc>ppp){
						cout<<"   //////////////////////////////////////////////////////"<<endl;
						cout<<"   //                                                  //"<<endl;
						cout<<"                     "<<ccc<<" Es Mayor Que "<<ppp<<endl; 
						cout<<"   //                                                  //"<<endl;
						cout<<"   //////////////////////////////////////////////////////"<<endl;
						
						
					} else {
						cout<<"   //////////////////////////////////////////////////////"<<endl;
						cout<<"   //                                                  //"<<endl;
						cout<<"                     "<<ppp<<" Es Mayo Que "<<ccc<<endl;
						cout<<"   //                                                  //"<<endl;
						cout<<"   //////////////////////////////////////////////////////"<<endl;
						
					}  
				}  
				
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"   //////////////////////////////////////////////////////"<<endl;
				cout<<"   //                                                  //"<<endl;
				cout<<"   //   Si Desea Seguir Averiguando un numero mayor o  //"<<endl;
				cout<<"   //    menor Pulse (1)  Si No Pulse Lo Que Quiera    //"<<endl;
				cout<<"   //                                                  //"<<endl;
				cout<<"   //        ..................................        //"<<endl;
				cin>> rere;
				
			}
			while(rere==1);
			cout<<"   //                                                  //"<<endl;
			cout<<"   //       ..................................         //"<<endl;
			cout<<"   //                                                  //"<<endl;
			cout<<"   //        Si Desea Realizar Otra Operacion          //"<<endl;
			cout<<"   //       Pulse (1) Si No Pulse Lo Que Quiera        //"<<endl;
			cout<<"   //                                                  //"<<endl;
			cout<<"   //////////////////////////////////////////////////////"<<endl;
			cin>> milo;
			
			break;
			
		case 9:
			do
			{
				system ("cls");
				cout<<"   "<<endl;
				cout<<"   "<<endl;
				cout<<"   "<<endl;
				cout<<"   //////////////////////////////////////////////////////////////////////"<<endl;
				cout<<"   //                                                                  //"<<endl;
				cout<<"   // ###### ###### ###  ## ##  ## ###### ###### ###### ######  ###### //"<<endl;
				cout<<"   // ##  ## ##  ## ###  ## ##  ## ##___  ##  ##   ##     ##    ##  ## //"<<endl;
				cout<<"   // ##     ##  ## ## # ## ##  ## ##     #####    ##     ##    #####  //"<<endl;      
				cout<<"   // ###### ###### ##  ###  ####  ###### ##  ##   ##   ######  ##  ## //"<<endl;
				cout<<"   //                                                                  //"<<endl;
				cout<<"   //   ####  #####     ## ##  ###### ##    ###### ######    ######    //"<<endl;
				cout<<"   //   ## ## ##___     ####     ##   ##    ##  ## ##____    ##  ##    //"<<endl;
				cout<<"   //   ## ## ##        ## ##    ##   ## ## ##  ##     ##    ######    //"<<endl;
				cout<<"   //   ####  #####     ##  ## ###### ##### ###### ######    ##  ##    //"<<endl;
				cout<<"   //                                                                  //"<<endl;
				cout<<"   //         ###### ######  ##### #### #### ###### #####              //"<<endl;
				cout<<"   //         ##  _  ##__#   ##_## ## ### ## ##  ## ##_                //"<<endl;      
				cout<<"   //         ##   # ##  ##  ## ## ##     ## ##  ##    ##              //"<<endl;
				cout<<"   //         ###### ##   ## ## ## ##     ## ###### #####              //"<<endl;
				cout<<"   //                                                                  //"<<endl;
				cout<<"   //                                                                  //"<<endl;
				cout<<"   //////////////////////////////////////////////////////////////////////"<<endl;
				cout<<"                                                                       "<<endl;
				cout<<"                                                                       "<<endl;
				cout<<"   //////////////////////////////////////////////////////////////////////"<<endl;
				cout<<"   //                                                                  //"<<endl;
				cout<<"   //                    Cuantos Kilos Desea Convertir                 //"<<endl;
				cout<<"   //                                                                  //"<<endl;
				cout<<"   //////////////////////////////////////////////////////////////////////"<<endl;
				cin>> ccc;
				
				ppp=ccc*1000;
				cout<<"   //////////////////////////////////////////////////////////////////////"<<endl;
				cout<<"   //                                                                  //"<<endl;
				cout<<"   //                "<<ccc<< " Kilos Equivalen a "<<ppp<<" Gramos                   //"<<endl;
				cout<<"   //                                                                  //"<<endl;
				cout<<"   //////////////////////////////////////////////////////////////////////"<<endl;
				
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"   //////////////////////////////////////////////////////////////////////"<<endl;
				cout<<"   //                                                                  //"<<endl;
				cout<<"   //       Si Desea Seguir Convirtiendo Kilos A Gramos  Pulse (1)     //"<<endl;
				cout<<"   //                   Si No Pulse Lo Que Quiera                      //"<<endl;
				cout<<"   //                                                                  //"<<endl;
				cout<<"   //               ..................................                 //"<<endl;
				cin>> rere;
				
			}
			while(rere==1);
			cout<<"   //                                                                  //"<<endl;
			cout<<"   //               ..................................                 //"<<endl;
			cout<<"   //                                                                  //"<<endl;
			cout<<"   //                Si Desea Realizar Otra Operacion                  //"<<endl;
			cout<<"   //               Pulse (1) Si No Pulse Lo Que Quiera                //"<<endl;
			cout<<"   //                                                                  //"<<endl;
			cout<<"   //////////////////////////////////////////////////////////////////////"<<endl;
			cin>> milo;
			
			break;	
		 
		case 10:
			do
			{
				system ("cls");
				cout<<"   "<<endl;
				cout<<"   "<<endl;
				cout<<"   "<<endl;
				cout<<"   //////////////////////////////////////////////////////////////////////"<<endl;
				cout<<"   //                                                                  //"<<endl;
				cout<<"   // ###### ###### ###  ## ##  ## ###### ###### ###### ######  ###### //"<<endl;
				cout<<"   // ##  ## ##  ## ###  ## ##  ## ##___  ##  ##   ##     ##    ##  ## //"<<endl;
				cout<<"   // ##     ##  ## ## # ## ##  ## ##     #####    ##     ##    #####  //"<<endl;      
				cout<<"   // ###### ###### ##  ###  ####  ###### ##  ##   ##   ######  ##  ## //"<<endl;
				cout<<"   //                                                                  //"<<endl;
				cout<<"   //        ## ##  ###### ##    ###### ######    ######               //"<<endl;
				cout<<"   //        ####     ##   ##    ##  ## ##____    ##  ##               //"<<endl;
				cout<<"   //        ## ##    ##   ## ## ##  ##     ##    ######               //"<<endl;
				cout<<"   //        ##  ## ###### ##### ###### ######    ##  ##               //"<<endl;
				cout<<"   //                                                                  //"<<endl;
				cout<<"   //           ##     ###### ##### ####   ##### #####                 //"<<endl;
				cout<<"   //           ##       ##   ##__# ##__#  ##_## #####                 //"<<endl;      
				cout<<"   //           ##  ##   ##   ##  # ##  #  ## ##    ##                 //"<<endl;
				cout<<"   //           ###### ###### ## ## ##  ## ## ## #####                 //"<<endl;
				cout<<"   //                                                                  //"<<endl;
				cout<<"   //////////////////////////////////////////////////////////////////////"<<endl;
				cout<<"                                                                       "<<endl;
				cout<<"                                                                       "<<endl;
				cout<<"   //////////////////////////////////////////////////////////////////////"<<endl;
				cout<<"   //                                                                  //"<<endl;
				cout<<"   //                      Cuantos Kilos Desea Convertir               //"<<endl;
				cout<<"   //                                                                  //"<<endl;
				cout<<"   //////////////////////////////////////////////////////////////////////"<<endl;
				cin>> ccc;
				
				ppp=ccc*2;
				cout<<"   //////////////////////////////////////////////////////////////////////"<<endl;
				cout<<"   //                                                                  //"<<endl;
				cout<<"   //             "<<ccc<< " Kilos Equivalen a "<<ppp<<" Libras                         //"<<endl;
				cout<<"   //                                                                  //"<<endl;
				cout<<"   //////////////////////////////////////////////////////////////////////"<<endl;
				
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"   //////////////////////////////////////////////////////////////////////"<<endl;
				cout<<"   //                                                                  //"<<endl;
				cout<<"   //       Si Desea Seguir Convirtiendo Kilos A Libras  Pulse (1)     //"<<endl;
				cout<<"   //                   Si No Pulse Lo Que Quiera                      //"<<endl;
				cout<<"   //                                                                  //"<<endl;
				cout<<"   //               ..................................                 //"<<endl;
				cin>> rere;
				
			}
			while(rere==1);
			cout<<"   //                                                                  //"<<endl;
			cout<<"   //               ..................................                 //"<<endl;
			cout<<"   //                                                                  //"<<endl;
			cout<<"   //                Si Desea Realizar Otra Operacion                  //"<<endl;
			cout<<"   //               Pulse (1) Si No Pulse Lo Que Quiera                //"<<endl;
			cout<<"   //                                                                  //"<<endl;
			cout<<"   //////////////////////////////////////////////////////////////////////"<<endl;
			cin>> milo;
			
			break;		
		
		case 11:
			do
			{
				system ("cls");
				
				cout<<"   "<<endl;
				cout<<"   "<<endl;
				cout<<"   "<<endl;
				cout<<"   //////////////////////////////////////////////////////////////////////////"<<endl;
				cout<<"   //                                                                      //"<<endl;
				cout<<"   //   ###### ###### ###  ## ##  ## ###### ###### ###### ######  ######   //"<<endl;
				cout<<"   //   ##  ## ##  ## ###  ## ##  ## ##___  ##  ##   ##     ##    ##  ##   //"<<endl;
				cout<<"   //   ##     ##  ## ## # ## ##  ## ##     #####    ##     ##    #####    //"<<endl;      
				cout<<"   //   ###### ###### ##  ###  ####  ###### ##  ##   ##   ######  ##  ##   //"<<endl;
				cout<<"   //                                                                      //"<<endl;
				cout<<"   // ## ##  ###### ##    ###### ###  ### ##### ###### #####  ###### ##### //"<<endl;
				cout<<"   // ####     ##   ##    ##  ## ## ## ## ##__    ##   ##  ## ##  ## ##___ //"<<endl;
				cout<<"   // ## ##    ##   ## ## ##  ## ##    ## ##      ##   #####  ##  ##    ## //"<<endl;
				cout<<"   // ##  ## ###### ##### ###### ##    ## #####   ##   ##  ## ###### ##### //"<<endl;
				cout<<"   //                                                                      //"<<endl;
				cout<<"   //      ######   ###### ##### ###  ## ###### ###### ###  ### #####      //"<<endl;
				cout<<"   //      ##  ##   ##     ##___ ###  ##   ##     ##   ## ## ## ##___      //"<<endl;      
				cout<<"   //      ######   ##  ## ##    ## # ##   ##     ##   ##    ## ##         //"<<endl;
				cout<<"   //      ##  ##   ###### ##### ##  ###   ##   ###### ##    ## #####      //"<<endl;
				cout<<"   //                                                                      //"<<endl;
				cout<<"   //                      ###### ##### ###### #####                       //"<<endl;
				cout<<"   //                        ##   ## ## ##  ## ##                          //"<<endl;      
				cout<<"   //                        ##   ####  ##  ##   ###                       //"<<endl;
				cout<<"   //                        ##   ## ## ###### #####                       //"<<endl;
				cout<<"   //                                                                      //"<<endl;
				cout<<"   //////////////////////////////////////////////////////////////////////////"<<endl;
				cout<<"  "<<endl;
				cout<<"  "<<endl;
				cout<<"   //////////////////////////////////////////////////////////////////////////"<<endl;
				cout<<"   //                                                                      //"<<endl;
				cout<<"   //                  Cuantos Kilometros Desea Convertir                  //"<<endl;
				cout<<"   //                                                                      //"<<endl;
				cout<<"   //                                                                      //"<<endl;
				cin>> ccc; 
				
				ppp=ccc*1000;
				
				cout<<"   //               "<<ccc<< " Kilometros Equivalen a "<<ppp<<" Centimetros             //"<<endl;
				cout<<"   //                                                                      //"<<endl;
				cout<<"   //////////////////////////////////////////////////////////////////////////"<<endl;
				
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"   //////////////////////////////////////////////////////////////////////////"<<endl;
				cout<<"   //                                                                      //"<<endl;
				cout<<"   //   Si Desea Seguir Convirtiendo Kilometros A Centimetros  Pulse (1)   //"<<endl;
				cout<<"   //                     Si No Pulse Lo Que Quiera                        //"<<endl;
				cout<<"   //                                                                      //"<<endl;
				cout<<"   //        ...................................................           //"<<endl;
				cin>> rere;
				
			}
			while(rere==1);
			cout<<"   //                                                                      //"<<endl;
			cout<<"   //          ...................................................         //"<<endl;
			cout<<"   //                                                                      //"<<endl;
			cout<<"   //                    Si Desea Realizar Otra Operacion                  //"<<endl;
			cout<<"   //                   Pulse (1) Si No Pulse Lo Que Quiera                //"<<endl;
			cout<<"   //                                                                      //"<<endl;
			cout<<"   //////////////////////////////////////////////////////////////////////////"<<endl;
			cin>> milo;
			
			break;		
		 
		case 12:
			do
			{
				system ("cls");
				cout<<"   "<<endl;
				cout<<"   "<<endl;
				cout<<"   "<<endl;
				cout<<"   /////////////////////////////////////////////////////////////////"<<endl;
				cout<<"   //                                                             //"<<endl;
				cout<<"   //    ###### ###### ###  ## ######                             //"<<endl;
				cout<<"   //    ###_   ##__   ###  ## ##  ##                             //"<<endl;
				cout<<"   //        ## ##     ## # ## ##  ##                             //"<<endl;      
				cout<<"   //    ###### ###### ##  ### ######                             //"<<endl;
				cout<<"   //                                                             //"<<endl;
				cout<<"   //   ##### ###### ##### ##### ##   ## ######                   //"<<endl;
				cout<<"   //   ## ## ##  ## ###   ##___ ###  ## ##  ##                   //"<<endl;
				cout<<"   //   ##    ##  ##    ## ##    ## #### ##  ##                   //"<<endl;
				cout<<"   //   ##### ###### ##### ##### ##   ## ######                   //"<<endl;
				cout<<"   //                                                             //"<<endl;
				cout<<"   //  ###### ###### ###  ## ###### ##### ###  ## ###### #####    //"<<endl;
				cout<<"   //    ##   ##  ## ###  ## ##     ##___ ###  ##   ##   ##___    //"<<endl;      
				cout<<"   //    ##   ###### ## # ## ## ### ##    ## # ##   ##   ##       //"<<endl;
				cout<<"   //    ##   ##  ## ##  ### ###### ##### ##  ###   ##   #####    //"<<endl;
				cout<<"   //                                                             //"<<endl;
				cout<<"   //                                                             //"<<endl;
				cout<<"   /////////////////////////////////////////////////////////////////"<<endl;
				cout<<"                                                                  "<<endl;
				cout<<"   /////////////////////////////////////////////////////////////////"<<endl;
				cout<<"   //                                                             //"<<endl;
				cout<<"   //                      Ingrese un Numero                      //"<<endl;
				cout<<"   //                                                             //"<<endl;
				cout<<"   /////////////////////////////////////////////////////////////////"<<endl;
				
				cin>> aaa;
				
				ppp=sin(aaa);
				eee=cos(aaa);
				sss=tan(aaa);
				cout<<"   /////////////////////////////////////////////////////////////////"<<endl;
				cout<<"   //                                                             //"<<endl;
				cout<<"         El Seno De "<<aaa<< " Es: "<<ppp<<"                        "<<endl;
				cout<<"   //                                                             //"<<endl;
				cout<<"   /////////////////////////////////////////////////////////////////"<<endl;
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"   /////////////////////////////////////////////////////////////////"<<endl;
				cout<<"   //                                                             //"<<endl;
				cout<<"         El Coseno De "<<aaa<< " Es: "<<eee<<"                      "<<endl;
				cout<<"   //                                                             //"<<endl;
				cout<<"   /////////////////////////////////////////////////////////////////"<<endl;
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"   /////////////////////////////////////////////////////////////////"<<endl;
				cout<<"   //                                                             //"<<endl;
				cout<<"         La Tangente De "<<aaa<< " Es: "<<sss<<"                    "<<endl;
				cout<<"   //                                                             //"<<endl;
				cout<<"   /////////////////////////////////////////////////////////////////"<<endl;
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"   /////////////////////////////////////////////////////////////////"<<endl;
				cout<<"   //                                                             //"<<endl;
				cout<<"   // Si Desea Seguir Sacando Seno, Codeno y Tangente  Pulse (1)  //"<<endl;
				cout<<"   //                Si No Pulse Lo Que Quiera                    //"<<endl;
				cout<<"   //                                                             //"<<endl;
				cout<<"   //    ...................................................      //"<<endl;
				cin>> rere;
				
			}
			while(rere==1);
			cout<<"   //                                                             //"<<endl;
			cout<<"   //    ...................................................      //"<<endl;
			cout<<"   //                                                             //"<<endl;
			cout<<"   //             Si Desea Realizar Otra Operacion                //"<<endl;
			cout<<"   //           Pulse (1) Si No Pulse Lo Que Quiera               //"<<endl;
			cout<<"   //                                                             //"<<endl;
			cout<<"   /////////////////////////////////////////////////////////////////"<<endl;
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

