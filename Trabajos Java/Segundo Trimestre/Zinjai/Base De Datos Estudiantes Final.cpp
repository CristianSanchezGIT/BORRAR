//#include <iostream>

//int main(int argc, char *argv[]) {

//return 0;
//}

#include<fstream>
#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<iomanip>
#include<stdlib.h>
#include<conio.h>
#include <windows.h> 

using namespace std;
int i,j,k;
int mue=0;
int nada=0;
int opcion;
int contador;
void ingresar();
void buscar();
void modificar();
void eliminar();
void mostrar();
void menu();
int a;
int conta=20;


string id21="0000";	
string no21="0000";
string pi21="0000";
string sa21="0000";


string no1="Cristian_Stiven_Sanchez_Rubio";
string ed1="25";
string ic1="278";
string di1="cra_26_no_43-34";
string te1="3214685623";
string co1="cristianrubio0313@hotmail.com" ;
string id1="102364549";	
string ca1="Ingenieria_Civil";
string pi1="000056";
string sa1="102";

string no2="Carlos_Alberto_Santos_perez";
string ed2="19";
string ic2="280";
string di2="cra_71_no_03-24";
string te2="3202578711";
string co2="calbertosantos@hotmail.com" ;
string id2="102374012";	
string ca2="Ingenieria_Industrial";
string pi2="000087";
string sa2="300";

string no3="Juan_Carlos_Narvaez_Uribe";
string ed3="26";
string ic3="263";
string di3="calle_57_no_10-20";
string te3="3214685623";
string co3="juancanarvaez@gmail.com" ;
string id3="102351046";	
string ca3="Ingenieria_de_Sistemas";
string pi3="000073";
string sa3="202";


string no4="Luis_Eduardo_Moreno_Jimenez";
string ed4="18";
string ic4="236";
string di4="calle_90_no_45-49";
string te4="3183001407";
string co4="luiseduardomj@hotmail.com" ;
string id4="102397884";
string ca4="Ingenieria_Mecatronica";
string pi4="000079";
string sa4="105 ";

string no5="Sandra_Milena_Ardila_Castro";
string ed5="19";
string ic5="294";
string di5="cra_72_no_03-10";
string te5="3218745106";
string co5="ardilasami@gmail.com" ;
string id5="102301478";	
string ca5="Arquitectura";
string pi5="000020";
string sa5="210";

string no6="Laura_Sofia_Vaquero_Torres";
string ed6="24";
string ic6="285";
string di6="calle_64_no_28-30";
string te6="314321457";
string co6="laurasofiavato@hotmail.com" ;
string id6="102330326";	
string ca6="Ingenieria_Mecanica";
string pi6="000011";
string sa6="320";


string no7="Jhon_Fredy_Valencia_Espitia";
string ed7="18";
string ic7="222";
string di7="cra_43_no_43-50";
string te7="3211446352";
string co7="jfvalencia@gmail.com" ;
string id7="102345784";	
string ca7="Ingenieria_Ambiental";
string pi7="000098";
string sa7="408";

string no8="Karol_Dayana_Rodriguez_Soler";
string ed8="20";
string ic8="288";
string di8="calle_50_no_39-40";
string te8="3162015484";
string co8="rodriguezsolerkada@hotmail.com" ;
string id8="102397879";	
string ca8="Ingenieria_Aeronautica";
string pi8="000077";
string sa8="102";

string no9="Daniel_Stiven_Guerrero_Cruz";
string ed9="22";
string ic9="203";
string di9="cra_57_no_34-14";
string te9="31303365987";
string co9="daniguerrerocruz@yahoo.com" ;
string id9="102310429";	
string ca9="Ingenieria_Agricola";
string pi9="000037";
string sa9="100";

string no10="Martin_David_Herrera_Campos";
string ed10="21";
string ic10="287";
string di10="calle_60_no_70-20";
string te10="31011224875";
string co10="martinherrera@hotmail.com";
string id10="102385213";	
string ca10="Ingenieria_Quimica";
string pi10="000041";
string sa10="145";


string no11="Lina_Marcela_Huertas_Maecha";
string ed11="21";
string ic11="275";
string di11="cra 33 no 02-25";
string te11="3162810644";
string co11="hmarcela@gmail.com";
string id11="02373195";	
string ca11="Ingenieria_De_minas";
string pi11="000058";
string sa11="225";

string no12="Leidy_Andrea_Medina_Ospina";
string ed12="20";
string ic12="312";
string di12="calle_87_no_11-22";
string te12="3210024578";
string co12="medinaospinaleidy@yahoo.es";
string id12="102382460";
string ca12="Arqueologia";
string pi12="000063";
string sa12="160";


string no13="Anguie_Alexandra_Carranza_yate";
string ed13="19";
string ic13="250";
string di13="cra_68_no_83-44";
string te13="3185024761";
string co13="alexacarranzay@yahoo.com";
string id13="102307195";	
string ca13="Economia";
string pi13="000034";
string sa13="107";


string no14="kevin_Andres_Silva_Prieto";
string ed14="25";
string ic14="320";
string di14="calle_64_no_70-47";
string te14="3112458702";
string co14="kasilvaprieto@hotmail.com";
string id14="102336410";	
string ca14="Enfermeria";
string pi14="000060";
string sa14="115";

string no15="Claudia_Patricia_Corredor_Novoa";
string ed15="23";
string ic15="315";
string di15="cra_31_no_13-38 ";
string te15="3132877994";
string co15="patriciacorredorno@gmail.com";
string id15="102302573";	
string ca15="gastronomia";
string pi15="000075";
string sa15="111";

string no16="Adrian_Fabian_Castillo_Paez";
string ed16="24";
string ic16="304";
string di16="calle_75_no_10-23 ";
string te16="3202104578";
string co16="paezadrianca@hotmail.com";
string id16="102366478";	
string ca16="Ingenieria automotriz";
string pi16="000088 ";
string sa16="102";

string no17="Juan_Sebastian_Navarro_Alvares";
string ed17="20";
string ic17="279";
string di17="cra_85_no_45-54 ";
string te17="3152041978";
string co17="navarrojuanse@gmail.com";
string id17="102344188";
string ca17="Periodismo";
string pi17="000092";
string sa17="107";

string no18="luis_Alberto_Olaya_Alarcon";
string ed18="22";
string ic18="293";
string di18="calle_77_no_60-20 ";
string te18="3103457891";
string co18="luisalbertolaya@hotmail.com";
string id18="102379128";
string ca18="Ingenieria_Textil";
string pi18="000047";
string sa18="117";


string no19="Cristina_Maria_Aguilar_Pulido";
string ed19="18";
string ic19="310";
string di19="cra_98_no_53-30 ";
string te19="3196487142";
string co19="pulidocristina@gmail.com";
string id19="102377301";
string ca19="Ingenieria_Genetica";
string pi19="000059";
string sa19="126 ";

string no20="Mateo_Alejandro_Rubiano_Rico";
string ed20="19";
string ic20="226";
string di20="calle_47_no_98-20";
string te20="3145784627";
string co20="malejorubiano@hotmail.com";
string id20="102340121";
string ca20="Psicologia";
string pi20="000004";
string sa20="115"; 

struct Lista_Estudiantil{
	char l_estudiatil [1];
	char nombre[50];
	char edad[20];
	char icfes[20];
	char direccion[50];
	char telefono[50];
	char correo[50];
	char id[50];
	char carrera[50];
	char pin[20];
	char salon[20];
	
};
Lista_Estudiantil dato[15];
char cmp[99];//Dato para comparar cadenas en busquedas

int main(){
	
	system("color f0");
	contador=1;
	a=0;
	system("cls");
	menu();
}
void listas (){
	(dato[contador].l_estudiatil);
	(dato[contador].nombre==no1);
	(dato[contador].edad)==ed1;
	(dato[contador].icfes)==ic1;
	(dato[contador].direccion)==di1;
	(dato[contador].telefono)==te1;
	(dato[contador].correo)==co1;
	(dato[contador].id)==id1;
	(dato[contador].carrera)==ca1;
	(dato[contador].pin)==pi1;
	(dato[contador].salon)==sa1;
	contador++;
}

void menu(){
	do{
		int j,i;
		system("cls");
		cout<<""<<endl;
		cout<<""<<endl;
		for (i=0; i<6; i++){
			if (i==0 or i==5){
				for (j=0; j<15; j++){
					if (j==0){
						cout<<"      //";
					}else{
						if (j==14){
							cout<<"///"<<endl;
						}else{
							cout<<"///";
						}
					}
				}
			}else{
				if (i==3){ 
					cout<<"      //  Base De Datos Estudiantes Universidad //"<<endl;
				}else{
					cout<<"      //                                        //"<<endl;
				}
			}
			
		}
		cout<<""<<endl;
		cout<<""<<endl;
		cout<<"       Seleccione La Operacion Que Desea Realizar"<<endl;
		cout<<"        O Seleccione 7 Para Finalizar El Programa"<<endl;
		cout<<"      ____________________________________________"<<endl;
		cout<<""<<endl;
		cout<<""<<endl;
		cout<<""<<endl;
		
		for (i=0; i<14; i++){
			if (i==0){
				cout<<"       XXX";
			}else{
				if (i==13){
					cout<<"XXX"<<endl;;
				}else{
					cout<<"XXX";  
				}
			}
		}
		cout<<"       XX                                      XX"<<endl;
		cout<<"       XX    Visualizar Los Datos Existentes   XX"<<endl;
		cout<<"       XX                                      XX"<<endl;
		for (i=0; i<14; i++){
			if (i==0){
				cout<<"       XXX";
			}else{
				if (i==13){
					cout<<"XXX"<<endl;;
				}else{
					cout<<"XXX";  
				}
			}
		}
		cout<<"                            0"<<endl;
		cout<<""<<endl;
		for (i=0; i<7; i++){
			if(i==0 or i==6){
				for (j=0; j<4; j++){
					if(j==0){
						cout<<"     XXXXXXXXXXX ";
					}else{
						if (j==3){
							cout<<"XXXXXXXXXXX "<<endl;  	
						}else{
							cout<<"XXXXXXXXXXX ";   
						}
					}
				}
			}else{
				if(i==1 or i==2 or i==4 or i==5){
					for (j=0; j<4; j++){
						if(j==0){
							cout<<"     X         X ";
						}else{
							if(j==3){
								cout<<"X         X "<<endl; 
							}else{
								cout<<"X         X "; 
							}
						}
					}  
				}else{
					
					cout<<"     X  Crear  X X Buscar  X XActalizarX X Borrar  X"<<endl;
				}
			}
		}
		cout<<"          1          2            3           4     "<<endl;
		cin>>opcion;
		switch(opcion){
		case 1:{
			system("cls");
			if (conta>=20){
				cout<<""<<endl;
				for (i=0; i<19; i++){
					if (i==0){
						cout<<"    .."; 
					}else{
						cout<<"..";    
					}
				}
				cout<<""<<endl;
				cout<<"    ..                                  .."<<endl;
				cout<<"    .. Ya Existen 20 Datos Debe Borrar  .."<<endl;
				cout<<"    .. Uno Antes De Crear Un Nuevo Dato .."<<endl;
				cout<<"    ..                                  .."<<endl;
				for (i=0; i<19; i++){
					if (i==0){
						cout<<"    .."; 
					}else{
						cout<<"..";   
					}
				}
			}else{
				cout<<""<<endl;
				ingresar ();
			}
			cout<<""<<endl;
			cout<<""<<endl;
			system("pause");
			break;
		}//case 1 switch1
		case 2:{
			buscar();
			break;
		}//case 2 switch1
		case 3:{
			modificar();
			break;
		}//case 3 switch1
		case 4:{
			eliminar();
			break;
		}//case 4 switch1
		case 0:{
			mostrar();
			break;
		}
		default:{
			if (opcion==7){
				
			}else{
				cout<<""<<endl;
				cout<<"   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<"   .  Opcion No Valida Intentelo De Nuevo  ."<<endl;
				cout<<"   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<""<<endl;
				system("pause");
			}
		}
		}//fin de switch
	}while(opcion!=7);
}//fin de la funcion menu

void ingresar(){
	
	system("cls");
	cout<<""<<endl;
	cout<<""<<endl;
	for (i=0; i<20; i++){
		if(i==0){
			cout<<"                   .....";	
		}else{
			if(i==19){
				cout<<".."<<endl;	
			}else{
				cout<<"..";
			}
		}
	}
	cout<<"                   ..       Listado de Estudiantes          .."<<endl;
	cout<<"                   ..            Universidad                .."<<endl;
	for (i=0; i<20; i++){
		if(i==0){
			cout<<"                   .....";	
		}else{
			if(i==19){
				cout<<".."<<endl;	
			}else{
				cout<<"..";
			}
		}
	}
	cout<<""<<endl;
	cout<<""<<endl;
	for (i=0; i<20; i++){
		if(i==0){
			cout<<"                   ----";	
		}else{
			if(i==19){
				cout<<"--"<<endl;	
			}else{
				cout<<"--";
			}
		}
	}
	cout<<"                   --     Despues De Crear El Dato Este    --"<<endl;
	cout<<"                   --        No Podra Ser Eliminado        --"<<endl;
	cout<<"                   --         Pero Si Actuallizado         --"<<endl;
	for (i=0; i<20; i++){
		if(i==0){
			cout<<"                   ----";	
		}else{
			if(i==19){
				cout<<"--"<<endl;	
			}else{
				cout<<"--";
			}
		}
	}
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	gets(dato[contador].l_estudiatil);
	
	for (i=0; i<20; i++){
		if(i==0){
			cout<<"                    ...";	
		}else{
			if(i==19){
				cout<<".."<<endl;	
			}else{
				cout<<"..";
			}
		}
	}
	cout<<"                    .. Nombre Completo                     ..   "<<endl;
	for (i=0; i<20; i++){
		if(i==0){
			cout<<"                    ...";	
		}else{
			if(i==19){
				cout<<".."<<endl;	
			}else{
				cout<<"..";
			}
		}
	}
	gets (dato[contador].nombre);
	
	for (i=0; i<20; i++){
		if(i==0){
			cout<<"                    ...";	
		}else{
			if(i==19){
				cout<<".."<<endl;	
			}else{
				cout<<"..";
			}
		}
	}
	cout<<"                    ..   Edad                              ..   "<<endl;
	for (i=0; i<20; i++){
		if(i==0){
			cout<<"                    ...";	
		}else{
			if(i==19){
				cout<<".."<<endl;	
			}else{
				cout<<"..";
			}
		}
	}
	gets(dato[contador].edad);
	
	for (i=0; i<20; i++){
		if(i==0){
			cout<<"                    ...";	
		}else{
			if(i==19){
				cout<<".."<<endl;	
			}else{
				cout<<"..";
			}
		}
	}
	cout<<"                    ..   Resultado de la prueba del icfes  ..   "<<endl;
	for (i=0; i<20; i++){
		if(i==0){
			cout<<"                    ...";	
		}else{
			if(i==19){
				cout<<".."<<endl;	
			}else{
				cout<<"..";
			}
		}
	}
	gets(dato[contador].icfes);
	
	for (i=0; i<20; i++){
		if(i==0){
			cout<<"                    ...";	
		}else{
			if(i==19){
				cout<<".."<<endl;	
			}else{
				cout<<"..";
			}
		}
	}
	cout<<"                    ..   Direccion                         ..   "<<endl;
	for (i=0; i<20; i++){
		if(i==0){
			cout<<"                    ...";	
		}else{
			if(i==19){
				cout<<".."<<endl;	
			}else{
				cout<<"..";
			}
		}
	}
	gets(dato[contador].direccion);
	
	for (i=0; i<20; i++){
		if(i==0){
			cout<<"                    ...";	
		}else{
			if(i==19){
				cout<<".."<<endl;	
			}else{
				cout<<"..";
			}
		}
	}
	cout<<"                    ..   Numero Telefonico                 ..   "<<endl;
	for (i=0; i<20; i++){
		if(i==0){
			cout<<"                    ...";	
		}else{
			if(i==19){
				cout<<".."<<endl;	
			}else{
				cout<<"..";
			}
		}
	}
	gets(dato[contador].telefono);
	
	for (i=0; i<20; i++){
		if(i==0){
			cout<<"                    ...";	
		}else{
			if(i==19){
				cout<<".."<<endl;	
			}else{
				cout<<"..";
			}
		}
	}
	cout<<"                    ..   Correo electronico                ..   "<<endl;
	for (i=0; i<20; i++){
		if(i==0){
			cout<<"                    ...";	
		}else{
			if(i==19){
				cout<<".."<<endl;	
			}else{
				cout<<"..";
			}
		}
	}
	gets(dato[contador].correo);
	
	for (i=0; i<20; i++){
		if(i==0){
			cout<<"                    ...";	
		}else{
			if(i==19){
				cout<<".."<<endl;	
			}else{
				cout<<"..";
			}
		}
	}
	cout<<"                    ..   Numero de documento               ..   "<<endl;
	for (i=0; i<20; i++){
		if(i==0){
			cout<<"                    ...";	
		}else{
			if(i==19){
				cout<<".."<<endl;	
			}else{
				cout<<"..";
			}
		}
	}
	gets(dato[contador].id);
	
	for (i=0; i<20; i++){
		if(i==0){
			cout<<"                    ...";	
		}else{
			if(i==19){
				cout<<".."<<endl;	
			}else{
				cout<<"..";
			}
		}
	}
	cout<<"                    ..   Nombre carrera                    ..   "<<endl;
	for (i=0; i<20; i++){
		if(i==0){
			cout<<"                    ...";	
		}else{
			if(i==19){
				cout<<".."<<endl;	
			}else{
				cout<<"..";
			}
		}
	}
	gets(dato[contador].carrera);
	
	
	for (i=0; i<20; i++){
		if(i==0){
			cout<<"                    ...";	
		}else{
			if(i==19){
				cout<<".."<<endl;	
			}else{
				cout<<"..";
			}
		}
	}
	cout<<"                    ..   Pin de inscripcion                ..   "<<endl;
	for (i=0; i<20; i++){
		if(i==0){
			cout<<"                    ...";	
		}else{
			if(i==19){
				cout<<".."<<endl;	
			}else{
				cout<<"..";
			}
		}
	}
	gets(dato[contador].pin);
	
	for (i=0; i<20; i++){
		if(i==0){
			cout<<"                    ...";	
		}else{
			if(i==19){
				cout<<".."<<endl;	
			}else{
				cout<<"..";
			}
		}
	}
	cout<<"                    ..   Numero de salon                   ..   "<<endl;
	for (i=0; i<20; i++){
		if(i==0){
			cout<<"                    ...";	
		}else{
			if(i==19){
				cout<<".."<<endl;	
			}else{
				cout<<"..";
			}
		}
	}
	gets(dato[contador].salon);
	
	contador++;
	//verificamos cuantos datos existen
	conta=0;
	
	for (int m=0;m<=contador;m++){
		if (m==0){
			if (id1=="0000"){
				
			}else{
				conta=conta+1;
			}
			
			if (id2=="0000"){
				
			}else{
				conta=conta+1;
			}
			
			if (id3=="0000"){
				
			}else{
				conta=conta+1;
			}
			
			if (id4=="0000"){
				
			}else{
				conta=conta+1;
			}
			
			if (id5=="0000"){
				
			}else{
				conta=conta+1;
			}
			
			if (id6=="0000"){
				
			}else{
				conta=conta+1;
			}
			
			if (id7=="0000"){
				
			}else{
				conta=conta+1;
			}
			
			if (id8=="0000"){
				
			}else{
				conta=conta+1;
			}
			
			if (id9=="0000"){
				
			}else{
				conta=conta+1;
			}
			
			if (id10=="0000"){
				
			}else{
				conta=conta+1;
			}
			
			if (id11=="0000"){
				
			}else{
				conta=conta+1;
			}
			
			if (id12=="0000"){
				
			}else{
				conta=conta+1;
			}
			
			if (id13=="0000"){
				
			}else{
				conta=conta+1;
			}
			
			if (id14=="0000"){
				
			}else{
				conta=conta+1;
			}
			
			if (id15=="0000"){
				
			}else{
				conta=conta+1;
			}
			
			if (id16=="0000"){
				
			}else{
				conta=conta+1;
			}
			
			if (id17=="0000"){
				
			}else{
				conta=conta+1;
			}
			
			if (id18=="0000"){
				
			}else{
				conta=conta+1;
			}
			
			if (id19=="0000"){
				
			}else{
				conta=conta+1;
			}
			
			if (id20=="0000"){
				
			}else{
				conta=conta+1;
			}
		}else{
			if (m==contador){
				
			}else{
				conta=conta+1;
			}
		}
	}
	
	
}//fin de crear

void buscar(){
	int op,rr;
	do{
		system("cls");
		cout<<""<<endl; 
		cout<<""<<endl; 
		for (i=0; i<20; i++){
			if(i==0){
				cout<<"                    ...";	
			}else{
				if(i==19){
					cout<<".."<<endl;	
				}else{
					cout<<"..";
				}
			}
		}
		cout<<"                    ..           Que Desea Buscar?         ..   "<<endl; 
		for (i=0; i<20; i++){
			if(i==0){
				cout<<"                    ...";	
			}else{
				if(i==19){
					cout<<".."<<endl;	
				}else{
					cout<<"..";
				}
			}
		}
		cout<<""<<endl; 
		cout<<"                           Seleccione El Numero De La           "<<endl; 
		cout<<"                            Opcion Que Desea Buscar             "<<endl; 
		cout<<"                            -----------------------             "<<endl; 
		cout<<""<<endl; 
		for (i=0; i<20; i++){
			if(i==0){
				cout<<"                    ...";	
			}else{
				if(i==19){
					cout<<".."<<endl;	
				}else{
					cout<<"..";
				}
			}
		}
		cout<<"                    ..  1. Identificacion                  ..   "<<endl;
		for (i=0; i<20; i++){
			if(i==0){
				cout<<"                    ...";	
			}else{
				if(i==19){
					cout<<".."<<endl;	
				}else{
					cout<<"..";
				}
			}
		} 
		cout<<"                    ..  2. Nombre                          ..   "<<endl; 
		for (i=0; i<20; i++){
			if(i==0){
				cout<<"                    ...";	
			}else{
				if(i==19){
					cout<<".."<<endl;	
				}else{
					cout<<"..";
				}
			}
		}
		cout<<"                    ..  3. Salon                           ..   "<<endl; 
		for (i=0; i<20; i++){
			if(i==0){
				cout<<"                    ...";	
			}else{
				if(i==19){
					cout<<".."<<endl;	
				}else{
					cout<<"..";
				}
			}
		}
		cout<<"                    ..  4. Pin                             ..   "<<endl; 
		for (i=0; i<20; i++){
			if(i==0){
				cout<<"                    ...";	
			}else{
				if(i==19){
					cout<<".."<<endl;	
				}else{
					cout<<"..";
				}
			}
		}
		cin>>op;
		rr=0;
		switch(op){
		case 1:{
			mue=0;
			system("cls");
			cout<<""<<endl;
			for (i=0; i<20; i++){
				if(i==0){
					cout<<"                    ...";	
				}else{
					if(i==19){
						cout<<".."<<endl;	
					}else{
						cout<<"..";
					}
				}
			}
			cout<<"                    ..        Ingrese Identificacion       ..   "<<endl; 
			for (i=0; i<20; i++){
				if(i==0){
					cout<<"                    ...";	
				}else{
					if(i==19){
						cout<<".."<<endl;	
					}else{
						cout<<"..";
					}
				}
			}
			cin>>(cmp);
			
			for(int i=0;i<=contador;i++){
				if(strcmp(dato[i].id,cmp)==0){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<dato[i].nombre<<endl;
					cout<<"        Edad:                               "<<dato[i].edad<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<dato[i].icfes<<endl;
					cout<<"        Direccion:                          "<<dato[i].direccion<<endl;
					cout<<"        Numero Telefonico:                  "<<dato[i].telefono<<endl;
					cout<<"        Correo electronico:                 "<<dato[i].correo<<endl;
					cout<<"        Numero de documento:                "<<dato[i].id<<endl;
					cout<<"        Nombre carrera:                     "<<dato[i].carrera<<endl;
					cout<<"        Pin de inscripcion:                 "<<dato[i].pin<<endl;
					cout<<"        Numero de salon:                    "<<dato[i].salon<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}//fin de condicional for
				
			}//fin de ciclo for
			if (cmp==id21){
				cout<<""<<endl;
				cout<<"                  .............................................."<<endl; 
				cout<<"                  ..  Este Id  Es Invaldo Intentelo De Nuevo  .."<<endl; 
				cout<<"                  .............................................."<<endl; 
				cout<<""<<endl;
			}else{
				if(cmp==id1){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no1<<endl;
					cout<<"        Edad:                               "<<ed1<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic1<<endl;
					cout<<"        Direccion:                          "<<di1<<endl;
					cout<<"        Numero Telefonico:                  "<<te1<<endl;
					cout<<"        Correo electronico:                 "<<co1<<endl;
					cout<<"        Numero de documento:                "<<id1<<endl;
					cout<<"        Nombre carrera:                     "<<ca1<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi1<<endl;
					cout<<"        Numero de salon:                    "<<sa1<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					if(cmp==id2){
						
						cout<<"   ............................................................................   "<<endl;
						cout<<"        Nombre completo:                    "<<no2<<endl;
						cout<<"        Edad:                               "<<ed2<<endl;
						cout<<"        Resultado de la prueba del icfes:   "<<ic2<<endl;
						cout<<"        Direccion:                          "<<di2<<endl;
						cout<<"        Numero Telefonico:                  "<<te2<<endl;
						cout<<"        Correo electronico:                 "<<co2<<endl;
						cout<<"        Numero de documento:                "<<id2<<endl;
						cout<<"        Nombre carrera:                     "<<ca2<<endl;
						cout<<"        Pin de inscripcion:                 "<<pi2<<endl;
						cout<<"        Numero de salon:                    "<<sa2<<endl;
						cout<<"   ............................................................................   "<<endl;
						mue=1;
					}else{
						if(cmp==id3){
							
							cout<<"   ............................................................................   "<<endl;
							cout<<"        Nombre completo:                    "<<no3<<endl;
							cout<<"        Edad:                               "<<ed3<<endl;
							cout<<"        Resultado de la prueba del icfes:   "<<ic3<<endl;
							cout<<"        Direccion:                          "<<di3<<endl;
							cout<<"        Numero Telefonico:                  "<<te3<<endl;
							cout<<"        Correo electronico:                 "<<co3<<endl;
							cout<<"        Numero de documento:                "<<id3<<endl;
							cout<<"        Nombre carrera:                     "<<ca3<<endl;
							cout<<"        Pin de inscripcion:                 "<<pi3<<endl;
							cout<<"        Numero de salon:                    "<<sa3<<endl;
							cout<<"   ............................................................................   "<<endl;
							mue=1;
						}else{
							if(cmp==id4){
								
								cout<<"   ............................................................................   "<<endl;
								cout<<"        Nombre completo:                    "<<no4<<endl;
								cout<<"        Edad:                               "<<ed4<<endl;
								cout<<"        Resultado de la prueba del icfes:   "<<ic4<<endl;
								cout<<"        Direccion:                          "<<di4<<endl;
								cout<<"        Numero Telefonico:                  "<<te4<<endl;
								cout<<"        Correo electronico:                 "<<co4<<endl;
								cout<<"        Numero de documento:                "<<id4<<endl;
								cout<<"        Nombre carrera:                     "<<ca4<<endl;
								cout<<"        Pin de inscripcion:                 "<<pi4<<endl;
								cout<<"        Numero de salon:                    "<<sa4<<endl;
								cout<<"   ............................................................................   "<<endl;
								mue=1;
							}else{
								if(cmp==id5){
									
									cout<<"   ............................................................................   "<<endl;
									cout<<"        Nombre completo:                    "<<no5<<endl;
									cout<<"        Edad:                               "<<ed5<<endl;
									cout<<"        Resultado de la prueba del icfes:   "<<ic5<<endl;
									cout<<"        Direccion:                          "<<di5<<endl;
									cout<<"        Numero Telefonico:                  "<<te5<<endl;
									cout<<"        Correo electronico:                 "<<co5<<endl;
									cout<<"        Numero de documento:                "<<id5<<endl;
									cout<<"        Nombre carrera:                     "<<ca5<<endl;
									cout<<"        Pin de inscripcion:                 "<<pi5<<endl;
									cout<<"        Numero de salon:                    "<<sa5<<endl;
									cout<<"   ............................................................................   "<<endl;
									mue=1;
								}else{
									if(cmp==id6){
										
										cout<<"   ............................................................................   "<<endl;
										cout<<"        Nombre completo:                    "<<no6<<endl;
										cout<<"        Edad:                               "<<ed6<<endl;
										cout<<"        Resultado de la prueba del icfes:   "<<ic6<<endl;
										cout<<"        Direccion:                          "<<di6<<endl;
										cout<<"        Numero Telefonico:                  "<<te6<<endl;
										cout<<"        Correo electronico:                 "<<co6<<endl;
										cout<<"        Numero de documento:                "<<id6<<endl;
										cout<<"        Nombre carrera:                     "<<ca6<<endl;
										cout<<"        Pin de inscripcion:                 "<<pi6<<endl;
										cout<<"        Numero de salon:                    "<<sa6<<endl;
										cout<<"   ............................................................................   "<<endl;
										mue=1;
									}else{
										if(cmp==id7){
											
											cout<<"   ............................................................................   "<<endl;
											cout<<"        Nombre completo:                    "<<no7<<endl;
											cout<<"        Edad:                               "<<ed7<<endl;
											cout<<"        Resultado de la prueba del icfes:   "<<ic7<<endl;
											cout<<"        Direccion:                          "<<di7<<endl;
											cout<<"        Numero Telefonico:                  "<<te7<<endl;
											cout<<"        Correo electronico:                 "<<co7<<endl;
											cout<<"        Numero de documento:                "<<id7<<endl;
											cout<<"        Nombre carrera:                     "<<ca7<<endl;
											cout<<"        Pin de inscripcion:                 "<<pi7<<endl;
											cout<<"        Numero de salon:                    "<<sa7<<endl;
											cout<<"   ............................................................................   "<<endl;
											mue=1;
										}else{
											if(cmp==id8){
												
												cout<<"   ............................................................................   "<<endl;
												cout<<"        Nombre completo:                    "<<no8<<endl;
												cout<<"        Edad:                               "<<ed8<<endl;
												cout<<"        Resultado de la prueba del icfes:   "<<ic8<<endl;
												cout<<"        Direccion:                          "<<di8<<endl;
												cout<<"        Numero Telefonico:                  "<<te8<<endl;
												cout<<"        Correo electronico:                 "<<co8<<endl;
												cout<<"        Numero de documento:                "<<id8<<endl;
												cout<<"        Nombre carrera:                     "<<ca8<<endl;
												cout<<"        Pin de inscripcion:                 "<<pi8<<endl;
												cout<<"        Numero de salon:                    "<<sa8<<endl;
												cout<<"   ............................................................................   "<<endl;
												mue=1;
											}else{
												if(cmp==id9){
													
													cout<<"   ............................................................................   "<<endl;
													cout<<"        Nombre completo:                    "<<no9<<endl;
													cout<<"        Edad:                               "<<ed9<<endl;
													cout<<"        Resultado de la prueba del icfes:   "<<ic9<<endl;
													cout<<"        Direccion:                          "<<di9<<endl;
													cout<<"        Numero Telefonico:                  "<<te9<<endl;
													cout<<"        Correo electronico:                 "<<co9<<endl;
													cout<<"        Numero de documento:                "<<id9<<endl;
													cout<<"        Nombre carrera:                     "<<ca9<<endl;
													cout<<"        Pin de inscripcion:                 "<<pi9<<endl;
													cout<<"        Numero de salon:                    "<<sa9<<endl;
													cout<<"   ............................................................................   "<<endl;
													mue=1;
												}else{
													if(cmp==id10){
														
														cout<<"   ............................................................................   "<<endl;
														cout<<"        Nombre completo:                    "<<no10<<endl;
														cout<<"        Edad:                               "<<ed10<<endl;
														cout<<"        Resultado de la prueba del icfes:   "<<ic10<<endl;
														cout<<"        Direccion:                          "<<di10<<endl;
														cout<<"        Numero Telefonico:                  "<<te10<<endl;
														cout<<"        Correo electronico:                 "<<co10<<endl;
														cout<<"        Numero de documento:                "<<id10<<endl;
														cout<<"        Nombre carrera:                     "<<ca10<<endl;
														cout<<"        Pin de inscripcion:                 "<<pi10<<endl;
														cout<<"        Numero de salon:                    "<<sa10<<endl;
														cout<<"   ............................................................................   "<<endl;
														mue=1;
													}else{
														if(cmp==id11){
															
															cout<<"   ............................................................................   "<<endl;
															cout<<"        Nombre completo:                    "<<no11<<endl;
															cout<<"        Edad:                               "<<ed11<<endl;
															cout<<"        Resultado de la prueba del icfes:   "<<ic11<<endl;
															cout<<"        Direccion:                          "<<di11<<endl;
															cout<<"        Numero Telefonico:                  "<<te11<<endl;
															cout<<"        Correo electronico:                 "<<co11<<endl;
															cout<<"        Numero de documento:                "<<id11<<endl;
															cout<<"        Nombre carrera:                     "<<ca11<<endl;
															cout<<"        Pin de inscripcion:                 "<<pi11<<endl;
															cout<<"        Numero de salon:                    "<<sa11<<endl;
															cout<<"   ............................................................................   "<<endl;
															mue=1;
														}else{
															if(cmp==id12){
																
																cout<<"   ............................................................................   "<<endl;
																cout<<"        Nombre completo:                    "<<no12<<endl;
																cout<<"        Edad:                               "<<ed12<<endl;
																cout<<"        Resultado de la prueba del icfes:   "<<ic12<<endl;
																cout<<"        Direccion:                          "<<di12<<endl;
																cout<<"        Numero Telefonico:                  "<<te12<<endl;
																cout<<"        Correo electronico:                 "<<co12<<endl;
																cout<<"        Numero de documento:                "<<id12<<endl;
																cout<<"        Nombre carrera:                     "<<ca12<<endl;
																cout<<"        Pin de inscripcion:                 "<<pi12<<endl;
																cout<<"        Numero de salon:                    "<<sa12<<endl;
																cout<<"   ............................................................................   "<<endl;
																mue=1;
															}else{
																if(cmp==id13){
																	
																	cout<<"   ............................................................................   "<<endl;
																	cout<<"        Nombre completo:                    "<<no13<<endl;
																	cout<<"        Edad:                               "<<ed13<<endl;
																	cout<<"        Resultado de la prueba del icfes:   "<<ic13<<endl;
																	cout<<"        Direccion:                          "<<di13<<endl;
																	cout<<"        Numero Telefonico:                  "<<te13<<endl;
																	cout<<"        Correo electronico:                 "<<co13<<endl;
																	cout<<"        Numero de documento:                "<<id13<<endl;
																	cout<<"        Nombre carrera:                     "<<ca13<<endl;
																	cout<<"        Pin de inscripcion:                 "<<pi13<<endl;
																	cout<<"        Numero de salon:                    "<<sa13<<endl;
																	cout<<"   ............................................................................   "<<endl;
																	mue=1;
																}else{
																	if(cmp==id14){
																		
																		cout<<"   ............................................................................   "<<endl;
																		cout<<"        Nombre completo:                    "<<no14<<endl;
																		cout<<"        Edad:                               "<<ed14<<endl;
																		cout<<"        Resultado de la prueba del icfes:   "<<ic14<<endl;
																		cout<<"        Direccion:                          "<<di14<<endl;
																		cout<<"        Numero Telefonico:                  "<<te14<<endl;
																		cout<<"        Correo electronico:                 "<<co14<<endl;
																		cout<<"        Numero de documento:                "<<id14<<endl;
																		cout<<"        Nombre carrera:                     "<<ca14<<endl;
																		cout<<"        Pin de inscripcion:                 "<<pi14<<endl;
																		cout<<"        Numero de salon:                    "<<sa14<<endl;
																		cout<<"   ............................................................................   "<<endl;
																		mue=1;
																	}else{
																		if(cmp==id15){
																			
																			cout<<"   ............................................................................   "<<endl;
																			cout<<"        Nombre completo:                    "<<no15<<endl;
																			cout<<"        Edad:                               "<<ed15<<endl;
																			cout<<"        Resultado de la prueba del icfes:   "<<ic15<<endl;
																			cout<<"        Direccion:                          "<<di15<<endl;
																			cout<<"        Numero Telefonico:                  "<<te15<<endl;
																			cout<<"        Correo electronico:                 "<<co15<<endl;
																			cout<<"        Numero de documento:                "<<id15<<endl;
																			cout<<"        Nombre carrera:                     "<<ca15<<endl;
																			cout<<"        Pin de inscripcion:                 "<<pi15<<endl;
																			cout<<"        Numero de salon:                    "<<sa15<<endl;
																			cout<<"   ............................................................................   "<<endl;
																			mue=1;
																		}else{
																			if(cmp==id16){
																				
																				cout<<"   ............................................................................   "<<endl;
																				cout<<"        Nombre completo:                    "<<no16<<endl;
																				cout<<"        Edad:                               "<<ed16<<endl;
																				cout<<"        Resultado de la prueba del icfes:   "<<ic16<<endl;
																				cout<<"        Direccion:                          "<<di16<<endl;
																				cout<<"        Numero Telefonico:                  "<<te16<<endl;
																				cout<<"        Correo electronico:                 "<<co16<<endl;
																				cout<<"        Numero de documento:                "<<id16<<endl;
																				cout<<"        Nombre carrera:                     "<<ca16<<endl;
																				cout<<"        Pin de inscripcion:                 "<<pi16<<endl;
																				cout<<"        Numero de salon:                    "<<sa16<<endl;
																				cout<<"   ............................................................................   "<<endl;
																				mue=1;
																			}else{
																				if(cmp==id17){
																					
																					cout<<"   ............................................................................   "<<endl;
																					cout<<"        Nombre completo:                    "<<no17<<endl;
																					cout<<"        Edad:                               "<<ed17<<endl;
																					cout<<"        Resultado de la prueba del icfes:   "<<ic17<<endl;
																					cout<<"        Direccion:                          "<<di17<<endl;
																					cout<<"        Numero Telefonico:                  "<<te17<<endl;
																					cout<<"        Correo electronico:                 "<<co17<<endl;
																					cout<<"        Numero de documento:                "<<id17<<endl;
																					cout<<"        Nombre carrera:                     "<<ca17<<endl;
																					cout<<"        Pin de inscripcion:                 "<<pi17<<endl;
																					cout<<"        Numero de salon:                    "<<sa17<<endl;
																					cout<<"   ............................................................................   "<<endl;
																					mue=1;
																				}else{
																					if(cmp==id18){
																						
																						cout<<"   ............................................................................   "<<endl;
																						cout<<"        Nombre completo:                    "<<no18<<endl;
																						cout<<"        Edad:                               "<<ed18<<endl;
																						cout<<"        Resultado de la prueba del icfes:   "<<ic18<<endl;
																						cout<<"        Direccion:                          "<<di18<<endl;
																						cout<<"        Numero Telefonico:                  "<<te18<<endl;
																						cout<<"        Correo electronico:                 "<<co18<<endl;
																						cout<<"        Numero de documento:                "<<id18<<endl;
																						cout<<"        Nombre carrera:                     "<<ca18<<endl;
																						cout<<"        Pin de inscripcion:                 "<<pi18<<endl;
																						cout<<"        Numero de salon:                    "<<sa18<<endl;
																						cout<<"   ............................................................................   "<<endl;
																						mue=1;
																					}else{
																						if(cmp==id19){
																							
																							cout<<"   ............................................................................   "<<endl;
																							cout<<"        Nombre completo:                    "<<no19<<endl;
																							cout<<"        Edad:                               "<<ed19<<endl;
																							cout<<"        Resultado de la prueba del icfes:   "<<ic19<<endl;
																							cout<<"        Direccion:                          "<<di19<<endl;
																							cout<<"        Numero Telefonico:                  "<<te19<<endl;
																							cout<<"        Correo electronico:                 "<<co19<<endl;
																							cout<<"        Numero de documento:                "<<id19<<endl;
																							cout<<"        Nombre carrera:                     "<<ca19<<endl;
																							cout<<"        Pin de inscripcion:                 "<<pi19<<endl;
																							cout<<"        Numero de salon:                    "<<sa19<<endl;
																							cout<<"   ............................................................................   "<<endl;
																							mue=1;
																						}else{
																							if(cmp==id20){
																								
																								cout<<"   ............................................................................   "<<endl;
																								cout<<"        Nombre completo:                    "<<no20<<endl;
																								cout<<"        Edad:                               "<<ed20<<endl;
																								cout<<"        Resultado de la prueba del icfes:   "<<ic20<<endl;
																								cout<<"        Direccion:                          "<<di20<<endl;
																								cout<<"        Numero Telefonico:                  "<<te20<<endl;
																								cout<<"        Correo electronico:                 "<<co20<<endl;
																								cout<<"        Numero de documento:                "<<id20<<endl;
																								cout<<"        Nombre carrera:                     "<<ca20<<endl;
																								cout<<"        Pin de inscripcion:                 "<<pi20<<endl;
																								cout<<"        Numero de salon:                    "<<sa20<<endl;
																								cout<<"   ............................................................................   "<<endl;
																								mue=1;
																							}else{
																								
																							}		
																						}		
																					}		
																				}		
																			}		
																		}		
																	}		
																}		
															}		
														}		
													}		
												}		
											}		
										}		
									}		
								}		
							}		
						}		
					}
				}
				if (mue==1){
					
				}else{
					cout<<""<<endl;
					cout<<"               .........................................................."<<endl;
					cout<<"               ..     Este Dato No Se Encuentra Registrado En La BD    .."<<endl;
					cout<<"               .........................................................."<<endl;
					cout<<""<<endl;
				}
			}	
			cout<<"Precione Una Tecla Para Continuar....."<<endl;
			break;
		}//fin de case 1
		case 2:{
			mue=0;
			system("cls");
			cout<<""<<endl;
			cout<<"                    .........................................   "<<endl; 
			cout<<"                    ..       Ingrese Primer Nombre         ..   "<<endl; 
			cout<<"                    .........................................   "<<endl; 
			cin>>(cmp);
			for(a=0;a<=contador;a++){
				if(strcmp(dato[a].nombre,cmp)==0){
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<dato[a].nombre<<endl;
					cout<<"        Edad:                               "<<dato[a].edad<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<dato[a].icfes<<endl;
					cout<<"        Direccion:                          "<<dato[a].direccion<<endl;
					cout<<"        Numero Telefonico:                  "<<dato[a].telefono<<endl;
					cout<<"        Correo electronico:                 "<<dato[a].correo<<endl;
					cout<<"        Numero de documento:                "<<dato[a].id<<endl;
					cout<<"        Nombre carrera:                     "<<dato[a].carrera<<endl;
					cout<<"        Pin de inscripcion:                 "<<dato[a].pin<<endl;
					cout<<"        Numero de salon:                    "<<dato[a].salon<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}//fin de condicional if
				
			}//fin de ciclo for
			if (cmp==no21){
				cout<<""<<endl;
				cout<<"                  .................................................."<<endl; 
				cout<<"                  ..  Este Nombre  Es Invaldo Intentelo De Nuevo  .."<<endl; 
				cout<<"                  .................................................."<<endl; 
				cout<<""<<endl;
			}else{
				if(cmp==no1){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no1<<endl;
					cout<<"        Edad:                               "<<ed1<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic1<<endl;
					cout<<"        Direccion:                          "<<di1<<endl;
					cout<<"        Numero Telefonico:                  "<<te1<<endl;
					cout<<"        Correo electronico:                 "<<co1<<endl;
					cout<<"        Numero de documento:                "<<id1<<endl;
					cout<<"        Nombre carrera:                     "<<ca1<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi1<<endl;
					cout<<"        Numero de salon:                    "<<sa1<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}
				if(cmp==no2){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no2<<endl;
					cout<<"        Edad:                               "<<ed2<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic2<<endl;
					cout<<"        Direccion:                          "<<di2<<endl;
					cout<<"        Numero Telefonico:                  "<<te2<<endl;
					cout<<"        Correo electronico:                 "<<co2<<endl;
					cout<<"        Numero de documento:                "<<id2<<endl;
					cout<<"        Nombre carrera:                     "<<ca2<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi2<<endl;
					cout<<"        Numero de salon:                    "<<sa2<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}
				if(cmp==no3){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no3<<endl;
					cout<<"        Edad:                               "<<ed3<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic3<<endl;
					cout<<"        Direccion:                          "<<di3<<endl;
					cout<<"        Numero Telefonico:                  "<<te3<<endl;
					cout<<"        Correo electronico:                 "<<co3<<endl;
					cout<<"        Numero de documento:                "<<id3<<endl;
					cout<<"        Nombre carrera:                     "<<ca3<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi3<<endl;
					cout<<"        Numero de salon:                    "<<sa3<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}
				if(cmp==no4){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no4<<endl;
					cout<<"        Edad:                               "<<ed4<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic4<<endl;
					cout<<"        Direccion:                          "<<di4<<endl;
					cout<<"        Numero Telefonico:                  "<<te4<<endl;
					cout<<"        Correo electronico:                 "<<co4<<endl;
					cout<<"        Numero de documento:                "<<id4<<endl;
					cout<<"        Nombre carrera:                     "<<ca4<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi4<<endl;
					cout<<"        Numero de salon:                    "<<sa4<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}
				if(cmp==no5){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no5<<endl;
					cout<<"        Edad:                               "<<ed5<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic5<<endl;
					cout<<"        Direccion:                          "<<di5<<endl;
					cout<<"        Numero Telefonico:                  "<<te5<<endl;
					cout<<"        Correo electronico:                 "<<co5<<endl;
					cout<<"        Numero de documento:                "<<id5<<endl;
					cout<<"        Nombre carrera:                     "<<ca5<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi5<<endl;
					cout<<"        Numero de salon:                    "<<sa5<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}
				if(cmp==no6){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no6<<endl;
					cout<<"        Edad:                               "<<ed6<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic6<<endl;
					cout<<"        Direccion:                          "<<di6<<endl;
					cout<<"        Numero Telefonico:                  "<<te6<<endl;
					cout<<"        Correo electronico:                 "<<co6<<endl;
					cout<<"        Numero de documento:                "<<id6<<endl;
					cout<<"        Nombre carrera:                     "<<ca6<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi6<<endl;
					cout<<"        Numero de salon:                    "<<sa6<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}
				if(cmp==no7){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no7<<endl;
					cout<<"        Edad:                               "<<ed7<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic7<<endl;
					cout<<"        Direccion:                          "<<di7<<endl;
					cout<<"        Numero Telefonico:                  "<<te7<<endl;
					cout<<"        Correo electronico:                 "<<co7<<endl;
					cout<<"        Numero de documento:                "<<id7<<endl;
					cout<<"        Nombre carrera:                     "<<ca7<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi7<<endl;
					cout<<"        Numero de salon:                    "<<sa7<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}
				if(cmp==no8){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no8<<endl;
					cout<<"        Edad:                               "<<ed8<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic8<<endl;
					cout<<"        Direccion:                          "<<di8<<endl;
					cout<<"        Numero Telefonico:                  "<<te8<<endl;
					cout<<"        Correo electronico:                 "<<co8<<endl;
					cout<<"        Numero de documento:                "<<id8<<endl;
					cout<<"        Nombre carrera:                     "<<ca8<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi8<<endl;
					cout<<"        Numero de salon:                    "<<sa8<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}
				if(cmp==no9){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no9<<endl;
					cout<<"        Edad:                               "<<ed9<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic9<<endl;
					cout<<"        Direccion:                          "<<di9<<endl;
					cout<<"        Numero Telefonico:                  "<<te9<<endl;
					cout<<"        Correo electronico:                 "<<co9<<endl;
					cout<<"        Numero de documento:                "<<id9<<endl;
					cout<<"        Nombre carrera:                     "<<ca9<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi9<<endl;
					cout<<"        Numero de salon:                    "<<sa9<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}
				if(cmp==no10){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no10<<endl;
					cout<<"        Edad:                               "<<ed10<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic10<<endl;
					cout<<"        Direccion:                          "<<di10<<endl;
					cout<<"        Numero Telefonico:                  "<<te10<<endl;
					cout<<"        Correo electronico:                 "<<co10<<endl;
					cout<<"        Numero de documento:                "<<id10<<endl;
					cout<<"        Nombre carrerav                     "<<ca10<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi10<<endl;
					cout<<"        Numero de salon:                    "<<sa10<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}
				if(cmp==no11){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no11<<endl;
					cout<<"        Edad:                               "<<ed11<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic11<<endl;
					cout<<"        Direccion:                          "<<di11<<endl;
					cout<<"        Numero Telefonico:                  "<<te11<<endl;
					cout<<"        Correo electronico:                 "<<co11<<endl;
					cout<<"        Numero de documento:                "<<id11<<endl;
					cout<<"        Nombre carrera:                     "<<ca11<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi11<<endl;
					cout<<"        Numero de salon:                    "<<sa11<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}
				if(cmp==no12){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no12<<endl;
					cout<<"        Edad:                               "<<ed12<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic12<<endl;
					cout<<"        Direccion:                          "<<di12<<endl;
					cout<<"        Numero Telefonico:                  "<<te12<<endl;
					cout<<"        Correo electronico:                 "<<co12<<endl;
					cout<<"        Numero de documento:                "<<id12<<endl;
					cout<<"        Nombre carrera:                     "<<ca12<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi12<<endl;
					cout<<"        Numero de salon:                    "<<sa12<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}
				if(cmp==no13){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no13<<endl;
					cout<<"        Edad:                               "<<ed13<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic13<<endl;
					cout<<"        Direccion:                          "<<di13<<endl;
					cout<<"        Numero Telefonico:                  "<<te13<<endl;
					cout<<"        Correo electronico:                 "<<co13<<endl;
					cout<<"        Numero de documento:                "<<id13<<endl;
					cout<<"        Nombre carrera:                     "<<ca13<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi13<<endl;
					cout<<"        Numero de salon:                    "<<sa13<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}
				if(cmp==no14){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no14<<endl;
					cout<<"        Edad:                               "<<ed14<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic14<<endl;
					cout<<"        Direccion:                          "<<di14<<endl;
					cout<<"        Numero Telefonico:                  "<<te14<<endl;
					cout<<"        Correo electronico:                 "<<co14<<endl;
					cout<<"        Numero de documento:                "<<id14<<endl;
					cout<<"        Nombre carrera:                     "<<ca14<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi14<<endl;
					cout<<"        Numero de salon:                    "<<sa14<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}
				if(cmp==no15){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no15<<endl;
					cout<<"        Edad:                               "<<ed15<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic15<<endl;
					cout<<"        Direccion:                          "<<di15<<endl;
					cout<<"        Numero Telefonico:                  "<<te15<<endl;
					cout<<"        Correo electronico:                 "<<co15<<endl;
					cout<<"        Numero de documento:                "<<id15<<endl;
					cout<<"        Nombre carrera:                     "<<ca15<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi15<<endl;
					cout<<"        Numero de salon:                    "<<sa15<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}
				if(cmp==no16){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no16<<endl;
					cout<<"        Edad:                               "<<ed16<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic16<<endl;
					cout<<"        Direccion:                          "<<di16<<endl;
					cout<<"        Numero Telefonico:                  "<<te16<<endl;
					cout<<"        Correo electronico:                 "<<co16<<endl;
					cout<<"        Numero de documento:                "<<id16<<endl;
					cout<<"        Nombre carrera:                     "<<ca16<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi16<<endl;
					cout<<"        Numero de salon:                    "<<sa16<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}
				if(cmp==no17){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no17<<endl;
					cout<<"        Edad:                               "<<ed17<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic17<<endl;
					cout<<"        Direccion:                          "<<di17<<endl;
					cout<<"        Numero Telefonico:                  "<<te17<<endl;
					cout<<"        Correo electronico:                 "<<co17<<endl;
					cout<<"        Numero de documento:                "<<id17<<endl;
					cout<<"        Nombre carrera:                     "<<ca17<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi17<<endl;
					cout<<"        Numero de salon:                    "<<sa17<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}
				if(cmp==no18){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no18<<endl;
					cout<<"        Edad:                               "<<ed18<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic18<<endl;
					cout<<"        Direccion:                          "<<di18<<endl;
					cout<<"        Numero Telefonico:                  "<<te18<<endl;
					cout<<"        Correo electronico:                 "<<co18<<endl;
					cout<<"        Numero de documento:                "<<id18<<endl;
					cout<<"        Nombre carrera:                     "<<ca18<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi18<<endl;
					cout<<"        Numero de salon:                    "<<sa18<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}
				if(cmp==no19){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no19<<endl;
					cout<<"        Edad:                               "<<ed19<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic19<<endl;
					cout<<"        Direccion:                          "<<di19<<endl;
					cout<<"        Numero Telefonico:                  "<<te19<<endl;
					cout<<"        Correo electronico:                 "<<co19<<endl;
					cout<<"        Numero de documento:                "<<id19<<endl;
					cout<<"        Nombre carrera:                     "<<ca19<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi19<<endl;
					cout<<"        Numero de salon:                    "<<sa19<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}
				if(cmp==no20){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no20<<endl;
					cout<<"        Edad:                               "<<ed20<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic20<<endl;
					cout<<"        Direccion:                          "<<di20<<endl;
					cout<<"        Numero Telefonico:                  "<<te20<<endl;
					cout<<"        Correo electronico:                 "<<co20<<endl;
					cout<<"        Numero de documento:                "<<id20<<endl;
					cout<<"        Nombre carrera:                     "<<ca20<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi20<<endl;
					cout<<"        Numero de salon:                    "<<sa20<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}	
				
				if (mue==1){
					
				}else{
					cout<<""<<endl;
					cout<<"               .........................................................."<<endl;
					cout<<"               ..     Este Dato No Se Encuentra Registrado En La BD    .."<<endl;
					cout<<"               .........................................................."<<endl;
					cout<<""<<endl;
				}
			}
			cout<<"Precione Una Tecla Para Continuar....."<<endl;																				
			break;
		}
		case 3:{
			mue=0;
			system("cls");
			cout<<""<<endl;
			cout<<"                    .........................................   "<<endl; 
			cout<<"                    ..            Ingrese Salon          ..   "<<endl; 
			cout<<"                    .........................................   "<<endl; 
			cin>>(cmp);
			for(int b=0;b<=contador;b++){
				if(strcmp(dato[b].salon,cmp)==0){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<dato[b].nombre<<endl;
					cout<<"        Edad:                               "<<dato[b].edad<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<dato[b].icfes<<endl;
					cout<<"        Direccion:                          "<<dato[b].direccion<<endl;
					cout<<"        Numero Telefonico:                  "<<dato[b].telefono<<endl;
					cout<<"        Correo electronico:                 "<<dato[b].correo<<endl;
					cout<<"        Numero de documento:                "<<dato[b].id<<endl;
					cout<<"        Nombre carrera:                     "<<dato[b].carrera<<endl;
					cout<<"        Pin de inscripcion:                 "<<dato[b].pin<<endl;
					cout<<"        Numero de salon:                    "<<dato[b].salon<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}
				
			}
			if (cmp==sa21){
				cout<<""<<endl;
				cout<<"                 ................................................"<<endl; 
				cout<<"                 ..  Este Salon Es Invaldo Intentelo De Nuevo  .."<<endl; 
				cout<<"                 ................................................"<<endl; 
				cout<<""<<endl;
			}else{
				if(cmp==sa1){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no1<<endl;
					cout<<"        Edad:                               "<<ed1<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic1<<endl;
					cout<<"        Direccion:                          "<<di1<<endl;
					cout<<"        Numero Telefonico:                  "<<te1<<endl;
					cout<<"        Correo electronico:                 "<<co1<<endl;
					cout<<"        Numero de documento:                "<<id1<<endl;
					cout<<"        Nombre carrera:                     "<<ca1<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi1<<endl;
					cout<<"        Numero de salon:                    "<<sa1<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}
				if(cmp==sa2){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no2<<endl;
					cout<<"        Edad:                               "<<ed2<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic2<<endl;
					cout<<"        Direccion:                          "<<di2<<endl;
					cout<<"        Numero Telefonico:                  "<<te2<<endl;
					cout<<"        Correo electronico:                 "<<co2<<endl;
					cout<<"        Numero de documento:                "<<id2<<endl;
					cout<<"        Nombre carrera:                     "<<ca2<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi2<<endl;
					cout<<"        Numero de salon:                    "<<sa2<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}
				if(cmp==sa3){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no3<<endl;
					cout<<"        Edad:                               "<<ed3<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic3<<endl;
					cout<<"        Direccion:                          "<<di3<<endl;
					cout<<"        Numero Telefonico:                  "<<te3<<endl;
					cout<<"        Correo electronico:                 "<<co3<<endl;
					cout<<"        Numero de documento:                "<<id3<<endl;
					cout<<"        Nombre carrera:                     "<<ca3<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi3<<endl;
					cout<<"        Numero de salon:                    "<<sa3<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}
				if(cmp==sa4){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no4<<endl;
					cout<<"        Edad:                               "<<ed4<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic4<<endl;
					cout<<"        Direccion:                          "<<di4<<endl;
					cout<<"        Numero Telefonico:                  "<<te4<<endl;
					cout<<"        Correo electronico:                 "<<co4<<endl;
					cout<<"        Numero de documento:                "<<id4<<endl;
					cout<<"        Nombre carrera:                     "<<ca4<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi4<<endl;
					cout<<"        Numero de salon:                    "<<sa4<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}
				if(cmp==sa5){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no5<<endl;
					cout<<"        Edad:                               "<<ed5<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic5<<endl;
					cout<<"        Direccion:                          "<<di5<<endl;
					cout<<"        Numero Telefonico:                  "<<te5<<endl;
					cout<<"        Correo electronico:                 "<<co5<<endl;
					cout<<"        Numero de documento:                "<<id5<<endl;
					cout<<"        Nombre carrera:                     "<<ca5<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi5<<endl;
					cout<<"        Numero de salon:                    "<<sa5<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}
				if(cmp==sa6){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no6<<endl;
					cout<<"        Edad:                               "<<ed6<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic6<<endl;
					cout<<"        Direccion:                          "<<di6<<endl;
					cout<<"        Numero Telefonico:                  "<<te6<<endl;
					cout<<"        Correo electronico:                 "<<co6<<endl;
					cout<<"        Numero de documento:                "<<id6<<endl;
					cout<<"        Nombre carrera:                     "<<ca6<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi6<<endl;
					cout<<"        Numero de salon:                    "<<sa6<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}
				if(cmp==sa7){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no7<<endl;
					cout<<"        Edad:                               "<<ed7<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic7<<endl;
					cout<<"        Direccion:                          "<<di7<<endl;
					cout<<"        Numero Telefonico:                  "<<te7<<endl;
					cout<<"        Correo electronico:                 "<<co7<<endl;
					cout<<"        Numero de documento:                "<<id7<<endl;
					cout<<"        Nombre carrera:                     "<<ca7<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi7<<endl;
					cout<<"        Numero de salon:                    "<<sa7<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}
				if(cmp==sa8){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no8<<endl;
					cout<<"        Edad:                               "<<ed8<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic8<<endl;
					cout<<"        Direccion:                          "<<di8<<endl;
					cout<<"        Numero Telefonico:                  "<<te8<<endl;
					cout<<"        Correo electronico:                 "<<co8<<endl;
					cout<<"        Numero de documento:                "<<id8<<endl;
					cout<<"        Nombre carrera:                     "<<ca8<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi8<<endl;
					cout<<"        Numero de salon:                    "<<sa8<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}
				if(cmp==sa9){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no9<<endl;
					cout<<"        Edad:                               "<<ed9<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic9<<endl;
					cout<<"        Direccion:                          "<<di9<<endl;
					cout<<"        Numero Telefonico:                  "<<te9<<endl;
					cout<<"        Correo electronico:                 "<<co9<<endl;
					cout<<"        Numero de documento:                "<<id9<<endl;
					cout<<"        Nombre carrera:                     "<<ca9<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi9<<endl;
					cout<<"        Numero de salon:                    "<<sa9<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}
				if(cmp==sa10){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no10<<endl;
					cout<<"        Edad:                               "<<ed10<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic10<<endl;
					cout<<"        Direccion:                          "<<di10<<endl;
					cout<<"        Numero Telefonico:                  "<<te10<<endl;
					cout<<"        Correo electronico:                 "<<co10<<endl;
					cout<<"        Numero de documento:                "<<id10<<endl;
					cout<<"        Nombre carrera:                     "<<ca10<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi10<<endl;
					cout<<"        Numero de salon:                    "<<sa10<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}
				if(cmp==sa11){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no11<<endl;
					cout<<"        Edad:                               "<<ed11<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic11<<endl;
					cout<<"        Direccion:                          "<<di11<<endl;
					cout<<"        Numero Telefonico:                  "<<te11<<endl;
					cout<<"        Correo electronico:                 "<<co11<<endl;
					cout<<"        Numero de documento:                "<<id11<<endl;
					cout<<"        Nombre carrera:                     "<<ca11<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi11<<endl;
					cout<<"        Numero de salon:                    "<<sa11<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}
				if(cmp==sa12){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no12<<endl;
					cout<<"        Edad:                               "<<ed12<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic12<<endl;
					cout<<"        Direccion:                          "<<di12<<endl;
					cout<<"        Numero Telefonico:                  "<<te12<<endl;
					cout<<"        Correo electronico:                 "<<co12<<endl;
					cout<<"        Numero de documento:                "<<id12<<endl;
					cout<<"        Nombre carrera:                     "<<ca12<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi12<<endl;
					cout<<"        Numero de salon:                    "<<sa12<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}
				if(cmp==sa13){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no13<<endl;
					cout<<"        Edad:                               "<<ed13<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic13<<endl;
					cout<<"        Direccion:                          "<<di13<<endl;
					cout<<"        Numero Telefonico:                  "<<te13<<endl;
					cout<<"        Correo electronico:                 "<<co13<<endl;
					cout<<"        Numero de documento:                "<<id13<<endl;
					cout<<"        Nombre carrera:                     "<<ca13<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi13<<endl;
					cout<<"        Numero de salon:                    "<<sa13<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}
				if(cmp==sa14){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no14<<endl;
					cout<<"        Edad:                               "<<ed14<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic14<<endl;
					cout<<"        Direccion:                          "<<di14<<endl;
					cout<<"        Numero Telefonico:                  "<<te14<<endl;
					cout<<"        Correo electronico:                 "<<co14<<endl;
					cout<<"        Numero de documento:                "<<id14<<endl;
					cout<<"        Nombre carrera:                     "<<ca14<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi14<<endl;
					cout<<"        Numero de salon:                    "<<sa14<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}
				if(cmp==sa15){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no15<<endl;
					cout<<"        Edad:                               "<<ed15<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic15<<endl;
					cout<<"        Direccion:                          "<<di15<<endl;
					cout<<"        Numero Telefonico:                  "<<te15<<endl;
					cout<<"        Correo electronico:                 "<<co15<<endl;
					cout<<"        Numero de documento:                "<<id15<<endl;
					cout<<"        Nombre carrera:                     "<<ca15<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi15<<endl;
					cout<<"        Numero de salon:                    "<<sa15<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}
				if(cmp==sa16){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no16<<endl;
					cout<<"        Edad:                               "<<ed16<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic16<<endl;
					cout<<"        Direccion:                          "<<di16<<endl;
					cout<<"        Numero Telefonico:                  "<<te16<<endl;
					cout<<"        Correo electronico:                 "<<co16<<endl;
					cout<<"        Numero de documento:                "<<id16<<endl;
					cout<<"        Nombre carrera:                     "<<ca16<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi16<<endl;
					cout<<"        Numero de salon:                    "<<sa16<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}
				if(cmp==sa17){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no17<<endl;
					cout<<"        Edad:                               "<<ed17<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic17<<endl;
					cout<<"        Direccion:                          "<<di17<<endl;
					cout<<"        Numero Telefonico:                  "<<te17<<endl;
					cout<<"        Correo electronico:                 "<<co17<<endl;
					cout<<"        Numero de documento:                "<<id17<<endl;
					cout<<"        Nombre carrera:                     "<<ca17<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi17<<endl;
					cout<<"        Numero de salon:                    "<<sa17<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}
				if(cmp==sa18){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no18<<endl;
					cout<<"        Edad:                               "<<ed18<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic18<<endl;
					cout<<"        Direccion:                          "<<di18<<endl;
					cout<<"        Numero Telefonico:                  "<<te18<<endl;
					cout<<"        Correo electronico:                 "<<co18<<endl;
					cout<<"        Numero de documento:                "<<id18<<endl;
					cout<<"        Nombre carrera:                     "<<ca18<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi18<<endl;
					cout<<"        Numero de salon:                    "<<sa18<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}
				if(cmp==sa19){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no19<<endl;
					cout<<"        Edad:                               "<<ed19<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic19<<endl;
					cout<<"        Direccion:                          "<<di19<<endl;
					cout<<"        Numero Telefonico:                  "<<te19<<endl;
					cout<<"        Correo electronico:                 "<<co19<<endl;
					cout<<"        Numero de documento:                "<<id19<<endl;
					cout<<"        Nombre carrera:                     "<<ca19<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi19<<endl;
					cout<<"        Numero de salon:                    "<<sa19<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}
				if(cmp==sa20){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no20<<endl;
					cout<<"        Edad:                               "<<ed20<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic20<<endl;
					cout<<"        Direccion:                          "<<di20<<endl;
					cout<<"        Numero Telefonico:                  "<<te20<<endl;
					cout<<"        Correo electronico:                 "<<co20<<endl;
					cout<<"        Numero de documento:                "<<id20<<endl;
					cout<<"        Nombre carrera:                     "<<ca20<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi20<<endl;
					cout<<"        Numero de salon:                    "<<sa20<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					
				}		
				if (mue==1){
					
				}else{
					cout<<""<<endl;
					cout<<"               .........................................................."<<endl;
					cout<<"               ..     Este Dato No Se Encuentra Registrado En La BD    .."<<endl;
					cout<<"               .........................................................."<<endl;
					cout<<""<<endl;
				}
			}
			cout<<"Precione Una Tecla Para Continuar....."<<endl;
			break;
		}//fin de case 3
		case 4:{
			mue=0;
			system("cls");
			cout<<""<<endl;
			cout<<"                    .........................................   "<<endl; 
			cout<<"                    ..              Ingrese Pin            ..   "<<endl; 
			cout<<"                    .........................................   "<<endl; 
			cin>>(cmp);
			for(int c=0;c<=contador;c++){
				if(strcmp(dato[c].pin,cmp)==0){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<dato[c].nombre<<endl;
					cout<<"        Edad:                               "<<dato[c].edad<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<dato[c].icfes<<endl;
					cout<<"        Direccion:                          "<<dato[c].direccion<<endl;
					cout<<"        Numero Telefonico:                  "<<dato[c].telefono<<endl;
					cout<<"        Correo electronico:                 "<<dato[c].correo<<endl;
					cout<<"        Numero de documento:                "<<dato[c].id<<endl;
					cout<<"        Nombre carrera:                     "<<dato[c].carrera<<endl;
					cout<<"        Pin de inscripcion:                 "<<dato[c].pin<<endl;
					cout<<"        Numero de salon:                    "<<dato[c].salon<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}
				
			}
			if (cmp==pi21){
				cout<<""<<endl;
				cout<<"                    .............................................."<<endl; 
				cout<<"                    ..  Este Pin Es Invaldo Intentelo De Nuevo  .."<<endl; 
				cout<<"                    .............................................."<<endl; 
				cout<<""<<endl;
			}else{
				if(cmp==pi1){
					
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no1<<endl;
					cout<<"        Edad:                               "<<ed1<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic1<<endl;
					cout<<"        Direccion:                          "<<di1<<endl;
					cout<<"        Numero Telefonico:                  "<<te1<<endl;
					cout<<"        Correo electronico:                 "<<co1<<endl;
					cout<<"        Numero de documento:                "<<id1<<endl;
					cout<<"        Nombre carrera:                     "<<ca1<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi1<<endl;
					cout<<"        Numero de salon:                    "<<sa1<<endl;
					cout<<"   ............................................................................   "<<endl;
					mue=1;
				}else{
					if(cmp==pi2){
						
						cout<<"   ............................................................................   "<<endl;
						cout<<"        Nombre completo:                    "<<no2<<endl;
						cout<<"        Edad:                               "<<ed2<<endl;
						cout<<"        Resultado de la prueba del icfes:   "<<ic2<<endl;
						cout<<"        Direccion:                          "<<di2<<endl;
						cout<<"        Numero Telefonico:                  "<<te2<<endl;
						cout<<"        Correo electronico:                 "<<co2<<endl;
						cout<<"        Numero de documento:                "<<id2<<endl;
						cout<<"        Nombre carrera:                     "<<ca2<<endl;
						cout<<"        Pin de inscripcion:                 "<<pi2<<endl;
						cout<<"        Numero de salon:                    "<<sa2<<endl;
						cout<<"   ............................................................................   "<<endl;
						mue=1;
					}else{
						if(cmp==pi3){
							
							cout<<"   ............................................................................   "<<endl;
							cout<<"        Nombre completo:                    "<<no3<<endl;
							cout<<"        Edad:                               "<<ed3<<endl;
							cout<<"        Resultado de la prueba del icfes:   "<<ic3<<endl;
							cout<<"        Direccion:                          "<<di3<<endl;
							cout<<"        Numero Telefonico:                  "<<te3<<endl;
							cout<<"        Correo electronico:                 "<<co3<<endl;
							cout<<"        Numero de documento:                "<<id3<<endl;
							cout<<"        Nombre carrera:                     "<<ca3<<endl;
							cout<<"        Pin de inscripcion:                 "<<pi3<<endl;
							cout<<"        Numero de salon:                    "<<sa3<<endl;
							cout<<"   ............................................................................   "<<endl;
							mue=1;
						}else{
							if(cmp==pi4){
								
								cout<<"   ............................................................................   "<<endl;
								cout<<"        Nombre completo:                    "<<no4<<endl;
								cout<<"        Edad:                               "<<ed4<<endl;
								cout<<"        Resultado de la prueba del icfes:   "<<ic4<<endl;
								cout<<"        Direccion:                          "<<di4<<endl;
								cout<<"        Numero Telefonico:                  "<<te4<<endl;
								cout<<"        Correo electronico:                 "<<co4<<endl;
								cout<<"        Numero de documento:                "<<id4<<endl;
								cout<<"        Nombre carrera:                     "<<ca4<<endl;
								cout<<"        Pin de inscripcion:                 "<<pi4<<endl;
								cout<<"        Numero de salon:                    "<<sa4<<endl;
								cout<<"   ............................................................................   "<<endl;
								mue=1;
							}else{
								if(cmp==pi5){
									
									cout<<"   ............................................................................   "<<endl;
									cout<<"        Nombre completo:                    "<<no5<<endl;
									cout<<"        Edad:                               "<<ed5<<endl;
									cout<<"        Resultado de la prueba del icfes:   "<<ic5<<endl;
									cout<<"        Direccion:                          "<<di5<<endl;
									cout<<"        Numero Telefonico:                  "<<te5<<endl;
									cout<<"        Correo electronico:                 "<<co5<<endl;
									cout<<"        Numero de documento:                "<<id5<<endl;
									cout<<"        Nombre carrera:                     "<<ca5<<endl;
									cout<<"        Pin de inscripcion:                 "<<pi5<<endl;
									cout<<"        Numero de salon:                    "<<sa5<<endl;
									cout<<"   ............................................................................   "<<endl;
									mue=1;
								}else{
									if(cmp==pi6){
										
										cout<<"   ............................................................................   "<<endl;
										cout<<"        Nombre completo:                    "<<no6<<endl;
										cout<<"        Edad:                               "<<ed6<<endl;
										cout<<"        Resultado de la prueba del icfes:   "<<ic6<<endl;
										cout<<"        Direccion:                          "<<di6<<endl;
										cout<<"        Numero Telefonico:                  "<<te6<<endl;
										cout<<"        Correo electronico:                 "<<co6<<endl;
										cout<<"        Numero de documento:                "<<id6<<endl;
										cout<<"        Nombre carrera:                     "<<ca6<<endl;
										cout<<"        Pin de inscripcion:                 "<<pi6<<endl;
										cout<<"        Numero de salon:                    "<<sa6<<endl;
										cout<<"   ............................................................................   "<<endl;
										mue=1;
									}else{
										if(cmp==pi7){
											
											cout<<"   ............................................................................   "<<endl;
											cout<<"        Nombre completo:                    "<<no7<<endl;
											cout<<"        Edad:                               "<<ed7<<endl;
											cout<<"        Resultado de la prueba del icfes:   "<<ic7<<endl;
											cout<<"        Direccion:                          "<<di7<<endl;
											cout<<"        Numero Telefonico:                   "<<te7<<endl;
											cout<<"        Correo electronico:                  "<<co7<<endl;
											cout<<"        Numero de documento:                 "<<id7<<endl;
											cout<<"        Nombre carrera:                      "<<ca7<<endl;
											cout<<"        Pin de inscripcion:                  "<<pi7<<endl;
											cout<<"        Numero de salon:                     "<<sa7<<endl;
											cout<<"   ............................................................................   "<<endl;
											mue=1;
										}else{
											if(cmp==pi8){
												
												cout<<"   ............................................................................   "<<endl;
												cout<<"        Nombre completo:                    "<<no8<<endl;
												cout<<"        Edad:                               "<<ed8<<endl;
												cout<<"        Resultado de la prueba del icfes:   "<<ic8<<endl;
												cout<<"        Direccion:                          "<<di8<<endl;
												cout<<"        Numero Telefonico:                  "<<te8<<endl;
												cout<<"        Correo electronico:                 "<<co8<<endl;
												cout<<"        Numero de documento:                "<<id8<<endl;
												cout<<"        Nombre carrera:                     "<<ca8<<endl;
												cout<<"        Pin de inscripcion:                 "<<pi8<<endl;
												cout<<"        Numero de salon:                    "<<sa8<<endl;
												cout<<"   ............................................................................   "<<endl;
												mue=1;
											}else{
												if(cmp==pi9){
													
													cout<<"   ............................................................................   "<<endl;
													cout<<"        Nombre completo:                    "<<no9<<endl;
													cout<<"        Edad:                               "<<ed9<<endl;
													cout<<"        Resultado de la prueba del icfes:   "<<ic9<<endl;
													cout<<"        Direccion:                          "<<di9<<endl;
													cout<<"        Numero Telefonico:                  "<<te9<<endl;
													cout<<"        Correo electronico:                 "<<co9<<endl;
													cout<<"        Numero de documento:                "<<id9<<endl;
													cout<<"        Nombre carrera:                     "<<ca9<<endl;
													cout<<"        Pin de inscripcion:                 "<<pi9<<endl;
													cout<<"        Numero de salon:                    "<<sa9<<endl;
													cout<<"   ............................................................................   "<<endl;
													mue=1;
												}else{
													if(cmp==pi10){
														
														cout<<"   ............................................................................   "<<endl;
														cout<<"        Nombre completo:                    "<<no10<<endl;
														cout<<"        Edad:                               "<<ed10<<endl;
														cout<<"        Resultado de la prueba del icfes:   "<<ic10<<endl;
														cout<<"        Direccion:                          "<<di10<<endl;
														cout<<"        Numero Telefonico:                  "<<te10<<endl;
														cout<<"        Correo electronico:                 "<<co10<<endl;
														cout<<"        Numero de documento:                "<<id10<<endl;
														cout<<"        Nombre carrera:                     "<<ca10<<endl;
														cout<<"        Pin de inscripcion:                 "<<pi10<<endl;
														cout<<"        Numero de salon:                    "<<sa10<<endl;
														cout<<"   ............................................................................   "<<endl;
														mue=1;
													}else{
														if(cmp==pi11){
															
															cout<<"   ............................................................................   "<<endl;
															cout<<"        Nombre completo:                    "<<no11<<endl;
															cout<<"        Edad:                               "<<ed11<<endl;
															cout<<"        Resultado de la prueba del icfes:   "<<ic11<<endl;
															cout<<"        Direccion:                          "<<di11<<endl;
															cout<<"        Numero Telefonico                   "<<te11<<endl;
															cout<<"        Correo electronico                  "<<co11<<endl;
															cout<<"        Numero de documento                 "<<id11<<endl;
															cout<<"        Nombre carrera                      "<<ca11<<endl;
															cout<<"        Pin de inscripcion                  "<<pi11<<endl;
															cout<<"        Numero de salon                     "<<sa11<<endl;
															cout<<"   ............................................................................   "<<endl;
															mue=1;
														}else{
															if(cmp==pi12){
																
																cout<<"   ............................................................................   "<<endl;
																cout<<"        Nombre completo:                    "<<no12<<endl;
																cout<<"        Edad:                               "<<ed12<<endl;
																cout<<"        Resultado de la prueba del icfes:   "<<ic12<<endl;
																cout<<"        Direccion:                          "<<di12<<endl;
																cout<<"        Numero Telefonico:                  "<<te12<<endl;
																cout<<"        Correo electronico:                 "<<co12<<endl;
																cout<<"        Numero de documento:                "<<id12<<endl;
																cout<<"        Nombre carrera:                     "<<ca12<<endl;
																cout<<"        Pin de inscripcion:                 "<<pi12<<endl;
																cout<<"        Numero de salon:                    "<<sa12<<endl;
																cout<<"   ............................................................................   "<<endl;
																mue=1;
															}else{
																if(cmp==pi13){
																	
																	cout<<"   ............................................................................   "<<endl;
																	cout<<"        Nombre completo:                    "<<no13<<endl;
																	cout<<"        Edad:                               "<<ed13<<endl;
																	cout<<"        Resultado de la prueba del icfes:   "<<ic13<<endl;
																	cout<<"        Direccion:                          "<<di13<<endl;
																	cout<<"        Numero Telefonico:                  "<<te13<<endl;
																	cout<<"        Correo electronico:                 "<<co13<<endl;
																	cout<<"        Numero de documento:                "<<id13<<endl;
																	cout<<"        Nombre carrera:                     "<<ca13<<endl;
																	cout<<"        Pin de inscripcion:                 "<<pi13<<endl;
																	cout<<"        Numero de salon:                    "<<sa13<<endl;
																	cout<<"   ............................................................................   "<<endl;
																	mue=1;
																}else{
																	if(cmp==pi14){
																		
																		cout<<"   ............................................................................   "<<endl;
																		cout<<"        Nombre completo:                    "<<no14<<endl;
																		cout<<"        Edad:                               "<<ed14<<endl;
																		cout<<"        Resultado de la prueba del icfes:   "<<ic14<<endl;
																		cout<<"        Direccion:                          "<<di14<<endl;
																		cout<<"        Numero Telefonico:                  "<<te14<<endl;
																		cout<<"        Correo electronico:                 "<<co14<<endl;
																		cout<<"        Numero de documento:                "<<id14<<endl;
																		cout<<"        Nombre carrera:                     "<<ca14<<endl;
																		cout<<"        Pin de inscripcion:                 "<<pi14<<endl;
																		cout<<"        Numero de salon:                    "<<sa14<<endl;
																		cout<<"   ............................................................................   "<<endl;
																		mue=1;
																	}else{
																		if(cmp==pi15){
																			
																			cout<<"   ............................................................................   "<<endl;
																			cout<<"        Nombre completo:                    "<<no15<<endl;
																			cout<<"        Edad:                               "<<ed15<<endl;
																			cout<<"        Resultado de la prueba del icfes:   "<<ic15<<endl;
																			cout<<"        Direccion:                          "<<di15<<endl;
																			cout<<"        Numero Telefonico:                  "<<te15<<endl;
																			cout<<"        Correo electronico:                 "<<co15<<endl;
																			cout<<"        Numero de documento:                "<<id15<<endl;
																			cout<<"        Nombre carrera:                     "<<ca15<<endl;
																			cout<<"        Pin de inscripcion:                 "<<pi15<<endl;
																			cout<<"        Numero de salon:                    "<<sa15<<endl;
																			cout<<"   ............................................................................   "<<endl;
																			mue=1;
																		}else{
																			if(cmp==pi16){
																				
																				cout<<"   ............................................................................   "<<endl;
																				cout<<"        Nombre completo:                    "<<no16<<endl;
																				cout<<"        Edad:                               "<<ed16<<endl;
																				cout<<"        Resultado de la prueba del icfes:   "<<ic16<<endl;
																				cout<<"        Direccion:                          "<<di16<<endl;
																				cout<<"        Numero Telefonico:                  "<<te16<<endl;
																				cout<<"        Correo electronico:                 "<<co16<<endl;
																				cout<<"        Numero de documento:                "<<id16<<endl;
																				cout<<"        Nombre carrera:                     "<<ca16<<endl;
																				cout<<"        Pin de inscripcion:                 "<<pi16<<endl;
																				cout<<"        Numero de salon:                    "<<sa16<<endl;
																				cout<<"   ............................................................................   "<<endl;
																				mue=1;
																			}else{
																				if(cmp==pi17){
																					
																					cout<<"   ............................................................................   "<<endl;
																					cout<<"        Nombre completo:                    "<<no17<<endl;
																					cout<<"        Edad:                               "<<ed17<<endl;
																					cout<<"        Resultado de la prueba del icfes:   "<<ic17<<endl;
																					cout<<"        Direccion:                          "<<di17<<endl;
																					cout<<"        Numero Telefonico:                  "<<te17<<endl;
																					cout<<"        Correo electronico:                 "<<co17<<endl;
																					cout<<"        Numero de documento:                "<<id17<<endl;
																					cout<<"        Nombre carrera:                     "<<ca17<<endl;
																					cout<<"        Pin de inscripcion:                 "<<pi17<<endl;
																					cout<<"        Numero de salon:                    "<<sa17<<endl;
																					cout<<"   ............................................................................   "<<endl;
																					mue=1;
																				}else{
																					if(cmp==pi18){
																						
																						cout<<"   ............................................................................   "<<endl;
																						cout<<"        Nombre completo:                    "<<no18<<endl;
																						cout<<"        Edad:                               "<<ed18<<endl;
																						cout<<"        Resultado de la prueba del icfes:   "<<ic18<<endl;
																						cout<<"        Direccion:                          "<<di18<<endl;
																						cout<<"        Numero Telefonico:                  "<<te18<<endl;
																						cout<<"        Correo electronico:                 "<<co18<<endl;
																						cout<<"        Numero de documento:                "<<id18<<endl;
																						cout<<"        Nombre carrera:                     "<<ca18<<endl;
																						cout<<"        Pin de inscripcion:                 "<<pi18<<endl;
																						cout<<"        Numero de salon:                    "<<sa18<<endl;
																						cout<<"   ............................................................................   "<<endl;
																						mue=1;
																					}else{
																						if(cmp==pi19){
																							
																							cout<<"   ............................................................................   "<<endl;
																							cout<<"        Nombre completo:                    "<<no19<<endl;
																							cout<<"        Edad:                               "<<ed19<<endl;
																							cout<<"        Resultado de la prueba del icfes:   "<<ic19<<endl;
																							cout<<"        Direccion:                          "<<di19<<endl;
																							cout<<"        Numero Telefonico:                  "<<te19<<endl;
																							cout<<"        Correo electronico:                 "<<co19<<endl;
																							cout<<"        Numero de documento:                "<<id19<<endl;
																							cout<<"        Nombre carrera:                     "<<ca19<<endl;
																							cout<<"        Pin de inscripcion:                 "<<pi19<<endl;
																							cout<<"        Numero de salon:                    "<<sa19<<endl;
																							cout<<"   ............................................................................   "<<endl;
																							mue=1;
																						}else{
																							if(cmp==pi20){
																								
																								cout<<"   ............................................................................   "<<endl;
																								cout<<"        Nombre completo:                    "<<no20<<endl;
																								cout<<"        Edad:                               "<<ed20<<endl;
																								cout<<"        Resultado de la prueba del icfes:   "<<ic20<<endl;
																								cout<<"        Direccion:                          "<<di20<<endl;
																								cout<<"        Numero Telefonico:                  "<<te20<<endl;
																								cout<<"        Correo electronico:                 "<<co20<<endl;
																								cout<<"        Numero de documento:                "<<id20<<endl;
																								cout<<"        Nombre carrera:                     "<<ca20<<endl;
																								cout<<"        Pin de inscripcion:                 "<<pi20<<endl;
																								cout<<"        Numero de salon:                    "<<sa20<<endl;
																								cout<<"   ............................................................................   "<<endl;
																								mue=1;
																							}else{
																								
																							}		
																						}		
																					}		
																				}		
																			}		
																		}		
																	}		
																}		
															}		
														}		
													}		
												}		
											}		
										}		
									}		
								}		
							}		
						}		
					}	
				}
				if (mue==1){
					
				}else{
					cout<<""<<endl;
					cout<<"               .........................................................."<<endl;
					cout<<"               ..     Este Dato No Se Encuentra Registrado En La BD    .."<<endl;
					cout<<"               .........................................................."<<endl;
					cout<<""<<endl;
				}
			}
			cout<<"Precione Una Tecla Para Continuar....."<<endl;
			break;
		}//fin de case 3
		default: {
			cout<<""<<endl;
			cout<<"                    ......................................... "<<endl;
			cout<<"                    .. Opcion No Valida Intentelo De Nuevo .. "<<endl;
			cout<<"                    ......................................... "<<endl;
			cout<<""<<endl;
			system("pause");
			rr=100;
		}
		}//fin
		
	}while(rr==100);
	getch();
}//fin de buscar


void modificar(){
	int op2;
	mue=0;
	nada=0;
	system("cls");
	cout<<""<<endl; 
	cout<<""<<endl; 
	for (i=0; i<20; i++){
		if(i==0){
			cout<<"                   .....";	
		}else{
			if(i==19){
				cout<<".."<<endl;	
			}else{
				cout<<"..";
			}
		}
	}
	cout<<"                    ..           Que Desea Modificar?      ..   "<<endl; 
	for (i=0; i<20; i++){
		if(i==0){
			cout<<"                   .....";	
		}else{
			if(i==19){
				cout<<".."<<endl;	
			}else{
				cout<<"..";
			}
		}
	}
	cout<<""<<endl; 
	cout<<"                          Digite El Numero  De Documento        "<<endl; 
	cout<<"                           Del Dato Que Desea Modificar         "<<endl; 
	cout<<"                           ----------------------------         "<<endl; 
	cout<<""<<endl; 
	cin>>(cmp); 
	for(int l=0;l<=contador;l++){
		system("cls");
		if (strcmp(dato[l].id,cmp)==0){
			system("cls");
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Primer Nombre Anterio: "<<dato[l].nombre<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Digite Nuevo Primer Nombre                                 "<<endl;
			cout<<"   .............................................................   "<<endl;
			cin>>(dato[l].nombre);
			
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Edad Anterior: "<<dato[l].edad<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Digite Nueva Edad                                          "<<endl;
			cout<<"   .............................................................   "<<endl;
			cin>>(dato[l].edad);
			
			system("cls");
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Resultado Del Icfes Anterior: "<<dato[l].icfes<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Digite Nuevo Resultado Del Icfes                           "<<endl;
			cout<<"   .............................................................   "<<endl;
			cin>>(dato[l].icfes);
			
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Direccion Anterior: "<<dato[l].direccion<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Digite Nueva Direccion                                     "<<endl;
			cout<<"   .............................................................   "<<endl;
			cin>>(dato[l].direccion);
			
			system("cls");
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Numero Telefonico Anterior: "<<dato[l].telefono<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Digite Nuevo Numero De Telefono                            "<<endl;
			cout<<"   .............................................................   "<<endl;
			cin>>(dato[l].telefono);
			
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Correo Electronico Anterior: "<<dato[l].correo<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Digite Nuevo Correo Electronico                            "<<endl;
			cout<<"   .............................................................   "<<endl;
			cin>>(dato[l].correo);
			
			system("cls");
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Numero De Documento Anterior: "<<dato[l].id<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Digite Nuevo Numero De Documento                           "<<endl;
			cout<<"   .............................................................   "<<endl;
			cin>>(dato[l].id);
			
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Nombre carrera Anterior: "<<dato[l].carrera<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Digite Nuevo Nombre De La Carrera                          "<<endl;
			cout<<"   .............................................................   "<<endl;
			cin>>(dato[l].carrera);
			
			system("cls");
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Pin De Inscripcion Anterior: "<<dato[l].pin<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Digite Nuevo Pin De Inscripcion                            "<<endl;
			cout<<"   .............................................................   "<<endl;
			cin>>(dato[l].pin);
			
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Numero De Salon Anterior: "<<dato[l].salon<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Digite Nuevo Numero De Salon                               "<<endl;
			cout<<"   .............................................................   "<<endl;
			cin>>(dato[l].salon);
			mue=1;
			nada=1;
		}//fin de condicional if
	}//fin de ciclo for
	if (cmp==id21){
		cout<<""<<endl;
		cout<<"                    ............................................."<<endl; 
		cout<<"                    ..  Este Id Es Invaldo Intentelo De Nuevo  .."<<endl; 
		cout<<"                    ............................................."<<endl; 
		cout<<""<<endl;
	}else{
		if (cmp==id1){
			system("cls");
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Primer Nombre Anterio: "<<no1<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Digite Nuevo Primer Nombre                                 "<<endl;
			cout<<"   .............................................................   "<<endl;
			cin>>no1;
			
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Edad Anterior: "<<ed1<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Digite Nueva Edad                                          "<<endl;
			cout<<"   .............................................................   "<<endl;
			cin>>ed1;
			
			system("cls");
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Resultado Del Icfes Anterior: "<<ic1<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Digite Nuevo Resultado Del Icfes                           "<<endl;
			cout<<"   .............................................................   "<<endl;
			cin>>ic1;
			
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Direccion Anterior: "<<di1<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Digite Nueva Direccion                                     "<<endl;
			cout<<"   .............................................................   "<<endl;
			cin>>di1;
			
			system("cls");
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Numero Telefonico Anterior: "<<te1<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Digite Nuevo Numero De Telefono                            "<<endl;
			cout<<"   .............................................................   "<<endl;
			cin>>te1;
			
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Correo Electronico Anterior: "<<co1<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Digite Nuevo Correo Electronico                            "<<endl;
			cout<<"   .............................................................   "<<endl;
			cin>>co1;
			
			system("cls");
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Numero De Documento Anterior: "<<id1<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Digite Nuevo Numero De Documento                           "<<endl;
			cout<<"   .............................................................   "<<endl;
			cin>>id1;
			
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Nombre carrera Anterior: "<<ca1<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Digite Nuevo Nombre De La Carrera                          "<<endl;
			cout<<"   .............................................................   "<<endl;
			cin>>ca1;
			
			system("cls");
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Pin De Inscripcion Anterior: "<<pi1<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Digite Nuevo Pin De Inscripcion                            "<<endl;
			cout<<"   .............................................................   "<<endl;
			cin>>pi1;
			
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Numero De Salon Anterior: "<<sa1<<endl;
			cout<<"   .............................................................   "<<endl;
			cout<<"   ..   Digite Nuevo Numero De Salon                               "<<endl;
			cout<<"   .............................................................   "<<endl;
			cin>>sa1;
			mue=1;
		}else{
			if (cmp==id2){
				system("cls");
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"   .............................................................   "<<endl;
				cout<<"   ..   Primer Nombre Anterio: "<<no2<<endl;
				cout<<"   .............................................................   "<<endl;
				cout<<"   ..   Digite Nuevo Primer Nombre                                 "<<endl;
				cout<<"   .............................................................   "<<endl;
				cin>>no2;
				
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"   .............................................................   "<<endl;
				cout<<"   ..   Edad Anterior: "<<ed2<<endl;
				cout<<"   .............................................................   "<<endl;
				cout<<"   ..   Digite Nueva Edad                                          "<<endl;
				cout<<"   .............................................................   "<<endl;
				cin>>ed2;
				
				system("cls");
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"   .............................................................   "<<endl;
				cout<<"   ..   Resultado Del Icfes Anterior: "<<ic2<<endl;
				cout<<"   .............................................................   "<<endl;
				cout<<"   ..   Digite Nuevo Resultado Del Icfes                           "<<endl;
				cout<<"   .............................................................   "<<endl;
				cin>>ic2;
				
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"   .............................................................   "<<endl;
				cout<<"   ..   Direccion Anterior: "<<di2<<endl;
				cout<<"   .............................................................   "<<endl;
				cout<<"   ..   Digite Nueva Direccion                                     "<<endl;
				cout<<"   .............................................................   "<<endl;
				cin>>di2;
				
				system("cls");
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"   .............................................................   "<<endl;
				cout<<"   ..   Numero Telefonico Anterior: "<<te2<<endl;
				cout<<"   .............................................................   "<<endl;
				cout<<"   ..   Digite Nuevo Numero De Telefono                            "<<endl;
				cout<<"   .............................................................   "<<endl;
				cin>>te2;
				
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"   .............................................................   "<<endl;
				cout<<"   ..   Correo Electronico Anterior: "<<co1<<endl;
				cout<<"   .............................................................   "<<endl;
				cout<<"   ..   Digite Nuevo Correo Electronico                            "<<endl;
				cout<<"   .............................................................   "<<endl;
				cin>>co2;
				
				system("cls");
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"   .............................................................   "<<endl;
				cout<<"   ..   Numero De Documento Anterior: "<<id2<<endl;
				cout<<"   .............................................................   "<<endl;
				cout<<"   ..   Digite Nuevo Numero De Documento                           "<<endl;
				cout<<"   .............................................................   "<<endl;
				cin>>id2;
				
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"   .............................................................   "<<endl;
				cout<<"   ..   Nombre carrera Anterior: "<<ca1<<endl;
				cout<<"   .............................................................   "<<endl;
				cout<<"   ..   Digite Nuevo Nombre De La Carrera                          "<<endl;
				cout<<"   .............................................................   "<<endl;
				cin>>ca2;
				
				system("cls");
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"   .............................................................   "<<endl;
				cout<<"   ..   Pin De Inscripcion Anterior: "<<pi2<<endl;
				cout<<"   .............................................................   "<<endl;
				cout<<"   ..   Digite Nuevo Pin De Inscripcion                            "<<endl;
				cout<<"   .............................................................   "<<endl;
				cin>>pi2;
				
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"   .............................................................   "<<endl;
				cout<<"   ..   Numero De Salon Anterior: "<<sa2<<endl;
				cout<<"   .............................................................   "<<endl;
				cout<<"   ..   Digite Nuevo Numero De Salon                               "<<endl;
				cout<<"   .............................................................   "<<endl;
				cin>>sa1;
				mue=1;
			}else{
				if (cmp==id3){
					system("cls");
					cout<<""<<endl;
					cout<<""<<endl;
					cout<<"   .............................................................   "<<endl;
					cout<<"   ..   Primer Nombre Anterio: "<<no3<<endl;
					cout<<"   .............................................................   "<<endl;
					cout<<"   ..   Digite Nuevo Primer Nombre                                 "<<endl;
					cout<<"   .............................................................   "<<endl;
					cin>>no3;
					
					cout<<""<<endl;
					cout<<""<<endl;
					cout<<"   .............................................................   "<<endl;
					cout<<"   ..   Edad Anterior: "<<ed3<<endl;
					cout<<"   .............................................................   "<<endl;
					cout<<"   ..   Digite Nueva Edad                                          "<<endl;
					cout<<"   .............................................................   "<<endl;
					cin>>ed3;
					
					system("cls");
					cout<<""<<endl;
					cout<<""<<endl;
					cout<<"   .............................................................   "<<endl;
					cout<<"   ..   Resultado Del Icfes Anterior: "<<ic3<<endl;
					cout<<"   .............................................................   "<<endl;
					cout<<"   ..   Digite Nuevo Resultado Del Icfes                           "<<endl;
					cout<<"   .............................................................   "<<endl;
					cin>>ic3;
					
					cout<<""<<endl;
					cout<<""<<endl;
					cout<<"   .............................................................   "<<endl;
					cout<<"   ..   Direccion Anterior: "<<di3<<endl;
					cout<<"   .............................................................   "<<endl;
					cout<<"   ..   Digite Nueva Direccion                                     "<<endl;
					cout<<"   .............................................................   "<<endl;
					cin>>di3;
					
					system("cls");
					cout<<""<<endl;
					cout<<""<<endl;
					cout<<"   .............................................................   "<<endl;
					cout<<"   ..   Numero Telefonico Anterior: "<<te3<<endl;
					cout<<"   .............................................................   "<<endl;
					cout<<"   ..   Digite Nuevo Numero De Telefono                            "<<endl;
					cout<<"   .............................................................   "<<endl;
					cin>>te3;
					
					cout<<""<<endl;
					cout<<""<<endl;
					cout<<"   .............................................................   "<<endl;
					cout<<"   ..   Correo Electronico Anterior: "<<co3<<endl;
					cout<<"   .............................................................   "<<endl;
					cout<<"   ..   Digite Nuevo Correo Electronico                            "<<endl;
					cout<<"   .............................................................   "<<endl;
					cin>>co3;
					
					system("cls");
					cout<<""<<endl;
					cout<<""<<endl;
					cout<<"   .............................................................   "<<endl;
					cout<<"   ..   Numero De Documento Anterior: "<<id3<<endl;
					cout<<"   .............................................................   "<<endl;
					cout<<"   ..   Digite Nuevo Numero De Documento                           "<<endl;
					cout<<"   .............................................................   "<<endl;
					cin>>id3;
					
					cout<<""<<endl;
					cout<<""<<endl;
					cout<<"   .............................................................   "<<endl;
					cout<<"   ..   Nombre carrera Anterior: "<<ca3<<endl;
					cout<<"   .............................................................   "<<endl;
					cout<<"   ..   Digite Nuevo Nombre De La Carrera                          "<<endl;
					cout<<"   .............................................................   "<<endl;
					cin>>ca3;
					
					system("cls");
					cout<<""<<endl;
					cout<<""<<endl;
					cout<<"   .............................................................   "<<endl;
					cout<<"   ..   Pin De Inscripcion Anterior: "<<pi3<<endl;
					cout<<"   .............................................................   "<<endl;
					cout<<"   ..   Digite Nuevo Pin De Inscripcion                            "<<endl;
					cout<<"   .............................................................   "<<endl;
					cin>>pi3;
					
					cout<<""<<endl;
					cout<<""<<endl;
					cout<<"   .............................................................   "<<endl;
					cout<<"   ..   Numero De Salon Anterior: "<<sa3<<endl;
					cout<<"   .............................................................   "<<endl;
					cout<<"   ..   Digite Nuevo Numero De Salon                               "<<endl;
					cout<<"   .............................................................   "<<endl;
					cin>>sa3;
					mue=1;
				}else{
					if (cmp==id4){
						system("cls");
						cout<<""<<endl;
						cout<<""<<endl;
						cout<<"   .............................................................   "<<endl;
						cout<<"   ..   Primer Nombre Anterio: "<<no4<<endl;
						cout<<"   .............................................................   "<<endl;
						cout<<"   ..   Digite Nuevo Primer Nombre                                 "<<endl;
						cout<<"   .............................................................   "<<endl;
						cin>>no4;
						
						cout<<""<<endl;
						cout<<""<<endl;
						cout<<"   .............................................................   "<<endl;
						cout<<"   ..   Edad Anterior: "<<ed4<<endl;
						cout<<"   .............................................................   "<<endl;
						cout<<"   ..   Digite Nueva Edad                                          "<<endl;
						cout<<"   .............................................................   "<<endl;
						cin>>ed4;
						
						system("cls");
						cout<<""<<endl;
						cout<<""<<endl;
						cout<<"   .............................................................   "<<endl;
						cout<<"   ..   Resultado Del Icfes Anterior: "<<ic4<<endl;
						cout<<"   .............................................................   "<<endl;
						cout<<"   ..   Digite Nuevo Resultado Del Icfes                           "<<endl;
						cout<<"   .............................................................   "<<endl;
						cin>>ic4;
						
						cout<<""<<endl;
						cout<<""<<endl;
						cout<<"   .............................................................   "<<endl;
						cout<<"   ..   Direccion Anterior: "<<di4<<endl;
						cout<<"   .............................................................   "<<endl;
						cout<<"   ..   Digite Nueva Direccion                                     "<<endl;
						cout<<"   .............................................................   "<<endl;
						cin>>di4;
						
						system("cls");
						cout<<""<<endl;
						cout<<""<<endl;
						cout<<"   .............................................................   "<<endl;
						cout<<"   ..   Numero Telefonico Anterior: "<<te4<<endl;
						cout<<"   .............................................................   "<<endl;
						cout<<"   ..   Digite Nuevo Numero De Telefono                            "<<endl;
						cout<<"   .............................................................   "<<endl;
						cin>>te4;
						
						cout<<""<<endl;
						cout<<""<<endl;
						cout<<"   .............................................................   "<<endl;
						cout<<"   ..   Correo Electronico Anterior: "<<co4<<endl;
						cout<<"   .............................................................   "<<endl;
						cout<<"   ..   Digite Nuevo Correo Electronico                            "<<endl;
						cout<<"   .............................................................   "<<endl;
						cin>>co4;
						
						system("cls");
						cout<<""<<endl;
						cout<<""<<endl;
						cout<<"   .............................................................   "<<endl;
						cout<<"   ..   Numero De Documento Anterior: "<<id4<<endl;
						cout<<"   .............................................................   "<<endl;
						cout<<"   ..   Digite Nuevo Numero De Documento                           "<<endl;
						cout<<"   .............................................................   "<<endl;
						cin>>id4;
						
						cout<<""<<endl;
						cout<<""<<endl;
						cout<<"   .............................................................   "<<endl;
						cout<<"   ..   Nombre carrera Anterior: "<<ca4<<endl;
						cout<<"   .............................................................   "<<endl;
						cout<<"   ..   Digite Nuevo Nombre De La Carrera                          "<<endl;
						cout<<"   .............................................................   "<<endl;
						cin>>ca4;
						
						system("cls");
						cout<<""<<endl;
						cout<<""<<endl;
						cout<<"   .............................................................   "<<endl;
						cout<<"   ..   Pin De Inscripcion Anterior: "<<pi4<<endl;
						cout<<"   .............................................................   "<<endl;
						cout<<"   ..   Digite Nuevo Pin De Inscripcion                            "<<endl;
						cout<<"   .............................................................   "<<endl;
						cin>>pi4;
						
						cout<<""<<endl;
						cout<<""<<endl;
						cout<<"   .............................................................   "<<endl;
						cout<<"   ..   Numero De Salon Anterior: "<<sa4<<endl;
						cout<<"   .............................................................   "<<endl;
						cout<<"   ..   Digite Nuevo Numero De Salon                               "<<endl;
						cout<<"   .............................................................   "<<endl;
						cin>>sa4;
						mue=1;
					}else{
						if (cmp==id5){
							system("cls");
							cout<<""<<endl;
							cout<<""<<endl;
							cout<<"   .............................................................   "<<endl;
							cout<<"   ..   Primer Nombre Anterio: "<<no5<<endl;
							cout<<"   .............................................................   "<<endl;
							cout<<"   ..   Digite Nuevo Primer Nombre                                 "<<endl;
							cout<<"   .............................................................   "<<endl;
							cin>>no5;
							
							cout<<""<<endl;
							cout<<""<<endl;
							cout<<"   .............................................................   "<<endl;
							cout<<"   ..   Edad Anterior: "<<ed5<<endl;
							cout<<"   .............................................................   "<<endl;
							cout<<"   ..   Digite Nueva Edad                                          "<<endl;
							cout<<"   .............................................................   "<<endl;
							cin>>ed5;
							
							system("cls");
							cout<<""<<endl;
							cout<<""<<endl;
							cout<<"   .............................................................   "<<endl;
							cout<<"   ..   Resultado Del Icfes Anterior: "<<ic5<<endl;
							cout<<"   .............................................................   "<<endl;
							cout<<"   ..   Digite Nuevo Resultado Del Icfes                           "<<endl;
							cout<<"   .............................................................   "<<endl;
							cin>>ic5;
							
							cout<<""<<endl;
							cout<<""<<endl;
							cout<<"   .............................................................   "<<endl;
							cout<<"   ..   Direccion Anterior: "<<di5<<endl;
							cout<<"   .............................................................   "<<endl;
							cout<<"   ..   Digite Nueva Direccion                                     "<<endl;
							cout<<"   .............................................................   "<<endl;
							cin>>di5;
							
							system("cls");
							cout<<""<<endl;
							cout<<""<<endl;
							cout<<"   .............................................................   "<<endl;
							cout<<"   ..   Numero Telefonico Anterior: "<<te5<<endl;
							cout<<"   .............................................................   "<<endl;
							cout<<"   ..   Digite Nuevo Numero De Telefono                            "<<endl;
							cout<<"   .............................................................   "<<endl;
							cin>>te5;
							
							cout<<""<<endl;
							cout<<""<<endl;
							cout<<"   .............................................................   "<<endl;
							cout<<"   ..   Correo Electronico Anterior: "<<co5<<endl;
							cout<<"   .............................................................   "<<endl;
							cout<<"   ..   Digite Nuevo Correo Electronico                            "<<endl;
							cout<<"   .............................................................   "<<endl;
							cin>>co5;
							
							system("cls");
							cout<<""<<endl;
							cout<<""<<endl;
							cout<<"   .............................................................   "<<endl;
							cout<<"   ..   Numero De Documento Anterior: "<<id1<<endl;
							cout<<"   .............................................................   "<<endl;
							cout<<"   ..   Digite Nuevo Numero De Documento                           "<<endl;
							cout<<"   .............................................................   "<<endl;
							cin>>id5;
							
							cout<<""<<endl;
							cout<<""<<endl;
							cout<<"   .............................................................   "<<endl;
							cout<<"   ..   Nombre carrera Anterior: "<<ca5<<endl;
							cout<<"   .............................................................   "<<endl;
							cout<<"   ..   Digite Nuevo Nombre De La Carrera                          "<<endl;
							cout<<"   .............................................................   "<<endl;
							cin>>ca5;
							
							system("cls");
							cout<<""<<endl;
							cout<<""<<endl;
							cout<<"   .............................................................   "<<endl;
							cout<<"   ..   Pin De Inscripcion Anterior: "<<pi5<<endl;
							cout<<"   .............................................................   "<<endl;
							cout<<"   ..   Digite Nuevo Pin De Inscripcion                            "<<endl;
							cout<<"   .............................................................   "<<endl;
							cin>>pi5;
							
							cout<<""<<endl;
							cout<<""<<endl;
							cout<<"   .............................................................   "<<endl;
							cout<<"   ..   Numero De Salon Anterior: "<<sa5<<endl;
							cout<<"   .............................................................   "<<endl;
							cout<<"   ..   Digite Nuevo Numero De Salon                               "<<endl;
							cout<<"   .............................................................   "<<endl;
							cin>>sa5;
							mue=1;
						}else{
							if (cmp==id6){
								system("cls");
								cout<<""<<endl;
								cout<<""<<endl;
								cout<<"   .............................................................   "<<endl;
								cout<<"   ..   Primer Nombre Anterio: "<<no5<<endl;
								cout<<"   .............................................................   "<<endl;
								cout<<"   ..   Digite Nuevo Primer Nombre                                 "<<endl;
								cout<<"   .............................................................   "<<endl;
								cin>>no5;
								
								cout<<""<<endl;
								cout<<""<<endl;
								cout<<"   .............................................................   "<<endl;
								cout<<"   ..   Edad Anterior: "<<ed5<<endl;
								cout<<"   .............................................................   "<<endl;
								cout<<"   ..   Digite Nueva Edad                                          "<<endl;
								cout<<"   .............................................................   "<<endl;
								cin>>ed5;
								
								system("cls");
								cout<<""<<endl;
								cout<<""<<endl;
								cout<<"   .............................................................   "<<endl;
								cout<<"   ..   Resultado Del Icfes Anterior: "<<ic5<<endl;
								cout<<"   .............................................................   "<<endl;
								cout<<"   ..   Digite Nuevo Resultado Del Icfes                           "<<endl;
								cout<<"   .............................................................   "<<endl;
								cin>>ic5;
								
								cout<<""<<endl;
								cout<<""<<endl;
								cout<<"   .............................................................   "<<endl;
								cout<<"   ..   Direccion Anterior: "<<di5<<endl;
								cout<<"   .............................................................   "<<endl;
								cout<<"   ..   Digite Nueva Direccion                                     "<<endl;
								cout<<"   .............................................................   "<<endl;
								cin>>di5;
								
								system("cls");
								cout<<""<<endl;
								cout<<""<<endl;
								cout<<"   .............................................................   "<<endl;
								cout<<"   ..   Numero Telefonico Anterior: "<<te5<<endl;
								cout<<"   .............................................................   "<<endl;
								cout<<"   ..   Digite Nuevo Numero De Telefono                            "<<endl;
								cout<<"   .............................................................   "<<endl;
								cin>>te5;
								
								cout<<""<<endl;
								cout<<""<<endl;
								cout<<"   .............................................................   "<<endl;
								cout<<"   ..   Correo Electronico Anterior: "<<co5<<endl;
								cout<<"   .............................................................   "<<endl;
								cout<<"   ..   Digite Nuevo Correo Electronico                            "<<endl;
								cout<<"   .............................................................   "<<endl;
								cin>>co5;
								
								system("cls");
								cout<<""<<endl;
								cout<<""<<endl;
								cout<<"   .............................................................   "<<endl;
								cout<<"   ..   Numero De Documento Anterior: "<<id5<<endl;
								cout<<"   .............................................................   "<<endl;
								cout<<"   ..   Digite Nuevo Numero De Documento                           "<<endl;
								cout<<"   .............................................................   "<<endl;
								cin>>id5;
								
								cout<<""<<endl;
								cout<<""<<endl;
								cout<<"   .............................................................   "<<endl;
								cout<<"   ..   Nombre carrera Anterior: "<<ca5<<endl;
								cout<<"   .............................................................   "<<endl;
								cout<<"   ..   Digite Nuevo Nombre De La Carrera                          "<<endl;
								cout<<"   .............................................................   "<<endl;
								cin>>ca5;
								
								system("cls");
								cout<<""<<endl;
								cout<<""<<endl;
								cout<<"   .............................................................   "<<endl;
								cout<<"   ..   Pin De Inscripcion Anterior: "<<pi5<<endl;
								cout<<"   .............................................................   "<<endl;
								cout<<"   ..   Digite Nuevo Pin De Inscripcion                            "<<endl;
								cout<<"   .............................................................   "<<endl;
								cin>>pi5;
								
								cout<<""<<endl;
								cout<<""<<endl;
								cout<<"   .............................................................   "<<endl;
								cout<<"   ..   Numero De Salon Anterior: "<<sa5<<endl;
								cout<<"   .............................................................   "<<endl;
								cout<<"   ..   Digite Nuevo Numero De Salon                               "<<endl;
								cout<<"   .............................................................   "<<endl;
								cin>>sa5;
								mue=1;
							}else{
								if (cmp==id7){
									system("cls");
									cout<<""<<endl;
									cout<<""<<endl;
									cout<<"   .............................................................   "<<endl;
									cout<<"   ..   Primer Nombre Anterio: "<<no7<<endl;
									cout<<"   .............................................................   "<<endl;
									cout<<"   ..   Digite Nuevo Primer Nombre                                 "<<endl;
									cout<<"   .............................................................   "<<endl;
									cin>>no7;
									
									cout<<""<<endl;
									cout<<""<<endl;
									cout<<"   .............................................................   "<<endl;
									cout<<"   ..   Edad Anterior: "<<ed7<<endl;
									cout<<"   .............................................................   "<<endl;
									cout<<"   ..   Digite Nueva Edad                                          "<<endl;
									cout<<"   .............................................................   "<<endl;
									cin>>ed7;
									
									system("cls");
									cout<<""<<endl;
									cout<<""<<endl;
									cout<<"   .............................................................   "<<endl;
									cout<<"   ..   Resultado Del Icfes Anterior: "<<ic7<<endl;
									cout<<"   .............................................................   "<<endl;
									cout<<"   ..   Digite Nuevo Resultado Del Icfes                           "<<endl;
									cout<<"   .............................................................   "<<endl;
									cin>>ic7;
									
									cout<<""<<endl;
									cout<<""<<endl;
									cout<<"   .............................................................   "<<endl;
									cout<<"   ..   Direccion Anterior: "<<di7<<endl;
									cout<<"   .............................................................   "<<endl;
									cout<<"   ..   Digite Nueva Direccion                                     "<<endl;
									cout<<"   .............................................................   "<<endl;
									cin>>di7;
									
									system("cls");
									cout<<""<<endl;
									cout<<""<<endl;
									cout<<"   .............................................................   "<<endl;
									cout<<"   ..   Numero Telefonico Anterior: "<<te7<<endl;
									cout<<"   .............................................................   "<<endl;
									cout<<"   ..   Digite Nuevo Numero De Telefono                            "<<endl;
									cout<<"   .............................................................   "<<endl;
									cin>>te7;
									
									cout<<""<<endl;
									cout<<""<<endl;
									cout<<"   .............................................................   "<<endl;
									cout<<"   ..   Correo Electronico Anterior: "<<co7<<endl;
									cout<<"   .............................................................   "<<endl;
									cout<<"   ..   Digite Nuevo Correo Electronico                            "<<endl;
									cout<<"   .............................................................   "<<endl;
									cin>>co7;
									
									system("cls");
									cout<<""<<endl;
									cout<<""<<endl;
									cout<<"   .............................................................   "<<endl;
									cout<<"   ..   Numero De Documento Anterior: "<<id7<<endl;
									cout<<"   .............................................................   "<<endl;
									cout<<"   ..   Digite Nuevo Numero De Documento                           "<<endl;
									cout<<"   .............................................................   "<<endl;
									cin>>id7;
									
									cout<<""<<endl;
									cout<<""<<endl;
									cout<<"   .............................................................   "<<endl;
									cout<<"   ..   Nombre carrera Anterior: "<<ca7<<endl;
									cout<<"   .............................................................   "<<endl;
									cout<<"   ..   Digite Nuevo Nombre De La Carrera                          "<<endl;
									cout<<"   .............................................................   "<<endl;
									cin>>ca7;
									
									system("cls");
									cout<<""<<endl;
									cout<<""<<endl;
									cout<<"   .............................................................   "<<endl;
									cout<<"   ..   Pin De Inscripcion Anterior: "<<pi7<<endl;
									cout<<"   .............................................................   "<<endl;
									cout<<"   ..   Digite Nuevo Pin De Inscripcion                            "<<endl;
									cout<<"   .............................................................   "<<endl;
									cin>>pi1;
									
									cout<<""<<endl;
									cout<<""<<endl;
									cout<<"   .............................................................   "<<endl;
									cout<<"   ..   Numero De Salon Anterior: "<<sa7<<endl;
									cout<<"   .............................................................   "<<endl;
									cout<<"   ..   Digite Nuevo Numero De Salon                               "<<endl;
									cout<<"   .............................................................   "<<endl;
									cin>>sa1;
									mue=1;
								}else{
									if (cmp==id8){
										system("cls");
										cout<<""<<endl;
										cout<<""<<endl;
										cout<<"   .............................................................   "<<endl;
										cout<<"   ..   Primer Nombre Anterio: "<<no8<<endl;
										cout<<"   .............................................................   "<<endl;
										cout<<"   ..   Digite Nuevo Primer Nombre                                 "<<endl;
										cout<<"   .............................................................   "<<endl;
										cin>>no8;
										
										cout<<""<<endl;
										cout<<""<<endl;
										cout<<"   .............................................................   "<<endl;
										cout<<"   ..   Edad Anterior: "<<ed8<<endl;
										cout<<"   .............................................................   "<<endl;
										cout<<"   ..   Digite Nueva Edad                                          "<<endl;
										cout<<"   .............................................................   "<<endl;
										cin>>ed8;
										
										system("cls");
										cout<<""<<endl;
										cout<<""<<endl;
										cout<<"   .............................................................   "<<endl;
										cout<<"   ..   Resultado Del Icfes Anterior: "<<ic8<<endl;
										cout<<"   .............................................................   "<<endl;
										cout<<"   ..   Digite Nuevo Resultado Del Icfes                           "<<endl;
										cout<<"   .............................................................   "<<endl;
										cin>>ic8;
										
										cout<<""<<endl;
										cout<<""<<endl;
										cout<<"   .............................................................   "<<endl;
										cout<<"   ..   Direccion Anterior: "<<di8<<endl;
										cout<<"   .............................................................   "<<endl;
										cout<<"   ..   Digite Nueva Direccion                                     "<<endl;
										cout<<"   .............................................................   "<<endl;
										cin>>di8;
										
										system("cls");
										cout<<""<<endl;
										cout<<""<<endl;
										cout<<"   .............................................................   "<<endl;
										cout<<"   ..   Numero Telefonico Anterior: "<<te8<<endl;
										cout<<"   .............................................................   "<<endl;
										cout<<"   ..   Digite Nuevo Numero De Telefono                            "<<endl;
										cout<<"   .............................................................   "<<endl;
										cin>>te8;
										
										cout<<""<<endl;
										cout<<""<<endl;
										cout<<"   .............................................................   "<<endl;
										cout<<"   ..   Correo Electronico Anterior: "<<co8<<endl;
										cout<<"   .............................................................   "<<endl;
										cout<<"   ..   Digite Nuevo Correo Electronico                            "<<endl;
										cout<<"   .............................................................   "<<endl;
										cin>>co8;
										
										system("cls");
										cout<<""<<endl;
										cout<<""<<endl;
										cout<<"   .............................................................   "<<endl;
										cout<<"   ..   Numero De Documento Anterior: "<<id8<<endl;
										cout<<"   .............................................................   "<<endl;
										cout<<"   ..   Digite Nuevo Numero De Documento                           "<<endl;
										cout<<"   .............................................................   "<<endl;
										cin>>id8;
										
										cout<<""<<endl;
										cout<<""<<endl;
										cout<<"   .............................................................   "<<endl;
										cout<<"   ..   Nombre carrera Anterior: "<<ca8<<endl;
										cout<<"   .............................................................   "<<endl;
										cout<<"   ..   Digite Nuevo Nombre De La Carrera                          "<<endl;
										cout<<"   .............................................................   "<<endl;
										cin>>ca8;
										
										system("cls");
										cout<<""<<endl;
										cout<<""<<endl;
										cout<<"   .............................................................   "<<endl;
										cout<<"   ..   Pin De Inscripcion Anterior: "<<pi8<<endl;
										cout<<"   .............................................................   "<<endl;
										cout<<"   ..   Digite Nuevo Pin De Inscripcion                            "<<endl;
										cout<<"   .............................................................   "<<endl;
										cin>>pi8;
										
										cout<<""<<endl;
										cout<<""<<endl;
										cout<<"   .............................................................   "<<endl;
										cout<<"   ..   Numero De Salon Anterior: "<<sa8<<endl;
										cout<<"   .............................................................   "<<endl;
										cout<<"   ..   Digite Nuevo Numero De Salon                               "<<endl;
										cout<<"   .............................................................   "<<endl;
										cin>>sa8;
										mue=1;
									}else{
										if (cmp==id9){
											system("cls");
											cout<<""<<endl;
											cout<<""<<endl;
											cout<<"   .............................................................   "<<endl;
											cout<<"   ..   Primer Nombre Anterio: "<<no9<<endl;
											cout<<"   .............................................................   "<<endl;
											cout<<"   ..   Digite Nuevo Primer Nombre                                 "<<endl;
											cout<<"   .............................................................   "<<endl;
											cin>>no9;
											
											cout<<""<<endl;
											cout<<""<<endl;
											cout<<"   .............................................................   "<<endl;
											cout<<"   ..   Edad Anterior: "<<ed9<<endl;
											cout<<"   .............................................................   "<<endl;
											cout<<"   ..   Digite Nueva Edad                                          "<<endl;
											cout<<"   .............................................................   "<<endl;
											cin>>ed9;
											
											system("cls");
											cout<<""<<endl;
											cout<<""<<endl;
											cout<<"   .............................................................   "<<endl;
											cout<<"   ..   Resultado Del Icfes Anterior: "<<ic9<<endl;
											cout<<"   .............................................................   "<<endl;
											cout<<"   ..   Digite Nuevo Resultado Del Icfes                           "<<endl;
											cout<<"   .............................................................   "<<endl;
											cin>>ic9;
											
											cout<<""<<endl;
											cout<<""<<endl;
											cout<<"   .............................................................   "<<endl;
											cout<<"   ..   Direccion Anterior: "<<di9<<endl;
											cout<<"   .............................................................   "<<endl;
											cout<<"   ..   Digite Nueva Direccion                                     "<<endl;
											cout<<"   .............................................................   "<<endl;
											cin>>di9;
											
											system("cls");
											cout<<""<<endl;
											cout<<""<<endl;
											cout<<"   .............................................................   "<<endl;
											cout<<"   ..   Numero Telefonico Anterior: "<<te9<<endl;
											cout<<"   .............................................................   "<<endl;
											cout<<"   ..   Digite Nuevo Numero De Telefono                            "<<endl;
											cout<<"   .............................................................   "<<endl;
											cin>>te9;
											
											cout<<""<<endl;
											cout<<""<<endl;
											cout<<"   .............................................................   "<<endl;
											cout<<"   ..   Correo Electronico Anterior: "<<co9<<endl;
											cout<<"   .............................................................   "<<endl;
											cout<<"   ..   Digite Nuevo Correo Electronico                            "<<endl;
											cout<<"   .............................................................   "<<endl;
											cin>>co9;
											
											system("cls");
											cout<<""<<endl;
											cout<<""<<endl;
											cout<<"   .............................................................   "<<endl;
											cout<<"   ..   Numero De Documento Anterior: "<<id1<<endl;
											cout<<"   .............................................................   "<<endl;
											cout<<"   ..   Digite Nuevo Numero De Documento                           "<<endl;
											cout<<"   .............................................................   "<<endl;
											cin>>id9;
											
											cout<<""<<endl;
											cout<<""<<endl;
											cout<<"   .............................................................   "<<endl;
											cout<<"   ..   Nombre carrera Anterior: "<<ca9<<endl;
											cout<<"   .............................................................   "<<endl;
											cout<<"   ..   Digite Nuevo Nombre De La Carrera                          "<<endl;
											cout<<"   .............................................................   "<<endl;
											cin>>ca9;
											
											system("cls");
											cout<<""<<endl;
											cout<<""<<endl;
											cout<<"   .............................................................   "<<endl;
											cout<<"   ..   Pin De Inscripcion Anterior: "<<pi9<<endl;
											cout<<"   .............................................................   "<<endl;
											cout<<"   ..   Digite Nuevo Pin De Inscripcion                            "<<endl;
											cout<<"   .............................................................   "<<endl;
											cin>>pi9;
											
											cout<<""<<endl;
											cout<<""<<endl;
											cout<<"   .............................................................   "<<endl;
											cout<<"   ..   Numero De Salon Anterior: "<<sa9<<endl;
											cout<<"   .............................................................   "<<endl;
											cout<<"   ..   Digite Nuevo Numero De Salon                               "<<endl;
											cout<<"   .............................................................   "<<endl;
											cin>>sa9;
											mue=1;
										}else{
											if (cmp==id10){
												system("cls");
												cout<<""<<endl;
												cout<<""<<endl;
												cout<<"   .............................................................   "<<endl;
												cout<<"   ..   Primer Nombre Anterio: "<<no10<<endl;
												cout<<"   .............................................................   "<<endl;
												cout<<"   ..   Digite Nuevo Primer Nombre                                 "<<endl;
												cout<<"   .............................................................   "<<endl;
												cin>>no10;
												
												cout<<""<<endl;
												cout<<""<<endl;
												cout<<"   .............................................................   "<<endl;
												cout<<"   ..   Edad Anterior: "<<ed10<<endl;
												cout<<"   .............................................................   "<<endl;
												cout<<"   ..   Digite Nueva Edad                                          "<<endl;
												cout<<"   .............................................................   "<<endl;
												cin>>ed10;
												
												system("cls");
												cout<<""<<endl;
												cout<<""<<endl;
												cout<<"   .............................................................   "<<endl;
												cout<<"   ..   Resultado Del Icfes Anterior: "<<ic10<<endl;
												cout<<"   .............................................................   "<<endl;
												cout<<"   ..   Digite Nuevo Resultado Del Icfes                           "<<endl;
												cout<<"   .............................................................   "<<endl;
												cin>>ic10;
												
												cout<<""<<endl;
												cout<<""<<endl;
												cout<<"   .............................................................   "<<endl;
												cout<<"   ..   Direccion Anterior: "<<di10<<endl;
												cout<<"   .............................................................   "<<endl;
												cout<<"   ..   Digite Nueva Direccion                                     "<<endl;
												cout<<"   .............................................................   "<<endl;
												cin>>di10;
												
												system("cls");
												cout<<""<<endl;
												cout<<""<<endl;
												cout<<"   .............................................................   "<<endl;
												cout<<"   ..   Numero Telefonico Anterior: "<<te10<<endl;
												cout<<"   .............................................................   "<<endl;
												cout<<"   ..   Digite Nuevo Numero De Telefono                            "<<endl;
												cout<<"   .............................................................   "<<endl;
												cin>>te10;
												
												cout<<""<<endl;
												cout<<""<<endl;
												cout<<"   .............................................................   "<<endl;
												cout<<"   ..   Correo Electronico Anterior: "<<co10<<endl;
												cout<<"   .............................................................   "<<endl;
												cout<<"   ..   Digite Nuevo Correo Electronico                            "<<endl;
												cout<<"   .............................................................   "<<endl;
												cin>>co10;
												
												system("cls");
												cout<<""<<endl;
												cout<<""<<endl;
												cout<<"   .............................................................   "<<endl;
												cout<<"   ..   Numero De Documento Anterior: "<<id10<<endl;
												cout<<"   .............................................................   "<<endl;
												cout<<"   ..   Digite Nuevo Numero De Documento                           "<<endl;
												cout<<"   .............................................................   "<<endl;
												cin>>id10;
												
												cout<<""<<endl;
												cout<<""<<endl;
												cout<<"   .............................................................   "<<endl;
												cout<<"   ..   Nombre carrera Anterior: "<<ca10<<endl;
												cout<<"   .............................................................   "<<endl;
												cout<<"   ..   Digite Nuevo Nombre De La Carrera                          "<<endl;
												cout<<"   .............................................................   "<<endl;
												cin>>ca10;
												
												system("cls");
												cout<<""<<endl;
												cout<<""<<endl;
												cout<<"   .............................................................   "<<endl;
												cout<<"   ..   Pin De Inscripcion Anterior: "<<pi10<<endl;
												cout<<"   .............................................................   "<<endl;
												cout<<"   ..   Digite Nuevo Pin De Inscripcion                            "<<endl;
												cout<<"   .............................................................   "<<endl;
												cin>>pi10;
												
												cout<<""<<endl;
												cout<<""<<endl;
												cout<<"   .............................................................   "<<endl;
												cout<<"   ..   Numero De Salon Anterior: "<<sa10<<endl;
												cout<<"   .............................................................   "<<endl;
												cout<<"   ..   Digite Nuevo Numero De Salon                               "<<endl;
												cout<<"   .............................................................   "<<endl;
												cin>>sa10;
												mue=1;
											}else{
												if (cmp==id11){
													system("cls");
													cout<<""<<endl;
													cout<<""<<endl;
													cout<<"   .............................................................   "<<endl;
													cout<<"   ..   Primer Nombre Anterio: "<<no11<<endl;
													cout<<"   .............................................................   "<<endl;
													cout<<"   ..   Digite Nuevo Primer Nombre                                 "<<endl;
													cout<<"   .............................................................   "<<endl;
													cin>>no11;
													
													cout<<""<<endl;
													cout<<""<<endl;
													cout<<"   .............................................................   "<<endl;
													cout<<"   ..   Edad Anterior: "<<ed11<<endl;
													cout<<"   .............................................................   "<<endl;
													cout<<"   ..   Digite Nueva Edad                                          "<<endl;
													cout<<"   .............................................................   "<<endl;
													cin>>ed11;
													
													system("cls");
													cout<<""<<endl;
													cout<<""<<endl;
													cout<<"   .............................................................   "<<endl;
													cout<<"   ..   Resultado Del Icfes Anterior: "<<ic11<<endl;
													cout<<"   .............................................................   "<<endl;
													cout<<"   ..   Digite Nuevo Resultado Del Icfes                           "<<endl;
													cout<<"   .............................................................   "<<endl;
													cin>>ic11;
													
													cout<<""<<endl;
													cout<<""<<endl;
													cout<<"   .............................................................   "<<endl;
													cout<<"   ..   Direccion Anterior: "<<di11<<endl;
													cout<<"   .............................................................   "<<endl;
													cout<<"   ..   Digite Nueva Direccion                                     "<<endl;
													cout<<"   .............................................................   "<<endl;
													cin>>di11;
													
													system("cls");
													cout<<""<<endl;
													cout<<""<<endl;
													cout<<"   .............................................................   "<<endl;
													cout<<"   ..   Numero Telefonico Anterior: "<<te11<<endl;
													cout<<"   .............................................................   "<<endl;
													cout<<"   ..   Digite Nuevo Numero De Telefono                            "<<endl;
													cout<<"   .............................................................   "<<endl;
													cin>>te11;
													
													cout<<""<<endl;
													cout<<""<<endl;
													cout<<"   .............................................................   "<<endl;
													cout<<"   ..   Correo Electronico Anterior: "<<co11<<endl;
													cout<<"   .............................................................   "<<endl;
													cout<<"   ..   Digite Nuevo Correo Electronico                            "<<endl;
													cout<<"   .............................................................   "<<endl;
													cin>>co11;
													
													system("cls");
													cout<<""<<endl;
													cout<<""<<endl;
													cout<<"   .............................................................   "<<endl;
													cout<<"   ..   Numero De Documento Anterior: "<<id11<<endl;
													cout<<"   .............................................................   "<<endl;
													cout<<"   ..   Digite Nuevo Numero De Documento                           "<<endl;
													cout<<"   .............................................................   "<<endl;
													cin>>id11;
													
													cout<<""<<endl;
													cout<<""<<endl;
													cout<<"   .............................................................   "<<endl;
													cout<<"   ..   Nombre carrera Anterior: "<<ca11<<endl;
													cout<<"   .............................................................   "<<endl;
													cout<<"   ..   Digite Nuevo Nombre De La Carrera                          "<<endl;
													cout<<"   .............................................................   "<<endl;
													cin>>ca11;
													
													system("cls");
													cout<<""<<endl;
													cout<<""<<endl;
													cout<<"   .............................................................   "<<endl;
													cout<<"   ..   Pin De Inscripcion Anterior: "<<pi11<<endl;
													cout<<"   .............................................................   "<<endl;
													cout<<"   ..   Digite Nuevo Pin De Inscripcion                            "<<endl;
													cout<<"   .............................................................   "<<endl;
													cin>>pi11;
													
													cout<<""<<endl;
													cout<<""<<endl;
													cout<<"   .............................................................   "<<endl;
													cout<<"   ..   Numero De Salon Anterior: "<<sa11<<endl;
													cout<<"   .............................................................   "<<endl;
													cout<<"   ..   Digite Nuevo Numero De Salon                               "<<endl;
													cout<<"   .............................................................   "<<endl;
													cin>>sa11;
													mue=1;
												}else{
													if (cmp==id12){
														system("cls");
														cout<<""<<endl;
														cout<<""<<endl;
														cout<<"   .............................................................   "<<endl;
														cout<<"   ..   Primer Nombre Anterio: "<<no12<<endl;
														cout<<"   .............................................................   "<<endl;
														cout<<"   ..   Digite Nuevo Primer Nombre                                 "<<endl;
														cout<<"   .............................................................   "<<endl;
														cin>>no12;
														
														cout<<""<<endl;
														cout<<""<<endl;
														cout<<"   .............................................................   "<<endl;
														cout<<"   ..   Edad Anterior: "<<ed12<<endl;
														cout<<"   .............................................................   "<<endl;
														cout<<"   ..   Digite Nueva Edad                                          "<<endl;
														cout<<"   .............................................................   "<<endl;
														cin>>ed12;
														
														system("cls");
														cout<<""<<endl;
														cout<<""<<endl;
														cout<<"   .............................................................   "<<endl;
														cout<<"   ..   Resultado Del Icfes Anterior: "<<ic12<<endl;
														cout<<"   .............................................................   "<<endl;
														cout<<"   ..   Digite Nuevo Resultado Del Icfes                           "<<endl;
														cout<<"   .............................................................   "<<endl;
														cin>>ic12;
														
														cout<<""<<endl;
														cout<<""<<endl;
														cout<<"   .............................................................   "<<endl;
														cout<<"   ..   Direccion Anterior: "<<di12<<endl;
														cout<<"   .............................................................   "<<endl;
														cout<<"   ..   Digite Nueva Direccion                                     "<<endl;
														cout<<"   .............................................................   "<<endl;
														cin>>di12;
														
														system("cls");
														cout<<""<<endl;
														cout<<""<<endl;
														cout<<"   .............................................................   "<<endl;
														cout<<"   ..   Numero Telefonico Anterior: "<<te12<<endl;
														cout<<"   .............................................................   "<<endl;
														cout<<"   ..   Digite Nuevo Numero De Telefono                            "<<endl;
														cout<<"   .............................................................   "<<endl;
														cin>>te12;
														
														cout<<""<<endl;
														cout<<""<<endl;
														cout<<"   .............................................................   "<<endl;
														cout<<"   ..   Correo Electronico Anterior: "<<co12<<endl;
														cout<<"   .............................................................   "<<endl;
														cout<<"   ..   Digite Nuevo Correo Electronico                            "<<endl;
														cout<<"   .............................................................   "<<endl;
														cin>>co12;
														
														system("cls");
														cout<<""<<endl;
														cout<<""<<endl;
														cout<<"   .............................................................   "<<endl;
														cout<<"   ..   Numero De Documento Anterior: "<<id12<<endl;
														cout<<"   .............................................................   "<<endl;
														cout<<"   ..   Digite Nuevo Numero De Documento                           "<<endl;
														cout<<"   .............................................................   "<<endl;
														cin>>id12;
														
														cout<<""<<endl;
														cout<<""<<endl;
														cout<<"   .............................................................   "<<endl;
														cout<<"   ..   Nombre carrera Anterior: "<<ca12<<endl;
														cout<<"   .............................................................   "<<endl;
														cout<<"   ..   Digite Nuevo Nombre De La Carrera                          "<<endl;
														cout<<"   .............................................................   "<<endl;
														cin>>ca12;
														
														system("cls");
														cout<<""<<endl;
														cout<<""<<endl;
														cout<<"   .............................................................   "<<endl;
														cout<<"   ..   Pin De Inscripcion Anterior: "<<pi12<<endl;
														cout<<"   .............................................................   "<<endl;
														cout<<"   ..   Digite Nuevo Pin De Inscripcion                            "<<endl;
														cout<<"   .............................................................   "<<endl;
														cin>>pi12;
														
														cout<<""<<endl;
														cout<<""<<endl;
														cout<<"   .............................................................   "<<endl;
														cout<<"   ..   Numero De Salon Anterior: "<<sa12<<endl;
														cout<<"   .............................................................   "<<endl;
														cout<<"   ..   Digite Nuevo Numero De Salon                               "<<endl;
														cout<<"   .............................................................   "<<endl;
														cin>>sa1;
														mue=1;
													}else{
														if (cmp==id13){
															system("cls");
															cout<<""<<endl;
															cout<<""<<endl;
															cout<<"   .............................................................   "<<endl;
															cout<<"   ..   Primer Nombre Anterio: "<<no13<<endl;
															cout<<"   .............................................................   "<<endl;
															cout<<"   ..   Digite Nuevo Primer Nombre                                 "<<endl;
															cout<<"   .............................................................   "<<endl;
															cin>>no13;
															
															cout<<""<<endl;
															cout<<""<<endl;
															cout<<"   .............................................................   "<<endl;
															cout<<"   ..   Edad Anterior: "<<ed13<<endl;
															cout<<"   .............................................................   "<<endl;
															cout<<"   ..   Digite Nueva Edad                                          "<<endl;
															cout<<"   .............................................................   "<<endl;
															cin>>ed13;
															
															system("cls");
															cout<<""<<endl;
															cout<<""<<endl;
															cout<<"   .............................................................   "<<endl;
															cout<<"   ..   Resultado Del Icfes Anterior: "<<ic13<<endl;
															cout<<"   .............................................................   "<<endl;
															cout<<"   ..   Digite Nuevo Resultado Del Icfes                           "<<endl;
															cout<<"   .............................................................   "<<endl;
															cin>>ic13;
															
															cout<<""<<endl;
															cout<<""<<endl;
															cout<<"   .............................................................   "<<endl;
															cout<<"   ..   Direccion Anterior: "<<di13<<endl;
															cout<<"   .............................................................   "<<endl;
															cout<<"   ..   Digite Nueva Direccion                                     "<<endl;
															cout<<"   .............................................................   "<<endl;
															cin>>di13;
															
															system("cls");
															cout<<""<<endl;
															cout<<""<<endl;
															cout<<"   .............................................................   "<<endl;
															cout<<"   ..   Numero Telefonico Anterior: "<<te13<<endl;
															cout<<"   .............................................................   "<<endl;
															cout<<"   ..   Digite Nuevo Numero De Telefono                            "<<endl;
															cout<<"   .............................................................   "<<endl;
															cin>>te13;
															
															cout<<""<<endl;
															cout<<""<<endl;
															cout<<"   .............................................................   "<<endl;
															cout<<"   ..   Correo Electronico Anterior: "<<co13<<endl;
															cout<<"   .............................................................   "<<endl;
															cout<<"   ..   Digite Nuevo Correo Electronico                            "<<endl;
															cout<<"   .............................................................   "<<endl;
															cin>>co13;
															
															system("cls");
															cout<<""<<endl;
															cout<<""<<endl;
															cout<<"   .............................................................   "<<endl;
															cout<<"   ..   Numero De Documento Anterior: "<<id13<<endl;
															cout<<"   .............................................................   "<<endl;
															cout<<"   ..   Digite Nuevo Numero De Documento                           "<<endl;
															cout<<"   .............................................................   "<<endl;
															cin>>id13;
															
															cout<<""<<endl;
															cout<<""<<endl;
															cout<<"   .............................................................   "<<endl;
															cout<<"   ..   Nombre carrera Anterior: "<<ca13<<endl;
															cout<<"   .............................................................   "<<endl;
															cout<<"   ..   Digite Nuevo Nombre De La Carrera                          "<<endl;
															cout<<"   .............................................................   "<<endl;
															cin>>ca13;
															
															system("cls");
															cout<<""<<endl;
															cout<<""<<endl;
															cout<<"   .............................................................   "<<endl;
															cout<<"   ..   Pin De Inscripcion Anterior: "<<pi13<<endl;
															cout<<"   .............................................................   "<<endl;
															cout<<"   ..   Digite Nuevo Pin De Inscripcion                            "<<endl;
															cout<<"   .............................................................   "<<endl;
															cin>>pi13;
															
															cout<<""<<endl;
															cout<<""<<endl;
															cout<<"   .............................................................   "<<endl;
															cout<<"   ..   Numero De Salon Anterior: "<<sa13<<endl;
															cout<<"   .............................................................   "<<endl;
															cout<<"   ..   Digite Nuevo Numero De Salon                               "<<endl;
															cout<<"   .............................................................   "<<endl;
															cin>>sa13;
															mue=1;
														}else{
															if (cmp==id14){
																system("cls");
																cout<<""<<endl;
																cout<<""<<endl;
																cout<<"   .............................................................   "<<endl;
																cout<<"   ..   Primer Nombre Anterio: "<<no14<<endl;
																cout<<"   .............................................................   "<<endl;
																cout<<"   ..   Digite Nuevo Primer Nombre                                 "<<endl;
																cout<<"   .............................................................   "<<endl;
																cin>>no14;
																
																cout<<""<<endl;
																cout<<""<<endl;
																cout<<"   .............................................................   "<<endl;
																cout<<"   ..   Edad Anterior: "<<ed14<<endl;
																cout<<"   .............................................................   "<<endl;
																cout<<"   ..   Digite Nueva Edad                                          "<<endl;
																cout<<"   .............................................................   "<<endl;
																cin>>ed14;
																
																system("cls");
																cout<<""<<endl;
																cout<<""<<endl;
																cout<<"   .............................................................   "<<endl;
																cout<<"   ..   Resultado Del Icfes Anterior: "<<ic14<<endl;
																cout<<"   .............................................................   "<<endl;
																cout<<"   ..   Digite Nuevo Resultado Del Icfes                           "<<endl;
																cout<<"   .............................................................   "<<endl;
																cin>>ic14;
																
																cout<<""<<endl;
																cout<<""<<endl;
																cout<<"   .............................................................   "<<endl;
																cout<<"   ..   Direccion Anterior: "<<di14<<endl;
																cout<<"   .............................................................   "<<endl;
																cout<<"   ..   Digite Nueva Direccion                                     "<<endl;
																cout<<"   .............................................................   "<<endl;
																cin>>di1;
																
																system("cls");
																cout<<""<<endl;
																cout<<""<<endl;
																cout<<"   .............................................................   "<<endl;
																cout<<"   ..   Numero Telefonico Anterior: "<<te14<<endl;
																cout<<"   .............................................................   "<<endl;
																cout<<"   ..   Digite Nuevo Numero De Telefono                            "<<endl;
																cout<<"   .............................................................   "<<endl;
																cin>>te1;
																
																cout<<""<<endl;
																cout<<""<<endl;
																cout<<"   .............................................................   "<<endl;
																cout<<"   ..   Correo Electronico Anterior: "<<co14<<endl;
																cout<<"   .............................................................   "<<endl;
																cout<<"   ..   Digite Nuevo Correo Electronico                            "<<endl;
																cout<<"   .............................................................   "<<endl;
																cin>>co14;
																
																system("cls");
																cout<<""<<endl;
																cout<<""<<endl;
																cout<<"   .............................................................   "<<endl;
																cout<<"   ..   Numero De Documento Anterior: "<<id14<<endl;
																cout<<"   .............................................................   "<<endl;
																cout<<"   ..   Digite Nuevo Numero De Documento                           "<<endl;
																cout<<"   .............................................................   "<<endl;
																cin>>id14;
																
																cout<<""<<endl;
																cout<<""<<endl;
																cout<<"   .............................................................   "<<endl;
																cout<<"   ..   Nombre carrera Anterior: "<<ca14<<endl;
																cout<<"   .............................................................   "<<endl;
																cout<<"   ..   Digite Nuevo Nombre De La Carrera                          "<<endl;
																cout<<"   .............................................................   "<<endl;
																cin>>ca14;
																
																system("cls");
																cout<<""<<endl;
																cout<<""<<endl;
																cout<<"   .............................................................   "<<endl;
																cout<<"   ..   Pin De Inscripcion Anterior: "<<pi14<<endl;
																cout<<"   .............................................................   "<<endl;
																cout<<"   ..   Digite Nuevo Pin De Inscripcion                            "<<endl;
																cout<<"   .............................................................   "<<endl;
																cin>>pi14;
																
																cout<<""<<endl;
																cout<<""<<endl;
																cout<<"   .............................................................   "<<endl;
																cout<<"   ..   Numero De Salon Anterior: "<<sa14<<endl;
																cout<<"   .............................................................   "<<endl;
																cout<<"   ..   Digite Nuevo Numero De Salon                               "<<endl;
																cout<<"   .............................................................   "<<endl;
																cin>>sa14;
																mue=1;
															}else{
																if (cmp==id15){
																	system("cls");
																	cout<<""<<endl;
																	cout<<""<<endl;
																	cout<<"   .............................................................   "<<endl;
																	cout<<"   ..   Primer Nombre Anterio: "<<no15<<endl;
																	cout<<"   .............................................................   "<<endl;
																	cout<<"   ..   Digite Nuevo Primer Nombre                                 "<<endl;
																	cout<<"   .............................................................   "<<endl;
																	cin>>no15;
																	
																	cout<<""<<endl;
																	cout<<""<<endl;
																	cout<<"   .............................................................   "<<endl;
																	cout<<"   ..   Edad Anterior: "<<ed15<<endl;
																	cout<<"   .............................................................   "<<endl;
																	cout<<"   ..   Digite Nueva Edad                                          "<<endl;
																	cout<<"   .............................................................   "<<endl;
																	cin>>ed15;
																	
																	system("cls");
																	cout<<""<<endl;
																	cout<<""<<endl;
																	cout<<"   .............................................................   "<<endl;
																	cout<<"   ..   Resultado Del Icfes Anterior: "<<ic15<<endl;
																	cout<<"   .............................................................   "<<endl;
																	cout<<"   ..   Digite Nuevo Resultado Del Icfes                           "<<endl;
																	cout<<"   .............................................................   "<<endl;
																	cin>>ic15;
																	
																	cout<<""<<endl;
																	cout<<""<<endl;
																	cout<<"   .............................................................   "<<endl;
																	cout<<"   ..   Direccion Anterior: "<<di15<<endl;
																	cout<<"   .............................................................   "<<endl;
																	cout<<"   ..   Digite Nueva Direccion                                     "<<endl;
																	cout<<"   .............................................................   "<<endl;
																	cin>>di15;
																	
																	system("cls");
																	cout<<""<<endl;
																	cout<<""<<endl;
																	cout<<"   .............................................................   "<<endl;
																	cout<<"   ..   Numero Telefonico Anterior: "<<te15<<endl;
																	cout<<"   .............................................................   "<<endl;
																	cout<<"   ..   Digite Nuevo Numero De Telefono                            "<<endl;
																	cout<<"   .............................................................   "<<endl;
																	cin>>te15;
																	
																	cout<<""<<endl;
																	cout<<""<<endl;
																	cout<<"   .............................................................   "<<endl;
																	cout<<"   ..   Correo Electronico Anterior: "<<co15<<endl;
																	cout<<"   .............................................................   "<<endl;
																	cout<<"   ..   Digite Nuevo Correo Electronico                            "<<endl;
																	cout<<"   .............................................................   "<<endl;
																	cin>>co15;
																	
																	system("cls");
																	cout<<""<<endl;
																	cout<<""<<endl;
																	cout<<"   .............................................................   "<<endl;
																	cout<<"   ..   Numero De Documento Anterior: "<<id15<<endl;
																	cout<<"   .............................................................   "<<endl;
																	cout<<"   ..   Digite Nuevo Numero De Documento                           "<<endl;
																	cout<<"   .............................................................   "<<endl;
																	cin>>id15;
																	
																	cout<<""<<endl;
																	cout<<""<<endl;
																	cout<<"   .............................................................   "<<endl;
																	cout<<"   ..   Nombre carrera Anterior: "<<ca15<<endl;
																	cout<<"   .............................................................   "<<endl;
																	cout<<"   ..   Digite Nuevo Nombre De La Carrera                          "<<endl;
																	cout<<"   .............................................................   "<<endl;
																	cin>>ca15;
																	
																	system("cls");
																	cout<<""<<endl;
																	cout<<""<<endl;
																	cout<<"   .............................................................   "<<endl;
																	cout<<"   ..   Pin De Inscripcion Anterior: "<<pi15<<endl;
																	cout<<"   .............................................................   "<<endl;
																	cout<<"   ..   Digite Nuevo Pin De Inscripcion                            "<<endl;
																	cout<<"   .............................................................   "<<endl;
																	cin>>pi15;
																	
																	cout<<""<<endl;
																	cout<<""<<endl;
																	cout<<"   .............................................................   "<<endl;
																	cout<<"   ..   Numero De Salon Anterior: "<<sa15<<endl;
																	cout<<"   .............................................................   "<<endl;
																	cout<<"   ..   Digite Nuevo Numero De Salon                               "<<endl;
																	cout<<"   .............................................................   "<<endl;
																	cin>>sa15;
																	mue=1;
																}else{
																	if (cmp==id16){
																		system("cls");
																		cout<<""<<endl;
																		cout<<""<<endl;
																		cout<<"   .............................................................   "<<endl;
																		cout<<"   ..   Primer Nombre Anterio: "<<no16<<endl;
																		cout<<"   .............................................................   "<<endl;
																		cout<<"   ..   Digite Nuevo Primer Nombre                                 "<<endl;
																		cout<<"   .............................................................   "<<endl;
																		cin>>no16;
																		
																		cout<<""<<endl;
																		cout<<""<<endl;
																		cout<<"   .............................................................   "<<endl;
																		cout<<"   ..   Edad Anterior: "<<ed16<<endl;
																		cout<<"   .............................................................   "<<endl;
																		cout<<"   ..   Digite Nueva Edad                                          "<<endl;
																		cout<<"   .............................................................   "<<endl;
																		cin>>ed16;
																		
																		system("cls");
																		cout<<""<<endl;
																		cout<<""<<endl;
																		cout<<"   .............................................................   "<<endl;
																		cout<<"   ..   Resultado Del Icfes Anterior: "<<ic16<<endl;
																		cout<<"   .............................................................   "<<endl;
																		cout<<"   ..   Digite Nuevo Resultado Del Icfes                           "<<endl;
																		cout<<"   .............................................................   "<<endl;
																		cin>>ic16;
																		
																		cout<<""<<endl;
																		cout<<""<<endl;
																		cout<<"   .............................................................   "<<endl;
																		cout<<"   ..   Direccion Anterior: "<<di16<<endl;
																		cout<<"   .............................................................   "<<endl;
																		cout<<"   ..   Digite Nueva Direccion                                     "<<endl;
																		cout<<"   .............................................................   "<<endl;
																		cin>>di16;
																		
																		system("cls");
																		cout<<""<<endl;
																		cout<<""<<endl;
																		cout<<"   .............................................................   "<<endl;
																		cout<<"   ..   Numero Telefonico Anterior: "<<te16<<endl;
																		cout<<"   .............................................................   "<<endl;
																		cout<<"   ..   Digite Nuevo Numero De Telefono                            "<<endl;
																		cout<<"   .............................................................   "<<endl;
																		cin>>te16;
																		
																		cout<<""<<endl;
																		cout<<""<<endl;
																		cout<<"   .............................................................   "<<endl;
																		cout<<"   ..   Correo Electronico Anterior: "<<co16<<endl;
																		cout<<"   .............................................................   "<<endl;
																		cout<<"   ..   Digite Nuevo Correo Electronico                            "<<endl;
																		cout<<"   .............................................................   "<<endl;
																		cin>>co16;
																		
																		system("cls");
																		cout<<""<<endl;
																		cout<<""<<endl;
																		cout<<"   .............................................................   "<<endl;
																		cout<<"   ..   Numero De Documento Anterior: "<<id16<<endl;
																		cout<<"   .............................................................   "<<endl;
																		cout<<"   ..   Digite Nuevo Numero De Documento                           "<<endl;
																		cout<<"   .............................................................   "<<endl;
																		cin>>id16;
																		
																		cout<<""<<endl;
																		cout<<""<<endl;
																		cout<<"   .............................................................   "<<endl;
																		cout<<"   ..   Nombre carrera Anterior: "<<ca16<<endl;
																		cout<<"   .............................................................   "<<endl;
																		cout<<"   ..   Digite Nuevo Nombre De La Carrera                          "<<endl;
																		cout<<"   .............................................................   "<<endl;
																		cin>>ca16;
																		
																		system("cls");
																		cout<<""<<endl;
																		cout<<""<<endl;
																		cout<<"   .............................................................   "<<endl;
																		cout<<"   ..   Pin De Inscripcion Anterior: "<<pi16<<endl;
																		cout<<"   .............................................................   "<<endl;
																		cout<<"   ..   Digite Nuevo Pin De Inscripcion                            "<<endl;
																		cout<<"   .............................................................   "<<endl;
																		cin>>pi16;
																		
																		cout<<""<<endl;
																		cout<<""<<endl;
																		cout<<"   .............................................................   "<<endl;
																		cout<<"   ..   Numero De Salon Anterior: "<<sa16<<endl;
																		cout<<"   .............................................................   "<<endl;
																		cout<<"   ..   Digite Nuevo Numero De Salon                               "<<endl;
																		cout<<"   .............................................................   "<<endl;
																		cin>>sa16;
																		mue=1;
																	}else{
																		if (cmp==id17){
																			system("cls");
																			cout<<""<<endl;
																			cout<<""<<endl;
																			cout<<"   .............................................................   "<<endl;
																			cout<<"   ..   Primer Nombre Anterio: "<<no17<<endl;
																			cout<<"   .............................................................   "<<endl;
																			cout<<"   ..   Digite Nuevo Primer Nombre                                 "<<endl;
																			cout<<"   .............................................................   "<<endl;
																			cin>>no17;
																			
																			cout<<""<<endl;
																			cout<<""<<endl;
																			cout<<"   .............................................................   "<<endl;
																			cout<<"   ..   Edad Anterior: "<<ed17<<endl;
																			cout<<"   .............................................................   "<<endl;
																			cout<<"   ..   Digite Nueva Edad                                          "<<endl;
																			cout<<"   .............................................................   "<<endl;
																			cin>>ed17;
																			
																			system("cls");
																			cout<<""<<endl;
																			cout<<""<<endl;
																			cout<<"   .............................................................   "<<endl;
																			cout<<"   ..   Resultado Del Icfes Anterior: "<<ic17<<endl;
																			cout<<"   .............................................................   "<<endl;
																			cout<<"   ..   Digite Nuevo Resultado Del Icfes                           "<<endl;
																			cout<<"   .............................................................   "<<endl;
																			cin>>ic17;
																			
																			cout<<""<<endl;
																			cout<<""<<endl;
																			cout<<"   .............................................................   "<<endl;
																			cout<<"   ..   Direccion Anterior: "<<di17<<endl;
																			cout<<"   .............................................................   "<<endl;
																			cout<<"   ..   Digite Nueva Direccion                                     "<<endl;
																			cout<<"   .............................................................   "<<endl;
																			cin>>di17;
																			
																			system("cls");
																			cout<<""<<endl;
																			cout<<""<<endl;
																			cout<<"   .............................................................   "<<endl;
																			cout<<"   ..   Numero Telefonico Anterior: "<<te17<<endl;
																			cout<<"   .............................................................   "<<endl;
																			cout<<"   ..   Digite Nuevo Numero De Telefono                            "<<endl;
																			cout<<"   .............................................................   "<<endl;
																			cin>>te17;
																			
																			cout<<""<<endl;
																			cout<<""<<endl;
																			cout<<"   .............................................................   "<<endl;
																			cout<<"   ..   Correo Electronico Anterior: "<<co17<<endl;
																			cout<<"   .............................................................   "<<endl;
																			cout<<"   ..   Digite Nuevo Correo Electronico                            "<<endl;
																			cout<<"   .............................................................   "<<endl;
																			cin>>co17;
																			
																			system("cls");
																			cout<<""<<endl;
																			cout<<""<<endl;
																			cout<<"   .............................................................   "<<endl;
																			cout<<"   ..   Numero De Documento Anterior: "<<id17<<endl;
																			cout<<"   .............................................................   "<<endl;
																			cout<<"   ..   Digite Nuevo Numero De Documento                           "<<endl;
																			cout<<"   .............................................................   "<<endl;
																			cin>>id17;
																			
																			cout<<""<<endl;
																			cout<<""<<endl;
																			cout<<"   .............................................................   "<<endl;
																			cout<<"   ..   Nombre carrera Anterior: "<<ca17<<endl;
																			cout<<"   .............................................................   "<<endl;
																			cout<<"   ..   Digite Nuevo Nombre De La Carrera                          "<<endl;
																			cout<<"   .............................................................   "<<endl;
																			cin>>ca17;
																			
																			system("cls");
																			cout<<""<<endl;
																			cout<<""<<endl;
																			cout<<"   .............................................................   "<<endl;
																			cout<<"   ..   Pin De Inscripcion Anterior: "<<pi17<<endl;
																			cout<<"   .............................................................   "<<endl;
																			cout<<"   ..   Digite Nuevo Pin De Inscripcion                            "<<endl;
																			cout<<"   .............................................................   "<<endl;
																			cin>>pi17;
																			
																			cout<<""<<endl;
																			cout<<""<<endl;
																			cout<<"   .............................................................   "<<endl;
																			cout<<"   ..   Numero De Salon Anterior: "<<sa17<<endl;
																			cout<<"   .............................................................   "<<endl;
																			cout<<"   ..   Digite Nuevo Numero De Salon                               "<<endl;
																			cout<<"   .............................................................   "<<endl;
																			cin>>sa17;
																			mue=1;
																		}else{
																			if (cmp==id18){
																				system("cls");
																				cout<<""<<endl;
																				cout<<""<<endl;
																				cout<<"   .............................................................   "<<endl;
																				cout<<"   ..   Primer Nombre Anterio: "<<no18<<endl;
																				cout<<"   .............................................................   "<<endl;
																				cout<<"   ..   Digite Nuevo Primer Nombre                                 "<<endl;
																				cout<<"   .............................................................   "<<endl;
																				cin>>no18;
																				
																				cout<<""<<endl;
																				cout<<""<<endl;
																				cout<<"   .............................................................   "<<endl;
																				cout<<"   ..   Edad Anterior: "<<ed18<<endl;
																				cout<<"   .............................................................   "<<endl;
																				cout<<"   ..   Digite Nueva Edad                                          "<<endl;
																				cout<<"   .............................................................   "<<endl;
																				cin>>ed18;
																				
																				system("cls");
																				cout<<""<<endl;
																				cout<<""<<endl;
																				cout<<"   .............................................................   "<<endl;
																				cout<<"   ..   Resultado Del Icfes Anterior: "<<ic18<<endl;
																				cout<<"   .............................................................   "<<endl;
																				cout<<"   ..   Digite Nuevo Resultado Del Icfes                           "<<endl;
																				cout<<"   .............................................................   "<<endl;
																				cin>>ic18;
																				
																				cout<<""<<endl;
																				cout<<""<<endl;
																				cout<<"   .............................................................   "<<endl;
																				cout<<"   ..   Direccion Anterior: "<<di18<<endl;
																				cout<<"   .............................................................   "<<endl;
																				cout<<"   ..   Digite Nueva Direccion                                     "<<endl;
																				cout<<"   .............................................................   "<<endl;
																				cin>>di18;
																				
																				system("cls");
																				cout<<""<<endl;
																				cout<<""<<endl;
																				cout<<"   .............................................................   "<<endl;
																				cout<<"   ..   Numero Telefonico Anterior: "<<te18<<endl;
																				cout<<"   .............................................................   "<<endl;
																				cout<<"   ..   Digite Nuevo Numero De Telefono                            "<<endl;
																				cout<<"   .............................................................   "<<endl;
																				cin>>te18;
																				
																				cout<<""<<endl;
																				cout<<""<<endl;
																				cout<<"   .............................................................   "<<endl;
																				cout<<"   ..   Correo Electronico Anterior: "<<co18<<endl;
																				cout<<"   .............................................................   "<<endl;
																				cout<<"   ..   Digite Nuevo Correo Electronico                            "<<endl;
																				cout<<"   .............................................................   "<<endl;
																				cin>>co18;
																				
																				system("cls");
																				cout<<""<<endl;
																				cout<<""<<endl;
																				cout<<"   .............................................................   "<<endl;
																				cout<<"   ..   Numero De Documento Anterior: "<<id18<<endl;
																				cout<<"   .............................................................   "<<endl;
																				cout<<"   ..   Digite Nuevo Numero De Documento                           "<<endl;
																				cout<<"   .............................................................   "<<endl;
																				cin>>id18;
																				
																				cout<<""<<endl;
																				cout<<""<<endl;
																				cout<<"   .............................................................   "<<endl;
																				cout<<"   ..   Nombre carrera Anterior: "<<ca18<<endl;
																				cout<<"   .............................................................   "<<endl;
																				cout<<"   ..   Digite Nuevo Nombre De La Carrera                          "<<endl;
																				cout<<"   .............................................................   "<<endl;
																				cin>>ca18;
																				
																				system("cls");
																				cout<<""<<endl;
																				cout<<""<<endl;
																				cout<<"   .............................................................   "<<endl;
																				cout<<"   ..   Pin De Inscripcion Anterior: "<<pi18<<endl;
																				cout<<"   .............................................................   "<<endl;
																				cout<<"   ..   Digite Nuevo Pin De Inscripcion                            "<<endl;
																				cout<<"   .............................................................   "<<endl;
																				cin>>pi18;
																				
																				cout<<""<<endl;
																				cout<<""<<endl;
																				cout<<"   .............................................................   "<<endl;
																				cout<<"   ..   Numero De Salon Anterior: "<<sa18<<endl;
																				cout<<"   .............................................................   "<<endl;
																				cout<<"   ..   Digite Nuevo Numero De Salon                               "<<endl;
																				cout<<"   .............................................................   "<<endl;
																				cin>>sa18;
																				mue=1;
																			}else{
																				if (cmp==id19){
																					system("cls");
																					cout<<""<<endl;
																					cout<<""<<endl;
																					cout<<"   .............................................................   "<<endl;
																					cout<<"   ..   Primer Nombre Anterio: "<<no19<<endl;
																					cout<<"   .............................................................   "<<endl;
																					cout<<"   ..   Digite Nuevo Primer Nombre                                 "<<endl;
																					cout<<"   .............................................................   "<<endl;
																					cin>>no19;
																					
																					cout<<""<<endl;
																					cout<<""<<endl;
																					cout<<"   .............................................................   "<<endl;
																					cout<<"   ..   Edad Anterior: "<<ed19<<endl;
																					cout<<"   .............................................................   "<<endl;
																					cout<<"   ..   Digite Nueva Edad                                          "<<endl;
																					cout<<"   .............................................................   "<<endl;
																					cin>>ed19;
																					
																					system("cls");
																					cout<<""<<endl;
																					cout<<""<<endl;
																					cout<<"   .............................................................   "<<endl;
																					cout<<"   ..   Resultado Del Icfes Anterior: "<<ic19<<endl;
																					cout<<"   .............................................................   "<<endl;
																					cout<<"   ..   Digite Nuevo Resultado Del Icfes                           "<<endl;
																					cout<<"   .............................................................   "<<endl;
																					cin>>ic19;
																					
																					cout<<""<<endl;
																					cout<<""<<endl;
																					cout<<"   .............................................................   "<<endl;
																					cout<<"   ..   Direccion Anterior: "<<di19<<endl;
																					cout<<"   .............................................................   "<<endl;
																					cout<<"   ..   Digite Nueva Direccion                                     "<<endl;
																					cout<<"   .............................................................   "<<endl;
																					cin>>di19;
																					
																					system("cls");
																					cout<<""<<endl;
																					cout<<""<<endl;
																					cout<<"   .............................................................   "<<endl;
																					cout<<"   ..   Numero Telefonico Anterior: "<<te19<<endl;
																					cout<<"   .............................................................   "<<endl;
																					cout<<"   ..   Digite Nuevo Numero De Telefono                            "<<endl;
																					cout<<"   .............................................................   "<<endl;
																					cin>>te19;
																					
																					cout<<""<<endl;
																					cout<<""<<endl;
																					cout<<"   .............................................................   "<<endl;
																					cout<<"   ..   Correo Electronico Anterior: "<<co19<<endl;
																					cout<<"   .............................................................   "<<endl;
																					cout<<"   ..   Digite Nuevo Correo Electronico                            "<<endl;
																					cout<<"   .............................................................   "<<endl;
																					cin>>co19;
																					
																					system("cls");
																					cout<<""<<endl;
																					cout<<""<<endl;
																					cout<<"   .............................................................   "<<endl;
																					cout<<"   ..   Numero De Documento Anterior: "<<id19<<endl;
																					cout<<"   .............................................................   "<<endl;
																					cout<<"   ..   Digite Nuevo Numero De Documento                           "<<endl;
																					cout<<"   .............................................................   "<<endl;
																					cin>>id19;
																					
																					cout<<""<<endl;
																					cout<<""<<endl;
																					cout<<"   .............................................................   "<<endl;
																					cout<<"   ..   Nombre carrera Anterior: "<<ca19<<endl;
																					cout<<"   .............................................................   "<<endl;
																					cout<<"   ..   Digite Nuevo Nombre De La Carrera                          "<<endl;
																					cout<<"   .............................................................   "<<endl;
																					cin>>ca19;
																					
																					system("cls");
																					cout<<""<<endl;
																					cout<<""<<endl;
																					cout<<"   .............................................................   "<<endl;
																					cout<<"   ..   Pin De Inscripcion Anterior: "<<pi19<<endl;
																					cout<<"   .............................................................   "<<endl;
																					cout<<"   ..   Digite Nuevo Pin De Inscripcion                            "<<endl;
																					cout<<"   .............................................................   "<<endl;
																					cin>>pi19;
																					
																					cout<<""<<endl;
																					cout<<""<<endl;
																					cout<<"   .............................................................   "<<endl;
																					cout<<"   ..   Numero De Salon Anterior: "<<sa19<<endl;
																					cout<<"   .............................................................   "<<endl;
																					cout<<"   ..   Digite Nuevo Numero De Salon                               "<<endl;
																					cout<<"   .............................................................   "<<endl;
																					cin>>sa19;
																					mue=1;
																				}else{
																					if (cmp==id20){
																						system("cls");
																						cout<<""<<endl;
																						cout<<""<<endl;
																						cout<<"   .............................................................   "<<endl;
																						cout<<"   ..   Primer Nombre Anterio: "<<no20<<endl;
																						cout<<"   .............................................................   "<<endl;
																						cout<<"   ..   Digite Nuevo Primer Nombre                                 "<<endl;
																						cout<<"   .............................................................   "<<endl;
																						cin>>no20;
																						
																						cout<<""<<endl;
																						cout<<""<<endl;
																						cout<<"   .............................................................   "<<endl;
																						cout<<"   ..   Edad Anterior: "<<ed20<<endl;
																						cout<<"   .............................................................   "<<endl;
																						cout<<"   ..   Digite Nueva Edad                                          "<<endl;
																						cout<<"   .............................................................   "<<endl;
																						cin>>ed20;
																						
																						system("cls");
																						cout<<""<<endl;
																						cout<<""<<endl;
																						cout<<"   .............................................................   "<<endl;
																						cout<<"   ..   Resultado Del Icfes Anterior: "<<ic20<<endl;
																						cout<<"   .............................................................   "<<endl;
																						cout<<"   ..   Digite Nuevo Resultado Del Icfes                           "<<endl;
																						cout<<"   .............................................................   "<<endl;
																						cin>>ic20;
																						
																						cout<<""<<endl;
																						cout<<""<<endl;
																						cout<<"   .............................................................   "<<endl;
																						cout<<"   ..   Direccion Anterior: "<<di20<<endl;
																						cout<<"   .............................................................   "<<endl;
																						cout<<"   ..   Digite Nueva Direccion                                     "<<endl;
																						cout<<"   .............................................................   "<<endl;
																						cin>>di20;
																						
																						system("cls");
																						cout<<""<<endl;
																						cout<<""<<endl;
																						cout<<"   .............................................................   "<<endl;
																						cout<<"   ..   Numero Telefonico Anterior: "<<te20<<endl;
																						cout<<"   .............................................................   "<<endl;
																						cout<<"   ..   Digite Nuevo Numero De Telefono                            "<<endl;
																						cout<<"   .............................................................   "<<endl;
																						cin>>te20;
																						
																						cout<<""<<endl;
																						cout<<""<<endl;
																						cout<<"   .............................................................   "<<endl;
																						cout<<"   ..   Correo Electronico Anterior: "<<co20<<endl;
																						cout<<"   .............................................................   "<<endl;
																						cout<<"   ..   Digite Nuevo Correo Electronico                            "<<endl;
																						cout<<"   .............................................................   "<<endl;
																						cin>>co20;
																						
																						system("cls");
																						cout<<""<<endl;
																						cout<<""<<endl;
																						cout<<"   .............................................................   "<<endl;
																						cout<<"   ..   Numero De Documento Anterior: "<<id20<<endl;
																						cout<<"   .............................................................   "<<endl;
																						cout<<"   ..   Digite Nuevo Numero De Documento                           "<<endl;
																						cout<<"   .............................................................   "<<endl;
																						cin>>id20;
																						
																						cout<<""<<endl;
																						cout<<""<<endl;
																						cout<<"   .............................................................   "<<endl;
																						cout<<"   ..   Nombre carrera Anterior: "<<ca20<<endl;
																						cout<<"   .............................................................   "<<endl;
																						cout<<"   ..   Digite Nuevo Nombre De La Carrera                          "<<endl;
																						cout<<"   .............................................................   "<<endl;
																						cin>>ca20;
																						
																						system("cls");
																						cout<<""<<endl;
																						cout<<""<<endl;
																						cout<<"   .............................................................   "<<endl;
																						cout<<"   ..   Pin De Inscripcion Anterior: "<<pi20<<endl;
																						cout<<"   .............................................................   "<<endl;
																						cout<<"   ..   Digite Nuevo Pin De Inscripcion                            "<<endl;
																						cout<<"   .............................................................   "<<endl;
																						cin>>pi20;
																						
																						cout<<""<<endl;
																						cout<<""<<endl;
																						cout<<"   .............................................................   "<<endl;
																						cout<<"   ..   Numero De Salon Anterior: "<<sa20<<endl;
																						cout<<"   .............................................................   "<<endl;
																						cout<<"   ..   Digite Nuevo Numero De Salon                               "<<endl;
																						cout<<"   .............................................................   "<<endl;
																						cin>>sa20;
																						mue=1;
																					}else{
																						if (nada==1){
																							
																						}else{
																							cout<<""<<endl;
																							cout<<"               .........................................................."<<endl;
																							cout<<"               ..     Este Dato No Se Encuentra Registrado En La BD    .."<<endl;
																							cout<<"               .........................................................."<<endl;
																							cout<<""<<endl;
																							mue=0;	
																						}
																					}	
																				}	
																			}	
																		}	
																	}	
																}	
															}	
														}	
													}	
												}	
											}	
										}	
									}	
								}	
							}	
						}	
					}	
				}	
			}
		}
	}
	if (mue==0){
		
	}else{
		system("cls");
		cout<<""<<endl;
		cout<<""<<endl;
		for (i=0; i<8; i++){
			if (i==0 or i==5){
				for (j=0; j<18; j++){
					if (j==0){
						cout<<"  ..";
					}else {
						if (j==17){
							cout<<".."<<endl;
						}else{
							cout<<"..";
						}
					}
				}
			}else{
				if (i==1 or i==4){
					for (k=0; k<18; k++){
						if (k==0){
							cout<<"  ..";
						}else{
							if (k==17){
								cout<<".."<<endl;
							}else{
								cout<<"  ";
							}
						}
					}
				}else{
					if (i==2){
						cout<<"  ..          Actualizando          .."<<endl;
					}else{
						if (i==3){
							cout<<"  ..         Base De  Dato          .."<<endl;
						}else{
							if (i==6){
								cout<<""<<endl;
							}else{
								for (k=0; k<8; k++){
									if(k==0){
										cout<<"      ||";
										Sleep(1000);
									}else{
										if(k==1){
											cout<<"|||";
											Sleep(1300);
										}else{
											if(k==2){
												cout<<"||||";
												Sleep(1800);
											}else{
												if(k==3){
													cout<<"|||||";
													Sleep(1000);
												}else{
													if(k==4){
														cout<<"||";
														Sleep(1200);
													}else{
														if(k==5){
															cout<<"|||";
															Sleep(1100);
														}else{
															if(k==6){
																cout<<"||||";
																Sleep(1600);
															}else{
																if(k==7){
																	cout<<"|||||"<<endl;
																	Sleep(1800);
																}else{
																	
																} 
																
															} 
														} 
													} 
												} 	
											} 
										}
									}
								}
								
							}
						}
					}  
				} 
				
			}
		}
		cout<<""<<endl;
		cout<<"        Actiualizacion Finalizada"<<endl;
		cout<<"        _________________________"<<endl;
		cout<<""<<endl;
		cout<<""<<endl;
	}
	system("pause");
}//fin de modificar



void eliminar(){
	mue=0;
	int op3;
	system("cls");
	cout<<""<<endl;
	cout<<""<<endl; 
	for (i=0; i<20; i++){
		if(i==0){
			cout<<"                    ...";	
		}else{
			if(i==19){
				cout<<".."<<endl;	
			}else{
				cout<<"..";
			}
		}
	}
	cout<<"                    ..               Eliminar              ..   "<<endl; 
	for (i=0; i<20; i++){
		if(i==0){
			cout<<"                    ...";	
		}else{
			if(i==19){
				cout<<".."<<endl;	
			}else{
				cout<<"..";
			}
		}
	} 
	cout<<""<<endl;
	cout<<"                  (ADVERTENCIA: Los Datos no seran Recuperados) "<<endl;
	cout<<""<<endl;
	for (i=0; i<20; i++){
		if(i==0){
			cout<<"                    ...";	
		}else{
			if(i==19){
				cout<<".."<<endl;	
			}else{
				cout<<"..";
			}
		}
	}
	cout<<"                    ..        Ingrese Identificacion       ..   "<<endl; 
	for (i=0; i<20; i++){
		if(i==0){
			cout<<"                    ...";	
		}else{
			if(i==19){
				cout<<".."<<endl;	
			}else{
				cout<<"..";
			}
		}
	}
	cin>>(cmp);
	
	for(int i=0;i<=contador;i++){
		if(strcmp(dato[i].id,cmp)==0){
			
			cout<<"                    .........................................   "<<endl; 
			cout<<"                    ..        Este Dato Existe Pero        ..   "<<endl;
			cout<<"                    ..      No Es  Posible Eliminarlo      ..   "<<endl; 
			cout<<"                    .........................................   "<<endl;
			cout<<""<<endl;
			mue=2;
			system("pause");
		}//fin de condicional if
	}//fin de ciclo for
	if (cmp==id21){
		cout<<""<<endl;
		cout<<"                    ............................................."<<endl; 
		cout<<"                    ..  Este Id Es Invaldo Intentelo De Nuevo  .."<<endl; 
		cout<<"                    ............................................."<<endl; 
		cout<<""<<endl;
		system("pause");
		mue=2;
	}else{
		if (cmp==id1){
			cout<<"   ............................................................................   "<<endl;
			cout<<"        Nombre completo:                    "<<no1<<endl;
			cout<<"        Edad:                               "<<ed1<<endl;
			cout<<"        Resultado de la prueba del icfes:   "<<ic1<<endl;
			cout<<"        Direccion:                          "<<di1<<endl;
			cout<<"        Numero Telefonico:                  "<<te1<<endl;
			cout<<"        Correo electronico:                 "<<co1<<endl;
			cout<<"        Numero de documento:                "<<id1<<endl;
			cout<<"        Nombre carrera:                     "<<ca1<<endl;
			cout<<"        Pin de inscripcion:                 "<<pi1<<endl;
			cout<<"        Numero de salon:                    "<<sa1<<endl;
			cout<<"   ............................................................................   "<<endl;
			cout<<""<<endl;
			cout<<"                     Usted Esta Eleminando Este Estudiante"<<endl;
			cout<<""<<endl;
			system("Pause");
			
			no1="0000";
			ed1="0000";
			ic1="0000";
			di1="0000";
			te1="0000";
			co1="0000";
			id1="0000";
			ca1="0000";
			pi1="0000";
			sa1="0000";
			mue=1;
		}else{
			if (cmp==id2){
				cout<<"   ............................................................................   "<<endl;
				cout<<"        Nombre completo:                    "<<no2<<endl;
				cout<<"        Edad:                               "<<ed2<<endl;
				cout<<"        Resultado de la prueba del icfes:   "<<ic2<<endl;
				cout<<"        Direccion:                          "<<di2<<endl;
				cout<<"        Numero Telefonico:                  "<<te2<<endl;
				cout<<"        Correo electronico:                 "<<co2<<endl;
				cout<<"        Numero de documento:                "<<id2<<endl;
				cout<<"        Nombre carrera:                     "<<ca2<<endl;
				cout<<"        Pin de inscripcion:                 "<<pi2<<endl;
				cout<<"        Numero de salon:                    "<<sa2<<endl;
				cout<<"   ............................................................................   "<<endl;
				cout<<""<<endl;
				cout<<"                     Usted Esta Eleminando Este Estudiante"<<endl;
				cout<<""<<endl;
				system("Pause");
				
				no2="0000";
				ed2="0000";
				ic2="0000";
				di2="0000";
				te2="0000";
				co2="0000";
				id2="0000";
				ca2="0000";
				pi2="0000";
				sa2="0000";
				mue=1;
			}else{
				if (cmp==id3){
					cout<<"   ............................................................................   "<<endl;
					cout<<"        Nombre completo:                    "<<no3<<endl;
					cout<<"        Edad:                               "<<ed3<<endl;
					cout<<"        Resultado de la prueba del icfes:   "<<ic3<<endl;
					cout<<"        Direccion:                          "<<di3<<endl;
					cout<<"        Numero Telefonico:                  "<<te3<<endl;
					cout<<"        Correo electronico:                 "<<co3<<endl;
					cout<<"        Numero de documento:                "<<id3<<endl;
					cout<<"        Nombre carrera:                     "<<ca3<<endl;
					cout<<"        Pin de inscripcion:                 "<<pi3<<endl;
					cout<<"        Numero de salon:                    "<<sa3<<endl;
					cout<<"   ............................................................................   "<<endl;
					cout<<""<<endl;
					cout<<"                     Usted Esta Eleminando Este Estudiante"<<endl;
					cout<<""<<endl;
					system("Pause");
					
					no3="0000";
					ed3="0000";
					ic3="0000";
					di3="0000";
					te3="0000";
					co3="0000";
					id3="0000";
					ca3="0000";
					pi3="0000";
					sa3="0000";
					mue=1;
				}else{
					if (cmp==id4){
						cout<<"   ............................................................................   "<<endl;
						cout<<"        Nombre completo:                    "<<no4<<endl;
						cout<<"        Edad:                               "<<ed4<<endl;
						cout<<"        Resultado de la prueba del icfes:   "<<ic4<<endl;
						cout<<"        Direccion:                          "<<di4<<endl;
						cout<<"        Numero Telefonico:                  "<<te4<<endl;
						cout<<"        Correo electronico:                 "<<co4<<endl;
						cout<<"        Numero de documento:                "<<id4<<endl;
						cout<<"        Nombre carrera:                     "<<ca4<<endl;
						cout<<"        Pin de inscripcion:                 "<<pi4<<endl;
						cout<<"        Numero de salon:                    "<<sa4<<endl;
						cout<<"   ............................................................................   "<<endl;
						cout<<""<<endl;
						cout<<"                     Usted Esta Eleminando Este Estudiante"<<endl;
						cout<<""<<endl;
						system("Pause");
						
						no1="0000";
						ed1="0000";
						ic1="0000";
						di1="0000";
						te1="0000";
						co1="0000";
						id1="0000";
						ca1="0000";
						pi1="0000";
						sa1="0000";
						mue=1;
					}else{
						if (cmp==id5){
							cout<<"   ............................................................................   "<<endl;
							cout<<"        Nombre completo:                    "<<no5<<endl;
							cout<<"        Edad:                               "<<ed5<<endl;
							cout<<"        Resultado de la prueba del icfes:   "<<ic5<<endl;
							cout<<"        Direccion:                          "<<di5<<endl;
							cout<<"        Numero Telefonico:                  "<<te5<<endl;
							cout<<"        Correo electronico:                 "<<co5<<endl;
							cout<<"        Numero de documento:                "<<id5<<endl;
							cout<<"        Nombre carrera:                     "<<ca5<<endl;
							cout<<"        Pin de inscripcion:                 "<<pi5<<endl;
							cout<<"        Numero de salon:                    "<<sa5<<endl;
							cout<<"   ............................................................................   "<<endl;
							cout<<""<<endl;
							cout<<"                     Usted Esta Eleminando Este Estudiante"<<endl;
							cout<<""<<endl;
							system("Pause");
							
							no5="0000";
							ed5="0000";
							ic5="0000";
							di5="0000";
							te5="0000";
							co5="0000";
							id5="0000";
							ca5="0000";
							pi5="0000";
							sa5="0000";
							mue=1;
						}else{
							if (cmp==id6){
								cout<<"   ............................................................................   "<<endl;
								cout<<"        Nombre completo:                    "<<no6<<endl;
								cout<<"        Edad:                               "<<ed6<<endl;
								cout<<"        Resultado de la prueba del icfes:   "<<ic6<<endl;
								cout<<"        Direccion:                          "<<di6<<endl;
								cout<<"        Numero Telefonico:                  "<<te6<<endl;
								cout<<"        Correo electronico:                 "<<co6<<endl;
								cout<<"        Numero de documento:                "<<id6<<endl;
								cout<<"        Nombre carrera:                     "<<ca6<<endl;
								cout<<"        Pin de inscripcion:                 "<<pi6<<endl;
								cout<<"        Numero de salon:                    "<<sa6<<endl;
								cout<<"   ............................................................................   "<<endl;
								cout<<""<<endl;
								cout<<"                     Usted Esta Eleminando Este Estudiante"<<endl;
								cout<<""<<endl;
								system("Pause");
								
								no6="0000";
								ed6="0000";
								ic6="0000";
								di6="0000";
								te6="0000";
								co6="0000";
								id6="0000";
								ca6="0000";
								pi6="0000";
								sa6="0000";
								mue=1;
							}else{
								if (cmp==id7){
									cout<<"   ............................................................................   "<<endl;
									cout<<"        Nombre completo:                    "<<no7<<endl;
									cout<<"        Edad:                               "<<ed7<<endl;
									cout<<"        Resultado de la prueba del icfes:   "<<ic7<<endl;
									cout<<"        Direccion:                          "<<di7<<endl;
									cout<<"        Numero Telefonico:                  "<<te7<<endl;
									cout<<"        Correo electronico:                 "<<co7<<endl;
									cout<<"        Numero de documento:                "<<id7<<endl;
									cout<<"        Nombre carrera:                     "<<ca7<<endl;
									cout<<"        Pin de inscripcion:                 "<<pi7<<endl;
									cout<<"        Numero de salon:                    "<<sa7<<endl;
									cout<<"   ............................................................................   "<<endl;
									cout<<""<<endl;
									cout<<"                     Usted Esta Eleminando Este Estudiante"<<endl;
									cout<<""<<endl;
									system("Pause");
									
									no7="0000";
									ed7="0000";
									ic7="0000";
									di7="0000";
									te7="0000";
									co7="0000";
									id7="0000";
									ca7="0000";
									pi7="0000";
									sa7="0000";
									mue=1;
								}else{
									if (cmp==id8){
										cout<<"   ............................................................................   "<<endl;
										cout<<"        Nombre completo:                    "<<no8<<endl;
										cout<<"        Edad:                               "<<ed8<<endl;
										cout<<"        Resultado de la prueba del icfes:   "<<ic8<<endl;
										cout<<"        Direccion:                          "<<di8<<endl;
										cout<<"        Numero Telefonico:                  "<<te8<<endl;
										cout<<"        Correo electronico:                 "<<co8<<endl;
										cout<<"        Numero de documento:                "<<id8<<endl;
										cout<<"        Nombre carrera:                     "<<ca8<<endl;
										cout<<"        Pin de inscripcion:                 "<<pi8<<endl;
										cout<<"        Numero de salon:                    "<<sa8<<endl;
										cout<<"   ............................................................................   "<<endl;
										cout<<""<<endl;
										cout<<"                     Usted Esta Eleminando Este Estudiante"<<endl;
										cout<<""<<endl;
										system("Pause");
										
										no8="0000";
										ed8="0000";
										ic8="0000";
										di8="0000";
										te8="0000";
										co8="0000";
										id8="0000";
										ca8="0000";
										pi8="0000";
										sa8="0000";
										mue=1;
									}else{
										if (cmp==id9){
											cout<<"   ............................................................................   "<<endl;
											cout<<"        Nombre completo:                    "<<no9<<endl;
											cout<<"        Edad:                               "<<ed9<<endl;
											cout<<"        Resultado de la prueba del icfes:   "<<ic9<<endl;
											cout<<"        Direccion:                          "<<di9<<endl;
											cout<<"        Numero Telefonico:                  "<<te9<<endl;
											cout<<"        Correo electronico:                 "<<co9<<endl;
											cout<<"        Numero de documento:                "<<id9<<endl;
											cout<<"        Nombre carrera:                     "<<ca9<<endl;
											cout<<"        Pin de inscripcion:                 "<<pi9<<endl;
											cout<<"        Numero de salon:                    "<<sa9<<endl;
											cout<<"   ............................................................................   "<<endl;
											cout<<""<<endl;
											cout<<"                     Usted Esta Eleminando Este Estudiante"<<endl;
											cout<<""<<endl;
											system("Pause");
											
											no9="0000";
											ed9="0000";
											ic9="0000";
											di9="0000";
											te9="0000";
											co9="0000";
											id9="0000";
											ca9="0000";
											pi9="0000";
											sa9="0000";
											mue=1;
										}else{
											if (cmp==id10){
												cout<<"   ............................................................................   "<<endl;
												cout<<"        Nombre completo:                    "<<no10<<endl;
												cout<<"        Edad:                               "<<ed10<<endl;
												cout<<"        Resultado de la prueba del icfes:   "<<ic10<<endl;
												cout<<"        Direccion:                          "<<di10<<endl;
												cout<<"        Numero Telefonico:                  "<<te10<<endl;
												cout<<"        Correo electronico:                 "<<co10<<endl;
												cout<<"        Numero de documento:                "<<id10<<endl;
												cout<<"        Nombre carrera:                     "<<ca10<<endl;
												cout<<"        Pin de inscripcion:                 "<<pi10<<endl;
												cout<<"        Numero de salon:                    "<<sa10<<endl;
												cout<<"   ............................................................................   "<<endl;
												cout<<""<<endl;
												cout<<"                     Usted Esta Eleminando Este Estudiante"<<endl;
												cout<<""<<endl;
												system("Pause");
												
												no10="0000";
												ed10="0000";
												ic10="0000";
												di10="0000";
												te10="0000";
												co10="0000";
												id10="0000";
												ca10="0000";
												pi10="0000";
												sa10="0000";
												mue=1;
											}else{
												if (cmp==id11){
													cout<<"   ............................................................................   "<<endl;
													cout<<"        Nombre completo:                    "<<no11<<endl;
													cout<<"        Edad:                               "<<ed11<<endl;
													cout<<"        Resultado de la prueba del icfes:   "<<ic11<<endl;
													cout<<"        Direccion:                          "<<di11<<endl;
													cout<<"        Numero Telefonico:                  "<<te11<<endl;
													cout<<"        Correo electronico:                 "<<co11<<endl;
													cout<<"        Numero de documento:                "<<id11<<endl;
													cout<<"        Nombre carrera:                     "<<ca11<<endl;
													cout<<"        Pin de inscripcion:                 "<<pi11<<endl;
													cout<<"        Numero de salon:                    "<<sa11<<endl;
													cout<<"   ............................................................................   "<<endl;
													cout<<""<<endl;
													cout<<"                     Usted Esta Eleminando Este Estudiante"<<endl;
													cout<<""<<endl;
													system("Pause");
													
													no11="0000";
													ed11="0000";
													ic11="0000";
													di11="0000";
													te11="0000";
													co11="0000";
													id11="0000";
													ca11="0000";
													pi11="0000";
													sa11="0000";
													mue=1;
												}else{
													if (cmp==id12){
														cout<<"   ............................................................................   "<<endl;
														cout<<"        Nombre completo:                    "<<no12<<endl;
														cout<<"        Edad:                               "<<ed12<<endl;
														cout<<"        Resultado de la prueba del icfes:   "<<ic12<<endl;
														cout<<"        Direccion:                          "<<di12<<endl;
														cout<<"        Numero Telefonico:                  "<<te12<<endl;
														cout<<"        Correo electronico:                 "<<co12<<endl;
														cout<<"        Numero de documento:                "<<id12<<endl;
														cout<<"        Nombre carrera:                     "<<ca12<<endl;
														cout<<"        Pin de inscripcion:                 "<<pi12<<endl;
														cout<<"        Numero de salon:                    "<<sa12<<endl;
														cout<<"   ............................................................................   "<<endl;
														cout<<""<<endl;
														cout<<"                     Usted Esta Eleminando Este Estudiante"<<endl;
														cout<<""<<endl;
														system("Pause");
														
														no12="0000";
														ed12="0000";
														ic12="0000";
														di12="0000";
														te12="0000";
														co12="0000";
														id12="0000";
														ca12="0000";
														pi12="0000";
														sa12="0000";
														mue=1;
													}else{
														if (cmp==id13){
															cout<<"   ............................................................................   "<<endl;
															cout<<"        Nombre completo:                    "<<no13<<endl;
															cout<<"        Edad:                               "<<ed13<<endl;
															cout<<"        Resultado de la prueba del icfes:   "<<ic13<<endl;
															cout<<"        Direccion:                          "<<di13<<endl;
															cout<<"        Numero Telefonico:                  "<<te13<<endl;
															cout<<"        Correo electronico:                 "<<co13<<endl;
															cout<<"        Numero de documento:                "<<id13<<endl;
															cout<<"        Nombre carrera:                     "<<ca13<<endl;
															cout<<"        Pin de inscripcion:                 "<<pi13<<endl;
															cout<<"        Numero de salon:                    "<<sa13<<endl;
															cout<<"   ............................................................................   "<<endl;
															cout<<""<<endl;
															cout<<"                     Usted Esta Eleminando Este Estudiante"<<endl;
															cout<<""<<endl;
															system("Pause");
															
															no13="0000";
															ed13="0000";
															ic13="0000";
															di13="0000";
															te13="0000";
															co13="0000";
															id13="0000";
															ca13="0000";
															pi13="0000";
															sa13="0000";
															mue=1;
														}else{
															if (cmp==id14){
																cout<<"   ............................................................................   "<<endl;
																cout<<"        Nombre completo:                    "<<no14<<endl;
																cout<<"        Edad:                               "<<ed14<<endl;
																cout<<"        Resultado de la prueba del icfes:   "<<ic14<<endl;
																cout<<"        Direccion:                          "<<di14<<endl;
																cout<<"        Numero Telefonico:                  "<<te14<<endl;
																cout<<"        Correo electronico:                 "<<co14<<endl;
																cout<<"        Numero de documento:                "<<id14<<endl;
																cout<<"        Nombre carrera:                     "<<ca14<<endl;
																cout<<"        Pin de inscripcion:                 "<<pi14<<endl;
																cout<<"        Numero de salon:                    "<<sa14<<endl;
																cout<<"   ............................................................................   "<<endl;
																cout<<""<<endl;
																cout<<"                     Usted Esta Eleminando Este Estudiante"<<endl;
																cout<<""<<endl;
																system("Pause");
																
																no14="0000";
																ed14="0000";
																ic14="0000";
																di14="0000";
																te14="0000";
																co14="0000";
																id14="0000";
																ca14="0000";
																pi14="0000";
																sa14="0000";
																mue=1;
															}else{
																if (cmp==id15){
																	cout<<"   ............................................................................   "<<endl;
																	cout<<"        Nombre completo:                    "<<no15<<endl;
																	cout<<"        Edad:                               "<<ed15<<endl;
																	cout<<"        Resultado de la prueba del icfes:   "<<ic15<<endl;
																	cout<<"        Direccion:                          "<<di15<<endl;
																	cout<<"        Numero Telefonico:                  "<<te15<<endl;
																	cout<<"        Correo electronico:                 "<<co15<<endl;
																	cout<<"        Numero de documento:                "<<id15<<endl;
																	cout<<"        Nombre carrera:                     "<<ca15<<endl;
																	cout<<"        Pin de inscripcion:                 "<<pi15<<endl;
																	cout<<"        Numero de salon:                    "<<sa15<<endl;
																	cout<<"   ............................................................................   "<<endl;
																	cout<<""<<endl;
																	cout<<"                     Usted Esta Eleminando Este Estudiante"<<endl;
																	cout<<""<<endl;
																	system("Pause");
																	
																	no15="0000";
																	ed15="0000";
																	ic15="0000";
																	di15="0000";
																	te15="0000";
																	co15="0000";
																	id15="0000";
																	ca15="0000";
																	pi15="0000";
																	sa15="0000";
																	mue=1;
																}else{
																	if (cmp==id16){
																		cout<<"   ............................................................................   "<<endl;
																		cout<<"        Nombre completo:                    "<<no16<<endl;
																		cout<<"        Edad:                               "<<ed16<<endl;
																		cout<<"        Resultado de la prueba del icfes:   "<<ic16<<endl;
																		cout<<"        Direccion:                          "<<di16<<endl;
																		cout<<"        Numero Telefonico:                  "<<te16<<endl;
																		cout<<"        Correo electronico:                 "<<co16<<endl;
																		cout<<"        Numero de documento:                "<<id16<<endl;
																		cout<<"        Nombre carrera:                     "<<ca16<<endl;
																		cout<<"        Pin de inscripcion:                 "<<pi16<<endl;
																		cout<<"        Numero de salon:                    "<<sa16<<endl;
																		cout<<"   ............................................................................   "<<endl;
																		cout<<""<<endl;
																		cout<<"                     Usted Esta Eleminando Este Estudiante"<<endl;
																		cout<<""<<endl;
																		system("Pause");
																		
																		no16="0000";
																		ed16="0000";
																		ic16="0000";
																		di16="0000";
																		te16="0000";
																		co16="0000";
																		id16="0000";
																		ca16="0000";
																		pi16="0000";
																		sa16="0000";
																		mue=1;
																	}else{
																		if (cmp==id17){
																			cout<<"   ............................................................................   "<<endl;
																			cout<<"        Nombre completo:                    "<<no17<<endl;
																			cout<<"        Edad:                               "<<ed17<<endl;
																			cout<<"        Resultado de la prueba del icfes:   "<<ic17<<endl;
																			cout<<"        Direccion:                          "<<di17<<endl;
																			cout<<"        Numero Telefonico:                  "<<te17<<endl;
																			cout<<"        Correo electronico:                 "<<co17<<endl;
																			cout<<"        Numero de documento:                "<<id17<<endl;
																			cout<<"        Nombre carrera:                     "<<ca17<<endl;
																			cout<<"        Pin de inscripcion:                 "<<pi17<<endl;
																			cout<<"        Numero de salon:                    "<<sa17<<endl;
																			cout<<"   ............................................................................   "<<endl;
																			cout<<""<<endl;
																			cout<<"                     Usted Esta Eleminando Este Estudiante"<<endl;
																			cout<<""<<endl;
																			system("Pause");
																			
																			no17="0000";
																			ed17="0000";
																			ic17="0000";
																			di17="0000";
																			te17="0000";
																			co17="0000";
																			id17="0000";
																			ca17="0000";
																			pi17="0000";
																			sa17="0000";
																			mue=1;
																		}else{
																			if (cmp==id18){
																				cout<<"   ............................................................................   "<<endl;
																				cout<<"        Nombre completo:                    "<<no18<<endl;
																				cout<<"        Edad:                               "<<ed18<<endl;
																				cout<<"        Resultado de la prueba del icfes:   "<<ic18<<endl;
																				cout<<"        Direccion:                          "<<di18<<endl;
																				cout<<"        Numero Telefonico:                  "<<te18<<endl;
																				cout<<"        Correo electronico:                 "<<co18<<endl;
																				cout<<"        Numero de documento:                "<<id18<<endl;
																				cout<<"        Nombre carrera:                     "<<ca18<<endl;
																				cout<<"        Pin de inscripcion:                 "<<pi18<<endl;
																				cout<<"        Numero de salon:                    "<<sa18<<endl;
																				cout<<"   ............................................................................   "<<endl;
																				cout<<""<<endl;
																				cout<<"                     Usted Esta Eleminando Este Estudiante"<<endl;
																				cout<<""<<endl;
																				system("Pause");
																				
																				no18="0000";
																				ed18="0000";
																				ic18="0000";
																				di18="0000";
																				te18="0000";
																				co18="0000";
																				id18="0000";
																				ca18="0000";
																				pi18="0000";
																				sa18="0000";
																				mue=1;
																			}else{
																				if (cmp==id19){
																					cout<<"   ............................................................................   "<<endl;
																					cout<<"        Nombre completo:                    "<<no19<<endl;
																					cout<<"        Edad:                               "<<ed19<<endl;
																					cout<<"        Resultado de la prueba del icfes:   "<<ic19<<endl;
																					cout<<"        Direccion:                          "<<di19<<endl;
																					cout<<"        Numero Telefonico:                  "<<te19<<endl;
																					cout<<"        Correo electronico:                 "<<co19<<endl;
																					cout<<"        Numero de documento:                "<<id19<<endl;
																					cout<<"        Nombre carrera:                     "<<ca19<<endl;
																					cout<<"        Pin de inscripcion:                 "<<pi19<<endl;
																					cout<<"        Numero de salon:                    "<<sa19<<endl;
																					cout<<"   ............................................................................   "<<endl;
																					cout<<""<<endl;
																					cout<<"                     Usted Esta Eleminando Este Estudiante"<<endl;
																					cout<<""<<endl;
																					system("Pause");
																					
																					no19="0000";
																					ed19="0000";
																					ic19="0000";
																					di19="0000";
																					te19="0000";
																					co19="0000";
																					id19="0000";
																					ca19="0000";
																					pi19="0000";
																					sa19="0000";
																					mue=1;
																				}else{
																					if (cmp==id20){
																						cout<<"   ............................................................................   "<<endl;
																						cout<<"        Nombre completo:                    "<<no20<<endl;
																						cout<<"        Edad:                               "<<ed20<<endl;
																						cout<<"        Resultado de la prueba del icfes:   "<<ic20<<endl;
																						cout<<"        Direccion:                          "<<di20<<endl;
																						cout<<"        Numero Telefonico:                  "<<te20<<endl;
																						cout<<"        Correo electronico:                 "<<co20<<endl;
																						cout<<"        Numero de documento:                "<<id20<<endl;
																						cout<<"        Nombre carrera:                     "<<ca20<<endl;
																						cout<<"        Pin de inscripcion:                 "<<pi20<<endl;
																						cout<<"        Numero de salon:                    "<<sa20<<endl;
																						cout<<"   ............................................................................   "<<endl;
																						cout<<""<<endl;
																						cout<<"                     Usted Esta Eleminando Este Estudiante"<<endl;
																						cout<<""<<endl;
																						system("Pause");
																						
																						no20="0000";
																						ed20="0000";
																						ic20="0000";
																						di20="0000";
																						te20="0000";
																						co20="0000";
																						id20="0000";
																						ca20="0000";
																						pi20="0000";
																						sa20="0000";
																						mue=1;
																					}else{
																						
																					}	
																				}	
																			}	
																		}	
																	}	
																}	
															}	
														}	
													}	
												}	
											}	
										}	
									}	
								}	
							}	
						}	
					}	
				}	
			}	
		}
		//Hasta AcaTerminas Los if
	}
	if (mue==1){
		
		system("cls");
		cout<<""<<endl;
		cout<<""<<endl;
		for (i=0; i<8; i++){
			if (i==0 or i==5){
				for (j=0; j<18; j++){
					if (j==0){
						cout<<"  ..";
					}else {
						if (j==17){
							cout<<".."<<endl;
						}else{
							cout<<"..";
						}
					}
				}
			}else{
				if (i==1 or i==4){
					for (k=0; k<18; k++){
						if (k==0){
							cout<<"  ..";
						}else{
							if (k==17){
								cout<<".."<<endl;
							}else{
								cout<<"  ";
							}
						}
					}
				}else{
					if (i==2){
						cout<<"  ..           Eliminando           .."<<endl;
					}else{
						if (i==3){
							cout<<"  ..              Datos             .."<<endl;
						}else{
							if (i==6){
								cout<<""<<endl;
							}else{
								for (k=0; k<8; k++){
									if(k==0){
										cout<<"      ||";
										Sleep(1000);
									}else{
										if(k==1){
											cout<<"|||";
											Sleep(1300);
										}else{
											if(k==2){
												cout<<"||||";
												Sleep(1800);
											}else{
												if(k==3){
													cout<<"|||||";
													Sleep(1000);
												}else{
													if(k==4){
														cout<<"||";
														Sleep(1200);
													}else{
														if(k==5){
															cout<<"|||";
															Sleep(1100);
														}else{
															if(k==6){
																cout<<"||||";
																Sleep(1600);
															}else{
																if(k==7){
																	cout<<"|||||"<<endl;
																	Sleep(1800);
																}else{
																	
																} 
																
															} 
														} 
													} 
												} 	
											} 
										}
									}
								}
								
							}
						}
					}  
				} 
				
			}
		}
		cout<<""<<endl;
		cout<<"         Eliminacion  Finalizada"<<endl;
		cout<<"        _________________________"<<endl;
		cout<<""<<endl;
		cout<<""<<endl;
		system("pause");
		
	}else{
		if (mue==2){
			
		}else{
			cout<<""<<endl;
			cout<<"               .........................................................."<<endl;
			cout<<"               ..     Este Dato No Se Encuentra Registrado En La BD    .."<<endl;
			cout<<"               .........................................................."<<endl;
			system("pause");
		}
	}	
	
	//verificamos cuantos datos existen
	conta=0;
	
	for (int m=0;m<=contador;m++){
		if (m==0){
			if (id1=="0000"){
				
			}else{
				conta=conta+1;
			}
			
			if (id2=="0000"){
				
			}else{
				conta=conta+1;
			}
			
			if (id3=="0000"){
				
			}else{
				conta=conta+1;
			}
			
			if (id4=="0000"){
				
			}else{
				conta=conta+1;
			}
			
			if (id5=="0000"){
				
			}else{
				conta=conta+1;
			}
			
			if (id6=="0000"){
				
			}else{
				conta=conta+1;
			}
			
			if (id7=="0000"){
				
			}else{
				conta=conta+1;
			}
			
			if (id8=="0000"){
				
			}else{
				conta=conta+1;
			}
			
			if (id9=="0000"){
				
			}else{
				conta=conta+1;
			}
			
			if (id10=="0000"){
				
			}else{
				conta=conta+1;
			}
			
			if (id11=="0000"){
				
			}else{
				conta=conta+1;
			}
			
			if (id12=="0000"){
				
			}else{
				conta=conta+1;
			}
			
			if (id13=="0000"){
				
			}else{
				conta=conta+1;
			}
			
			if (id14=="0000"){
				
			}else{
				conta=conta+1;
			}
			
			if (id15=="0000"){
				
			}else{
				conta=conta+1;
			}
			
			if (id16=="0000"){
				
			}else{
				conta=conta+1;
			}
			
			if (id17=="0000"){
				
			}else{
				conta=conta+1;
			}
			
			if (id18=="0000"){
				
			}else{
				conta=conta+1;
			}
			
			if (id19=="0000"){
				
			}else{
				conta=conta+1;
			}
			
			if (id20=="0000"){
				
			}else{
				conta=conta+1;
			}
		}else{
			if (m==contador){
				
			}else{
				conta=conta+1;
			}
		}
	}
	
}//Fin de eliminar

void mostrar(){
	system("cls");
	conta=0;
	for (int m=0;m<=contador;m++){
		
		if (m==0){
			if (id1=="0000"){
				
			}else{
				conta=conta+1;
				cout<<""<<endl;
				cout<<""<<endl; 
				cout<<"                                     Dato "<<conta <<endl;
				cout<<"   ............................................................................   "<<endl;
				cout<<"        Nombre completo:                    "<<no1<<endl;
				cout<<"        Edad:                               "<<ed1<<endl;
				cout<<"        Resultado de la prueba del icfes:   "<<ic1<<endl;
				cout<<"        Direccion:                          "<<di1<<endl;
				cout<<"        Numero Telefonico:                  "<<te1<<endl;
				cout<<"        Correo electronico:                 "<<co1<<endl;
				cout<<"        Numero de documento:                "<<id1<<endl;
				cout<<"        Nombre carrera:                     "<<ca1<<endl;
				cout<<"        Pin de inscripcion:                 "<<pi1<<endl;
				cout<<"        Numero de salon:                    "<<sa1<<endl;
				cout<<"   ............................................................................   "<<endl;
				if(conta==10){
					system("pause");
				}else{
					
				}
			}
			
			if (id2=="0000"){
				
			}else{
				conta=conta+1;
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"                                     Dato "<<conta <<endl;
				cout<<"   ............................................................................   "<<endl;
				cout<<"        Nombre completo:                    "<<no2<<endl;
				cout<<"        Edad:                               "<<ed2<<endl;
				cout<<"        Resultado de la prueba del icfes:   "<<ic2<<endl;
				cout<<"        Direccion:                          "<<di2<<endl;
				cout<<"        Numero Telefonico:                  "<<te2<<endl;
				cout<<"        Correo electronico:                 "<<co2<<endl;
				cout<<"        Numero de documento:                "<<id2<<endl;
				cout<<"        Nombre carrera:                     "<<ca2<<endl;
				cout<<"        Pin de inscripcion:                 "<<pi2<<endl;
				cout<<"        Numero de salon:                    "<<sa2<<endl;
				cout<<"   ............................................................................   "<<endl;
				if(conta==10){
					system("pause");
				}else{
					
				}
			}
			
			if (id3=="0000"){
				
			}else{
				conta=conta+1;
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"                                     Dato "<<conta <<endl;
				cout<<"   ............................................................................   "<<endl;
				cout<<"        Nombre completo:                    "<<no3<<endl;
				cout<<"        Edad:                               "<<ed3<<endl;
				cout<<"        Resultado de la prueba del icfes:   "<<ic3<<endl;
				cout<<"        Direccion:                          "<<di3<<endl;
				cout<<"        Numero Telefonico:                  "<<te3<<endl;
				cout<<"        Correo electronico:                 "<<co3<<endl;
				cout<<"        Numero de documento:                "<<id3<<endl;
				cout<<"        Nombre carrera:                     "<<ca3<<endl;
				cout<<"        Pin de inscripcion:                 "<<pi3<<endl;
				cout<<"        Numero de salon:                    "<<sa3<<endl;
				cout<<"   ............................................................................   "<<endl;
				if(conta==10){
					system("pause");
				}else{
					
				}
			}
			
			if (id4=="0000"){
				
			}else{
				conta=conta+1;
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"                                     Dato "<<conta <<endl;
				cout<<"   ............................................................................   "<<endl;
				cout<<"        Nombre completo:                    "<<no4<<endl;
				cout<<"        Edad:                               "<<ed4<<endl;
				cout<<"        Resultado de la prueba del icfes:   "<<ic4<<endl;
				cout<<"        Direccion:                          "<<di4<<endl;
				cout<<"        Numero Telefonico:                  "<<te4<<endl;
				cout<<"        Correo electronico:                 "<<co4<<endl;
				cout<<"        Numero de documento:                "<<id4<<endl;
				cout<<"        Nombre carrera:                     "<<ca4<<endl;
				cout<<"        Pin de inscripcion:                 "<<pi4<<endl;
				cout<<"        Numero de salon:                    "<<sa4<<endl;
				cout<<"   ............................................................................   "<<endl;
				if(conta==10){
					system("pause");
				}else{
					
				}
			}
			
			if (id5=="0000"){
				
			}else{
				conta=conta+1;
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"                                     Dato "<<conta <<endl;
				cout<<"   ............................................................................   "<<endl;
				cout<<"        Nombre completo:                    "<<no5<<endl;
				cout<<"        Edad:                               "<<ed5<<endl;
				cout<<"        Resultado de la prueba del icfes:   "<<ic5<<endl;
				cout<<"        Direccion:                          "<<di5<<endl;
				cout<<"        Numero Telefonico:                  "<<te5<<endl;
				cout<<"        Correo electronico:                 "<<co5<<endl;
				cout<<"        Numero de documento:                "<<id5<<endl;
				cout<<"        Nombre carrera:                     "<<ca5<<endl;
				cout<<"        Pin de inscripcion:                 "<<pi5<<endl;
				cout<<"        Numero de salon:                    "<<sa5<<endl;
				cout<<"   ............................................................................   "<<endl;
				if(conta==10){
					system("pause");
				}else{
					
				}	
			}
			
			if (id6=="0000"){
				
			}else{
				conta=conta+1;
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"                                     Dato "<<conta <<endl;
				cout<<"   ............................................................................   "<<endl;
				cout<<"        Nombre completo:                    "<<no6<<endl;
				cout<<"        Edad:                               "<<ed6<<endl;
				cout<<"        Resultado de la prueba del icfes:   "<<ic6<<endl;
				cout<<"        Direccion:                          "<<di6<<endl;
				cout<<"        Numero Telefonico:                  "<<te6<<endl;
				cout<<"        Correo electronico:                 "<<co6<<endl;
				cout<<"        Numero de documento:                "<<id6<<endl;
				cout<<"        Nombre carrera:                     "<<ca6<<endl;
				cout<<"        Pin de inscripcion:                 "<<pi6<<endl;
				cout<<"        Numero de salon:                    "<<sa6<<endl;
				cout<<"   ............................................................................   "<<endl;
				if(conta==10){
					system("pause");
				}else{
					
				}
			}
			
			if (id7=="0000"){
				
			}else{
				conta=conta+1;
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"                                     Dato "<<conta <<endl;
				cout<<"   ............................................................................   "<<endl;
				cout<<"        Nombre completo:                    "<<no7<<endl;
				cout<<"        Edad:                               "<<ed7<<endl;
				cout<<"        Resultado de la prueba del icfes:   "<<ic7<<endl;
				cout<<"        Direccion:                          "<<di7<<endl;
				cout<<"        Numero Telefonico:                  "<<te7<<endl;
				cout<<"        Correo electronico:                 "<<co7<<endl;
				cout<<"        Numero de documento:                "<<id7<<endl;
				cout<<"        Nombre carrera:                     "<<ca7<<endl;
				cout<<"        Pin de inscripcion:                 "<<pi7<<endl;
				cout<<"        Numero de salon:                    "<<sa7<<endl;
				cout<<"   ............................................................................   "<<endl; 
				if(conta==10){
					system("pause");
				}else{
					
				}
			}
			
			if (id8=="0000"){
				
			}else{
				conta=conta+1;
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"                                     Dato "<<conta <<endl;
				cout<<"   ............................................................................   "<<endl;
				cout<<"        Nombre completo:                    "<<no8<<endl;
				cout<<"        Edad:                               "<<ed8<<endl;
				cout<<"        Resultado de la prueba del icfes:   "<<ic8<<endl;
				cout<<"        Direccion:                          "<<di8<<endl;
				cout<<"        Numero Telefonico:                  "<<te8<<endl;
				cout<<"        Correo electronico:                 "<<co8<<endl;
				cout<<"        Numero de documento:                "<<id8<<endl;
				cout<<"        Nombre carrera:                     "<<ca8<<endl;
				cout<<"        Pin de inscripcion:                 "<<pi8<<endl;
				cout<<"        Numero de salon:                    "<<sa8<<endl;
				cout<<"   ............................................................................   "<<endl;
				if(conta==10){
					system("pause");
				}else{
					
				}
			}
			
			if (id9=="0000"){
				
			}else{
				conta=conta+1;
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"                                     Dato "<<conta <<endl;
				cout<<"   ............................................................................   "<<endl;
				cout<<"        Nombre completo:                    "<<no9<<endl;
				cout<<"        Edad:                               "<<ed9<<endl;
				cout<<"        Resultado de la prueba del icfes:   "<<ic9<<endl;
				cout<<"        Direccion:                          "<<di9<<endl;
				cout<<"        Numero Telefonico:                  "<<te9<<endl;
				cout<<"        Correo electronico:                 "<<co9<<endl;
				cout<<"        Numero de documento:                "<<id9<<endl;
				cout<<"        Nombre carrera:                     "<<ca9<<endl;
				cout<<"        Pin de inscripcion:                 "<<pi9<<endl;
				cout<<"        Numero de salon:                    "<<sa9<<endl;
				cout<<"   ............................................................................   "<<endl;
				if(conta==10){
					system("pause");
				}else{
					
				}
			}
			
			if (id10=="0000"){
				
			}else{
				conta=conta+1;
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"                                     Dato "<<conta <<endl;
				cout<<"   ............................................................................   "<<endl;
				cout<<"        Nombre completo:                    "<<no10<<endl;
				cout<<"        Edad:                               "<<ed10<<endl;
				cout<<"        Resultado de la prueba del icfes:   "<<ic10<<endl;
				cout<<"        Direccion:                          "<<di10<<endl;
				cout<<"        Numero Telefonico:                  "<<te10<<endl;
				cout<<"        Correo electronico:                 "<<co10<<endl;
				cout<<"        Numero de documento:                "<<id10<<endl;
				cout<<"        Nombre carrera:                     "<<ca10<<endl;
				cout<<"        Pin de inscripcion:                 "<<pi10<<endl;
				cout<<"        Numero de salon:                    "<<sa10<<endl;
				cout<<"   ............................................................................   "<<endl;
				if(conta==10){
					system("pause");
				}else{
					
				}
			}
			
			if (id11=="0000"){
				
			}else{
				conta=conta+1;
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"                                     Dato "<<conta <<endl;
				cout<<"   ............................................................................   "<<endl;
				cout<<"        Nombre completo:                    "<<no11<<endl;
				cout<<"        Edad:                               "<<ed11<<endl;
				cout<<"        Resultado de la prueba del icfes:   "<<ic11<<endl;
				cout<<"        Direccion:                          "<<di11<<endl;
				cout<<"        Numero Telefonico:                  "<<te11<<endl;
				cout<<"        Correo electronico:                 "<<co11<<endl;
				cout<<"        Numero de documento:                "<<id11<<endl;
				cout<<"        Nombre carrera:                     "<<ca11<<endl;
				cout<<"        Pin de inscripcion:                 "<<pi11<<endl;
				cout<<"        Numero de salon:                    "<<sa11<<endl;
				cout<<"   ............................................................................   "<<endl;
				if(conta==10){
					system("pause");
				}else{
					
				}
			}
			
			if (id12=="0000"){
				
			}else{
				conta=conta+1;
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"                                     Dato "<<conta <<endl;
				cout<<"   ............................................................................   "<<endl;
				cout<<"        Nombre completo:                    "<<no12<<endl;
				cout<<"        Edad:                               "<<ed12<<endl;
				cout<<"        Resultado de la prueba del icfes:   "<<ic12<<endl;
				cout<<"        Direccion:                          "<<di12<<endl;
				cout<<"        Numero Telefonico:                  "<<te12<<endl;
				cout<<"        Correo electronico:                 "<<co12<<endl;
				cout<<"        Numero de documento:                "<<id12<<endl;
				cout<<"        Nombre carrera:                     "<<ca12<<endl;
				cout<<"        Pin de inscripcion:                 "<<pi12<<endl;
				cout<<"        Numero de salon:                    "<<sa12<<endl;
				cout<<"   ............................................................................   "<<endl;
				if(conta==10){
					system("pause");
				}else{
					
				}
			}
			
			if (id13=="0000"){
				
			}else{
				conta=conta+1;
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"                                     Dato "<<conta <<endl;
				cout<<"   ............................................................................   "<<endl;
				cout<<"        Nombre completo:                    "<<no13<<endl;
				cout<<"        Edad:                               "<<ed13<<endl;
				cout<<"        Resultado de la prueba del icfes:   "<<ic13<<endl;
				cout<<"        Direccion:                          "<<di13<<endl;
				cout<<"        Numero Telefonico:                  "<<te13<<endl;
				cout<<"        Correo electronico:                 "<<co13<<endl;
				cout<<"        Numero de documento:                "<<id13<<endl;
				cout<<"        Nombre carrera:                     "<<ca13<<endl;
				cout<<"        Pin de inscripcion:                 "<<pi13<<endl;
				cout<<"        Numero de salon:                    "<<sa13<<endl;
				cout<<"   ............................................................................   "<<endl;
				if(conta==10){
					system("pause");
				}else{
					
				}
			}
			
			if (id14=="0000"){
				
			}else{
				conta=conta+1;
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"                                     Dato "<<conta <<endl;
				cout<<"   ............................................................................   "<<endl;
				cout<<"        Nombre completo:                    "<<no14<<endl;
				cout<<"        Edad:                               "<<ed14<<endl;
				cout<<"        Resultado de la prueba del icfes:   "<<ic14<<endl;
				cout<<"        Direccion:                          "<<di14<<endl;
				cout<<"        Numero Telefonico:                  "<<te14<<endl;
				cout<<"        Correo electronico:                 "<<co14<<endl;
				cout<<"        Numero de documento:                "<<id14<<endl;
				cout<<"        Nombre carrera:                     "<<ca14<<endl;
				cout<<"        Pin de inscripcion:                 "<<pi14<<endl;
				cout<<"        Numero de salon:                    "<<sa14<<endl;
				cout<<"   ............................................................................   "<<endl;
				if(conta==10){
					system("pause");
				}else{
					
				}
			}
			
			if (id15=="0000"){
				
			}else{
				conta=conta+1;
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"                                     Dato "<<conta <<endl;
				cout<<"   ............................................................................   "<<endl;
				cout<<"        Nombre completo:                    "<<no15<<endl;
				cout<<"        Edad:                               "<<ed15<<endl;
				cout<<"        Resultado de la prueba del icfes:   "<<ic15<<endl;
				cout<<"        Direccion:                          "<<di15<<endl;
				cout<<"        Numero Telefonico:                  "<<te15<<endl;
				cout<<"        Correo electronico:                 "<<co15<<endl;
				cout<<"        Numero de documento:                "<<id15<<endl;
				cout<<"        Nombre carrera:                     "<<ca15<<endl;
				cout<<"        Pin de inscripcion:                 "<<pi15<<endl;
				cout<<"        Numero de salon:                    "<<sa15<<endl;
				cout<<"   ............................................................................   "<<endl;
				if(conta==10){
					system("pause");
				}else{
					
				}
			}
			
			if (id16=="0000"){
				
			}else{
				conta=conta+1;
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"                                     Dato "<<conta <<endl;
				cout<<"   ............................................................................   "<<endl;
				cout<<"        Nombre completo:                    "<<no16<<endl;
				cout<<"        Edad:                               "<<ed16<<endl;
				cout<<"        Resultado de la prueba del icfes:   "<<ic16<<endl;
				cout<<"        Direccion:                          "<<di16<<endl;
				cout<<"        Numero Telefonico:                  "<<te16<<endl;
				cout<<"        Correo electronico:                 "<<co16<<endl;
				cout<<"        Numero de documento:                "<<id16<<endl;
				cout<<"        Nombre carrera:                     "<<ca16<<endl;
				cout<<"        Pin de inscripcion:                 "<<pi16<<endl;
				cout<<"        Numero de salon:                    "<<sa16<<endl;
				cout<<"   ............................................................................   "<<endl;
				if(conta==10){
					system("pause");
				}else{
					
				}
			}
			
			if (id17=="0000"){
				
			}else{
				conta=conta+1;
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"                                     Dato "<<conta <<endl;
				cout<<"   ............................................................................   "<<endl;
				cout<<"        Nombre completo:                    "<<no17<<endl;
				cout<<"        Edad:                               "<<ed17<<endl;
				cout<<"        Resultado de la prueba del icfes:   "<<ic17<<endl;
				cout<<"        Direccion:                          "<<di17<<endl;
				cout<<"        Numero Telefonico:                  "<<te17<<endl;
				cout<<"        Correo electronico:                 "<<co17<<endl;
				cout<<"        Numero de documento:                "<<id17<<endl;
				cout<<"        Nombre carrera:                     "<<ca17<<endl;
				cout<<"        Pin de inscripcion:                 "<<pi17<<endl;
				cout<<"        Numero de salon:                    "<<sa17<<endl;
				cout<<"   ............................................................................   "<<endl;
				if(conta==10){
					system("pause");
				}else{
					
				}
			}
			
			if (id18=="0000"){
				
			}else{
				conta=conta+1;
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"                                     Dato "<<conta <<endl;
				cout<<"   ............................................................................   "<<endl;
				cout<<"        Nombre completo:                    "<<no18<<endl;
				cout<<"        Edad:                               "<<ed18<<endl;
				cout<<"        Resultado de la prueba del icfes:   "<<ic18<<endl;
				cout<<"        Direccion:                          "<<di18<<endl;
				cout<<"        Numero Telefonico:                  "<<te18<<endl;
				cout<<"        Correo electronico:                 "<<co18<<endl;
				cout<<"        Numero de documento:                "<<id18<<endl;
				cout<<"        Nombre carrera:                     "<<ca18<<endl;
				cout<<"        Pin de inscripcion:                 "<<pi10<<endl;
				cout<<"        Numero de salon:                    "<<sa18<<endl;
				cout<<"   ............................................................................   "<<endl;
				if(conta==10){
					system("pause");
				}else{
					
				}
			}
			
			if (id19=="0000"){
				
			}else{
				conta=conta+1;
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"                                     Dato "<<conta <<endl;
				cout<<"   ............................................................................   "<<endl;
				cout<<"        Nombre completo:                    "<<no19<<endl;
				cout<<"        Edad:                               "<<ed19<<endl;
				cout<<"        Resultado de la prueba del icfes:   "<<ic19<<endl;
				cout<<"        Direccion:                          "<<di19<<endl;
				cout<<"        Numero Telefonico:                  "<<te19<<endl;
				cout<<"        Correo electronico:                 "<<co19<<endl;
				cout<<"        Numero de documento:                "<<id19<<endl;
				cout<<"        Nombre carrera:                     "<<ca19<<endl;
				cout<<"        Pin de inscripcion:                 "<<pi19<<endl;
				cout<<"        Numero de salon:                    "<<sa19<<endl;
				cout<<"   ............................................................................   "<<endl;
				if(conta==10){
					system("pause");
				}else{
					
				}
			}
			
			if (id20=="0000"){
				
			}else{
				conta=conta+1;
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"                                     Dato "<<conta <<endl;
				cout<<"   ............................................................................   "<<endl;
				cout<<"        Nombre completo:                    "<<no20<<endl;
				cout<<"        Edad:                               "<<ed20<<endl;
				cout<<"        Resultado de la prueba del icfes:   "<<ic20<<endl;
				cout<<"        Direccion:                          "<<di20<<endl;
				cout<<"        Numero Telefonico:                  "<<te20<<endl;
				cout<<"        Correo electronico:                 "<<co20<<endl;
				cout<<"        Numero de documento:                "<<id20<<endl;
				cout<<"        Nombre carrera:                     "<<ca20<<endl;
				cout<<"        Pin de inscripcion:                 "<<pi20<<endl;
				cout<<"        Numero de salon:                    "<<sa20<<endl;
				cout<<"   ............................................................................   "<<endl;
				if(conta==10){
					system("pause");
				}else{
					
				}
			}
		}else{
			if (m==contador){
				
			}else{
				conta=conta+1;
				cout<<""<<endl;
				cout<<""<<endl;
				cout<<"                                     Dato "<<conta <<endl;
				cout<<"   ............................................................................   "<<endl;
				cout<<"        Nombre completo:                    "<<dato[m].nombre<<endl;
				cout<<"        Edad:                               "<<dato[m].edad<<endl;
				cout<<"        Resultado de la prueba del icfes:   "<<dato[m].icfes<<endl;
				cout<<"        Direccion:                          "<<dato[m].direccion<<endl;
				cout<<"        Numero Telefonico:                  "<<dato[m].telefono<<endl;
				cout<<"        Correo electronico:                 "<<dato[m].correo<<endl;
				cout<<"        Numero de documento:                "<<dato[m].id<<endl;
				cout<<"        Nombre carrera:                     "<<dato[m].carrera<<endl;
				cout<<"        Pin de inscripcion:                 "<<dato[m].pin<<endl;
				cout<<"        Numero de salon:                    "<<dato[m].salon<<endl;
				cout<<"   ............................................................................   "<<endl;
				if(conta==10){
					system("pause");
				}else{
					
				}
			}
		}
		ofstream entrada;
		
		entrada.open("Entrada.txt",ios::out);
		
		strcpy(cmp,"Lista Estudiantil");
		
		entrada<<cmp<<" "<<endl;
		
		entrada.close();
	}
	system ("pause");
}


