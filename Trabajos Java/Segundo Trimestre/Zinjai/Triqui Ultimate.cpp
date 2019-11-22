// Triqui Echo Por Cristian Sanchez Y  Andres Martinez

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

using namespace std;

string triqui[3][3] = {"-","-","-","-","-","-","-","-","-"};
string banana[3][3] = {"1","4","7","2","5","8","3","6","9"};
int vez = 0;
int i,j,k;
int numero=0;
int numero2=0;
float x,y,aa,ale,repe ;
int vencedor=0;
int repetir=0;
string ju1;
string ju2;

//Se Juega Con lA Maquina O Con Un Amigo
void definir ()
{
	do{
		ale=0;
 cout<<""<<endl;
 cout<<""<<endl;
 cout <<"   ........................................"<< endl;
 cout<<""<<endl;
 cout<<"    Si Desea Jugar Con Un Amigo Precione 1 "<<endl;
 cout<<""<<endl;
 cout<<"    Si Desea Jugar Con La Maquina Precione "<<endl;
 cout<<"                  El Numero 2              "<<endl;
 cout<<""<<endl;
 cout <<"   ........................................"<< endl;
 cin>> aa;
 if (aa==1 or aa==2){
	 ale=2;	
 }else{
	 
	 cout<<"Solo Puede Ingresar 1 O 2"<<endl;
	 cout<<""<<endl;
	 system("pause");
	 system("cls");
 }
	}while(ale==0);	
}

//Este Es El Tablero En Limpio
void tablerolimpio()
{	for (i=0; i<3; i++){
	triqui[i][0] = "-";
}
for (j=0; j<3;j++){
	triqui[j][1] = "-";
}
for(k=0; k<3; k++){
	triqui[k][2] = "-";
}
}
//Aqui Definimos Quien Es El Ganador O Si Hubo Empate
void ganador()
{
	if((vencedor==0)or (vencedor==3)){
		for(int b=0; b <3;b++)
			if ((triqui[0][b]=="X")&&(triqui[1][b]=="X")&&(triqui[2][b]=="X")){
			  vencedor=1;
			}
		for(int b=0; b <3; b++)
			if ((triqui[b][0]=="X")&&(triqui[b][1]=="X")&&(triqui[b][2]=="X")){
				vencedor=1;
			}
		if ((triqui[0][0]=="X")&&(triqui[1][1]=="X")&&(triqui[2][2]=="X")){
			vencedor=1;
		}
		if ((triqui[0][2]=="X")&&(triqui[1][1]=="X")&&(triqui[2][0]=="X")){
			vencedor=1;
		}
		for(int z=0; z <3;z++)
			if ((triqui[0][z]=="O")&&(triqui[1][z]=="O")&&(triqui[2][z]=="O")){
				vencedor=2;
			}
		for(int z=0; z <3; z++)
			if ((triqui[z][0]=="O")&&(triqui[z][1]=="O")&&(triqui[z][2]=="O")){
				vencedor=2;
			}
		if ((triqui[0][0]=="O")&&(triqui[1][1]=="O")&&(triqui[2][2]=="O")){
			vencedor=2;
		}
		if ((triqui[0][2]=="O")&&(triqui[1][1]=="O")&&(triqui[2][0]=="O")){
			vencedor=2;
		}
	}
}
// Aqui Se Muestra El Tablero Del Triqui
void tablero()
{
	if (ale==2){
	}else{
	definir ();
	  if (aa==1){
	      do {
		      repe=0;
	          system("cls");
		      cout <<""<< endl;
		      cout <<""<< endl;
		      cout <<"   ........................................"<< endl;
		      cout <<""<< endl;
		      cout<<"              Nombre De Jugador 1           "<<endl;
		      cout <<""<< endl;
		      cout <<"   ........................................"<< endl;
		      cin>>ju1;
		      cout <<""<< endl;
		      cout <<"   ........................................"<< endl;
		      cout <<""<< endl;
		      cout<<"              Nombre De Jugador 2"<<endl;
		      cout <<""<< endl;
		      cout <<"   ........................................"<< endl;
		      cin>>ju2;
		       if (ju1==ju2){
				  cout <<""<< endl;
				  cout<<"Los Jugadores No Pueden Tener El Mismo Nombre"<<endl;
				  cout <<""<< endl;
			      system("pause");
			      repe=2;
		        }else{
		        }
	        }while(repe==2);
			system("cls");
	    }else{
	    do {
		  repe=0;
		  system("cls");
		  cout <<""<< endl;
		  cout <<""<< endl;
		  cout <<"   ........................................"<< endl;
		  cout <<""<< endl;
		  cout<<"              Nombre De Jugador 1           "<<endl;
		  cout <<""<< endl;
		  cout <<"   ........................................"<< endl;
		  cin>>ju1;
		  ju2="Maquina";
		  if (ju1=="maquina"){
			  cout <<""<< endl;
			  cout<<" El Jugador No Se Puede Llamar Maquina"<<endl;
			  cout <<""<< endl;
			  system("pause");
			  repe=2;
		  }else{
			  
		  }
	        }while(repe==2);
		  system("cls");
	  }
	
	}
	cout << ""<< endl;
	cout << ""<< endl;
	cout << ""<< endl;
	cout << "   XXXXXXX  XXXX  XXXXX  XXXXX   X   X  XXXXX   "<<endl;
	cout << "      X     X  X    X    X   X   X   X    X     "<<endl;
	cout << "      X     XXXX    X    X   X   X   X    X     "<<endl;
	cout << "      X     XX      X    X   X   X   X    X     "<<endl;
	cout << "      X     X X     X    XXXXX   X   X    X     "<<endl;
	cout << "      X     X  X  XXXXX       X  XXXXX  XXXXX   "<<endl;
	cout << ""<< endl;
	cout << "        Ingrese El Numero De La Casilla         "<< endl;
	cout << "         En Donde Desea Poner La Letra          "<< endl;
	cout << "" << endl;
	cout << "   ........................................"<< endl;
	cout << "         Solo Puede Ingresar Numeros                     Jugador "<<ju1<<" (X)"<< endl;
	cout << "   ........................................                   vs"<< endl;
	cout << "                                                         Jugador "<<ju2<<" (Y)" << endl;
 //Primera Fila
	for (i=0; i <3; i++)
	{
		if(i==0){
			cout << "           _______ ";
		}else{
			cout << " _______ ";
		}
	}
	cout << endl;
	
	for (i=0; i<3; i++)
	{
		if(i==0){
			cout << "          |       |";
		}else{
			cout << "|       |";
		}
	}
	cout << endl;
	
	for (i=0; i<3; i++)
	{
		if(i==0){
			cout << "          |       |";
		}else{
			cout << "|       |";
		}
	}
	cout << endl;
	
	for (i=0; i <3; i++)
	{  
		if (i==0){
			cout << "          |   "  << triqui[i][0] << "   |";
		}else{
			cout << "|   "  << triqui[i][0] << "   |";	
		}
	}
	cout << endl;
	
	for (i=0; i <3; i++)
	{
		if(i==0){
			cout << "          |     " << banana[i][0] << " |";
		}else{
			cout << "|     " << banana[i][0] << " |";	
		}
	}
	cout << endl;
	
	for (i=0; i<3; i++)
	{
		if(i==0){
			cout << "          |_______|";
		}else{
			cout << "|_______|";	
		}
	}
	cout << endl;
	
 //Segunda Fila
	for (j=0; j<3; j++)
	{
		if(j==0){
			cout << "          |       |";
		}else{
			cout << "|       |";
		}
	}
	cout << endl;
	
	for (j=0; j<3; j++)
	{
		if(j==0){
			cout << "          |       |";
		}else{
			cout << "|       |";
		}
	}
	cout << endl;
	
	for (j=0; j<3;j++)
	{
		if(j==0){
			cout << "          |   " << triqui[j][1] << "   |";
		}else{
			cout << "|   " << triqui[j][1] << "   |";	
		}
	}
	cout << endl;
	
	for (j=0; j<3;j++)
	{
		if(j==0){
			cout << "          |     " << banana[j][1] << " |";
		}else{
			cout << "|     " << banana[j][1] << " |";
		}
	}
	cout << endl;
	
	for (j=0; j <3; j++)
	{
		if(j==0){
			cout << "          |_______|";
		}else{
			cout << "|_______|";	
		}
	}
	cout << endl;
	
 //Tercera Fila
	for (k=0; k<3; k++)
	{
		if(k==0){
			cout << "          |       |";
		}else{
			cout << "|       |";
		}
	}
	cout << endl;
	
	for (k=0; k<3; k++)
	{
		if(k==0){
			cout << "          |       |";
		}else{
			cout << "|       |";
		}
	}
	cout << endl;
	
	for(k=0; k<3; k++)
	{
		if(k==0){
			cout << "          |   " << triqui[k][2]<< "   |";
		}else{
			cout << "|   " << triqui[k][2]<< "   |";
		}
	}
	cout << endl;
	
	for (k=0; k<3;k++)
	{
		if(k==0){
			cout << "          |     " << banana[k][2] << " |" ;
		}else{
			cout << "|     " << banana[k][2] << " |" ;	
		}
	}
	cout << endl;
	
	for (k=0; k <3; k++)
	{
		if(k==0){
			cout << "          |_______|";
		}else{
			cout << "|_______|";
		}
	}
	cout << endl;
}
// Aqui Vamos A jugar Con X
void turno1(float x)
{
	if((x>9)or(x<1))
	{   
		cout << ""<< endl;
		cout << "   ........................................"<< endl;
		cout << "   Solo Puede Ingresar Numeros Entre 1 Y 9 "<< endl;
		cout << "        Por favor intentelo de nuevo       "<< endl;
		cout << ""<< endl;
		system ("pause");
		system ("cls");
	    tablero();
		cout << "" << endl;
		cout << "   ........................................"<< endl;
		cout << "       Es El Turno del jugador "<<ju1<<" (X)"<< endl;
		cout << "   ........................................"<< endl;
		cout << "" << endl;
		numero2=0;
		vez--;
		cin >> x;
		turno1(x);
	}
	else 
		do{
		for(int a=1; a <4; a++)
			if (x == a)
			{
				if((triqui[a-1][0] == "-")&&(numero2==0))
				{
					triqui[a-1][0] = "X";
				}
				else if ((triqui[a-1][0]=="O")or(triqui[a-1][0] == "X"))
				{
					numero2=1;
				}
			}
		
		for(int a=4; a<7; a++)
			if (x == a)
			{
				if((triqui[a-4][1] == "-")&&(numero2==0))
				{
					triqui[a-4][1] = "X";
				}
				else if ((triqui[a-4][1]=="O")or(triqui[a-4][1] == "X"))
				{
					numero2=1;
				}
			}
		
		for(int a=7; a<10; a++)
			if (x == a)
			{
				if ((triqui[a-7][2] == "-")&&(numero2==0))
				{
					triqui[a-7][2] = "X";
				}
				else if ((triqui[a-7][2]=="O")or(triqui[a-7][2] == "X"))
				{
					numero2=1;
				}
			}
		
	}while(!(x<10 && x>=1));
	system("cls");
	vez++; 	
	if (numero2==1)
	{
		system("cls");
		//Mostrar Tablero
		tablero(); 
		cout << endl;
		cout << ""<< endl;
		cout << "   ........................................"<< endl;
		cout <<"             Jugador "<<ju1<<" (X)"          << endl;
		cout <<"           Esta Casilla Esta Ocupada        "<< endl;
		cout << "       ...............................     "<< endl;
		cout <<"               Intentelo De Nuevo           "<< endl;
		
		numero2=0;
		vez--; 
		cin >> x;
		turno1(x);
	}
	else
		tablero();
}
// Aqui Vamos A jugar Con O
void  turno2(float y)
{
	if ((y>9)or(y<1)) 
	{
		cout << ""<< endl;
		cout << "   ........................................"<< endl;
		cout << "   Solo Puede Ingresar Numeros Entre 1 Y 9 "<< endl;
		cout << "        Por favor intentelo de nuevo       "<< endl;
		cout << ""<< endl;
		if(aa==1){
			system ("pause");
		}else{
		}
		system ("cls");
		tablero();
		cout << "" << endl;
		cout << "   ........................................"<< endl;
		cout << "       Es El Turno del jugador "<<ju2<<" (Y)"<< endl;
		cout << "   ........................................"<< endl;
		cout << "" << endl;
		numero=0;
		vez--;
		if (aa==1){
		cin >> y;
		}else{
			y = rand() % 9;	
		}
		turno2(y);
		
	}
	else do{
		
		for(int a=1; a <4; a++)
		{
			if (y == a)
			{
				if((triqui[a-1][0] == "-") &&(numero == 0))
				{
					triqui[a-1][0] = "O";
				}
				
				else if((triqui[a-1][0] == "X")or(triqui[a-1][0] == "O"))
				{
					numero = 1;
				}
			}
		}
		
		for(int a=4; a<7; a++)
		{
			if (y == a)
			{
				if((triqui[a-4][1] == "-")&&(numero == 0))
				{
					triqui[a-4][1] = "O";
				}
				
				else if ((triqui[a-4][1] == "X")or(triqui[a-4][1] == "O"))
				{
					numero = 1;
				}
			}
		}
		for(int a=7; a<10; a++)
		{
			if (y == a)
			{
				if((triqui[a-7][2] == "-")&&(numero == 0))
				{
					triqui[a-7][2] = "O";
				}
				else if ((triqui[a-7][2] == "X")or(triqui[a-7][2] == "O"))
				{
					numero = 1;
				}
			}
		}
	}
	while(!(y<10 && y>=1));
	system("cls");
	vez++;
	if (numero == 1)
	{
		system("cls");
		tablero();
		cout << endl;
		cout << ""<< endl;
		cout << "   ........................................"<< endl;
		cout <<"             Jugador "<<ju2<<" (O)"         << endl;
		cout <<"           Esta Casilla Esta Ocupada        "<< endl;
		cout << "       ...............................     "<< endl;
		cout <<"               Intentelo De Nuevo           "<< endl;
		numero=0;
		vez--;
		if (aa==1){
			cin >> y;
		}else{
			y = rand() % 9;	
		}
		turno2(y);
	}
	else
		tablero();
}
//Esta Funcion Es Para Limpiar Todo
void limpiar()
{
	vez=0;
	vencedor=0;
	tablerolimpio();
	ale=0;
}
//Aqui Se Realiza El Juego
int main()
{
	rejuego: 
		
		while (vez<9)
		{
			system("cls");
			tablero();
			cout << "" << endl;
			cout << "   ........................................"<< endl;
			cout << "       Es El Turno del jugador "<<ju1<<" (X)"<< endl;
			cout << "   ........................................"<< endl;
			cout << "" << endl;
			cin >> x;
			turno1(x);
			ganador();
			if(vencedor==1)
			{
				cout << "" << endl;
				cout << "   ........................................"<< endl;
				cout <<"           Ha Ganado El Jugador"<<ju1<<" (X)"<< endl;
				cout << "   ........................................"<< endl;
				cout << "" << endl;
				cout << "" << endl;
				cout << "   ........................................"<< endl;
				cout << "            El Triqui A Finalizado         "<< endl;
				cout << "   ........................................"<< endl;
				cout << "" << endl;
				cout << "" << endl;
				cout << "   ........................................"<< endl;
				cout << "             Desea Volver A jugar          "<< endl;
				cout << "   ........................................"<< endl;
				cout << "" << endl;
				cout << "      Precione 1 Para Si De Lo contraro    " << endl;
				cout << "         Escriba Otro Numero O Letra       " << endl;
				cout << "" << endl;
				cin >> repetir;
				if(repetir==1)
				{
					limpiar(); 
					goto rejuego;
				}
				else if (repetir ==2)
				{
					return 0;
				}
				return 0;
			}
			if (vez<=8) 
			{
				
				cout << "" << endl;
				cout << "   ........................................"<< endl;
				cout << "      Es El Turno del jugador"<<ju2<<" (O)"<< endl;
				cout << "   ........................................"<< endl;
				cout << "" << endl;
				if (aa==1){
					cin >> y;
				}else{
					y = rand() % 9;	
				}
				turno2(y);
				ganador();
				
				if (vencedor==2)
				{
					
					cout << "" << endl;
					cout << "   ........................................"<< endl;
					cout <<"         Ha Ganado El Jugador "<<ju2<<" (O)"<< endl;
					cout << "   ........................................"<< endl;
					cout << "" << endl;
					cout << "" << endl;
					cout << "   ........................................"<< endl;
					cout << "            El Triqui A Finalizado         "<< endl;
					cout << "   ........................................"<< endl;
					cout << "" << endl;
					cout << "" << endl;
					cout << "   ........................................"<< endl;
					cout << "             Desea Volver A jugar          "<< endl;
					cout << "   ........................................"<< endl;
					cout << "" << endl;
					cout << "      Precione 1 Para Si De Lo contraro    " << endl;
					cout << "         Escriba Otro Numero O Letra       " << endl;
					cout << "" << endl;
					cin >> repetir;
					
					if(repetir==1)
					{
						limpiar();
						goto rejuego;
					}
					else if (repetir ==2)
					{
						return 0;
					}
					return 0;
				}
			}
			ganador();
		}
	
	
	if(vencedor==0)
	{
		cout << "" << endl;
		cout << "   ........................................"<< endl;
		cout << "                 Hay Un Empate             " << endl;
		cout << "" << endl;
		cout << "   ........................................"<< endl;
		cout << "            El Triqui A Finalizado         "<< endl;
		cout << "   ........................................"<< endl;
		cout << "" << endl;
		cout << "" << endl;
		cout << "   ........................................"<< endl;
		cout << "             Desea Volver A jugar          "<< endl;
		cout << "   ........................................"<< endl;
		cout << "" << endl;
		cout << "      Precione 1 Para Si De Lo contraro    " << endl;
		cout << "         Escriba Otro Numero O Letra       " << endl;
		cout << "" << endl;
		cin >> repetir;
		if(repetir==1)
		{
			limpiar(); 
			goto rejuego;
		}
		else {
			cout << "             ....................        " << endl;
			cout << "                 ............            " << endl;
			cout << "                      FIN                " << endl;
			cout << "" << endl;
			return 0;
		}
		return 0;
	}
	return 0;
} 
