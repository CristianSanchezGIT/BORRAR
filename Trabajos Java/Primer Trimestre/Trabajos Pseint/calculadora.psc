Proceso sin_titulo
	Repetir
		
	  Escribir "";
	  Escribir "     /////////////////////////////////////////////////////////////////////////////////////////////////// ";
	  Escribir "";
	  Escribir "     $$$$$$$  $$$$$$$$  $$      $$$$$$$  $$    $$  $$      $$$$$$$$  $$$$    $$$$$$$$  $$$$$$$$ $$$$$$$$ ";
	  Escribir "     $$       $$    $$  $$      $$       $$    $$  $$      $$    $$  $$  $   $$    $$  $$    $$ $$    $$ ";
	  Escribir "     $$       $$    $$  $$      $$       $$    $$  $$      $$    $$  $$   $  $$    $$  $$$$$$$$ $$    $$ ";
	  Escribir "     $$       $$$$$$$$  $$      $$       $$    $$  $$      $$$$$$$$  $$   $  $$    $$  $$$      $$$$$$$$ ";
	  Escribir "     $$       $$    $$  $$      $$       $$    $$  $$      $$    $$  $$  $   $$    $$  $$ $$    $$    $$ ";
	  Escribir "     $$$$$$$  $$    $$  $$$$$$  $$$$$$$  $$$$$$$$  $$$$$$  $$    $$  $$$$    $$$$$$$$  $$   $$  $$    $$ ";
	  Escribir "";
	  Escribir "     /////////////////////////////////////////////////////////////////////////////////////////////////// ";
	  Escribir "";
     
	 Escribir "                 -------------------";
	 Escribir "                  Elija una opción: ";
	 Escribir "                 -------------------";
	 Escribir "                 1  - Suma"
	 Escribir "                 2  - Resta"
	 Escribir "                 3  - Multiplicacion"
	 Escribir "                 4  - Division"
	 Escribir "                 5  - Promedio De Cinco Numeros"
	 Escribir "                 6  - Convertir De Pesos A Dolares"
	 Escribir "                 7  - Elevado"
	 Escribir "                 8  - Averiguar Si Es Primo"
	 Escribir "                 9  - Convertir De Kilos A Gramos"
	 Escribir "                 10 - Convertir De Kilos A Libras"
	 Escribir "                 11 - Convertir De Kilometros A Centimetros"
	 Escribir "                 12 - Seno"
	 Escribir "                 13 - Salir "
	 Leer ll
	 Segun ll Hacer
		1:
			
		 Repetir
			 Borrar Pantalla
			 Escribir "";
			 Escribir "";
			 Escribir "                          _________________________________________ ";
			 Escribir "";
			 Escribir "                           #######  ##    ##  ###    ###  ########  ";
			 Escribir "                           ##       ##    ##  ## #  # ##  ##    ##  ";
			 Escribir "                           #######  ##    ##  ##  ##  ##  ########  ";
			 Escribir "                                ##  ##    ##  ##      ##  ##    ##  ";
			 Escribir "                           #######  ########  ##      ##  ##    ##  ";
			 Escribir "                          _________________________________________ ";
			 Escribir " ";
			 suma<-0 
			 Hacer 
				Escribir "                           Ingrese Numero A Sumar(0 Para Terminar)" 
				
				leer n 
				suma<-suma+n
			Hasta Que n=0 
			Escribir "                                    ----------------------";
			Escribir "                                     El Resultado Es: " suma
			Escribir "                                    ----------------------";
			Escribir "                  __________________________________________________________ ";
			Escribir "";
			Escribir "                  Desea Seguir Sumando si/no(por favor escriba en minuscula) ";
			Escribir "                  __________________________________________________________ ";
			Leer u
		Hasta Que u<>'si'
		    Escribir "             ____________________________________________________________________ ";
		    Escribir "";
			Escribir "              Desea Realizar Otra Operacio si/no (por favor escriba en minuscula) ";
			Escribir "             ____________________________________________________________________ ";
			Leer m
		2:
			
	     Repetir
			
			Borrar Pantalla
			Escribir "";
			Escribir "";
			Escribir "                          _____________________________________________ ";
			Escribir "";
			Escribir "                           #######  ######  ######  ########  ########  ";
			Escribir "                           ##   ##  ##      ##         ##     ##    ##  ";
			Escribir "                           #######  ######  ######     ##     ########  ";
			Escribir "                           ####     ##          ##     ##     ##    ##  ";
			Escribir "                           ##  ##   ######  ######     ##     ##    ##  ";
			Escribir "                          _____________________________________________ ";
			Escribir " ";
			Escribir "                                  Cuantos Numeros Desea Restar"
			leer canrestados
			j=0
			Para xx<-1 Hasta canrestados Con Paso 1 Hacer
				Si j=0 Entonces
					Escribir "                                       Escriba El Numero 1"
					leer numero
					j=numero
					l=numero
				Sino
					Escribir "                                   Escriba El Siguiente Numero"
					leer numero
					l=l-numero
				Fin Si
			Fin Para
			Escribir "                                     ----------------------";
			Escribir "                                       El Resultado Es: " l
			Escribir "                                     ----------------------";
			Escribir "                  ___________________________________________________________ ";
			Escribir "";
			Escribir "                  Desea Seguir Restando si/no(por favor escriba en minuscula)"
			Escribir "                  ___________________________________________________________ ";
			Leer pp
		  Hasta Que pp<>'si'
		  Escribir "               ____________________________________________________________________ ";
		  Escribir "";
		  Escribir "                Desea Realizar Otra Operacio si/no (por favor escriba en minuscula) ";
		  Escribir "               ____________________________________________________________________ ";
		  Leer m
	    3:
		 Repetir
			Borrar Pantalla
			Escribir "";
			Escribir "";
			Escribir "         __________________________________________________________________________________________";
			Escribir "";
			Escribir "          ###    ###  ##  ##  ##   ########  ######  ######  ##     ######  #####  #######  ###### ";
			Escribir "          ## #  # ##  ##  ##  ##      ##       ##    ##  ##  ##       ##    ##     ##   ##  ##  ## ";
			Escribir "          ##  ##  ##  ##  ##  ##      ##       ##    ######  ##       ##    ##     #######  ###### ";
			Escribir "          ##      ##  ##  ##  ##      ##       ##    ##      ##       ##    ##     ##   ##  ####   ";
			Escribir "          ##      ##  ######  #####   ##     ######  ##      #####  ######  #####  ##   ##  ##  ## ";
			Escribir "         __________________________________________________________________________________________";
			Escribir " ";
			Escribir "                                      Cuantos Numeros Desea Miltiplicar"
			leer canrestados
			ttt=0
			Para wa<-1 Hasta canrestados Con Paso 1 Hacer
				Si ttt=0 Entonces
					Escribir "                                             Escriba El Numero 1"
					leer numero
					ttt=numero
					lll=numero
				Sino
					Escribir "                                         Escriba El Siguiente Numero"
					leer numero
					lll=lll*numero
				Fin Si
			Fin Para
			Escribir "                                            ----------------------";
			Escribir "                                             El Resultado Es: " lll
			Escribir "                                            ----------------------";
			Escribir "                     _________________________________________________________________ ";
			Escribir "";
			Escribir "                      Desea Seguir Multiplicando si/no(por favor escriba en minuscula)"
			Escribir "                     _________________________________________________________________ ";
			Leer ii
		  Hasta Que ii<>'si'
		  Escribir "                    ____________________________________________________________________ ";
		  Escribir "";
		  Escribir "                     Desea Realizar Otra Operacio si/no (por favor escriba en minuscula) ";
		  Escribir "                    ____________________________________________________________________ ";
		   Leer m
		4: 
			Repetir
				Borrar Pantalla
				Escribir "";
				Escribir "";
				Escribir "             _________________________________________________________________________ ";
				Escribir "";
				Escribir "              ####    ######  ##       ##  ######  ######  ######  ######  ###     ##  ";
				Escribir "              ##  #     ##     ##     ##     ##    ##        ##    ##  ##  ## ##   ##  ";
				Escribir "              ##   #    ##      ##   ##      ##    ######    ##    ##  ##  ##  ##  ##  ";
				Escribir "              ##  #     ##       ## ##       ##        ##    ##    ##  ##  ##   ## ##  ";
				Escribir "              ####    ######      ###      ######  ######  ######  ######  ##     ###  ";
				Escribir "             _________________________________________________________________________ ";
				Escribir " ";
				Escribir "                                   Cuantos Numeros Desea Dividir ";
				leer canrestados
				j=0
				Escribir "                                        Escriba El Numero 1      ";
				leer numero
				si numero=0 Entonces
					Escribir "                                  Error El Numero 0 No Es Dibisible";
				sino	                                      
					Para xx<-1 Hasta canrestados Con Paso 1 Hacer
						Si j=0 Entonces
							j=numero
							l=numero
						Sino
							Escribir "                                    Escriba El Numero Siguiente"
							leer numero
							l=l/numero
							
						Fin Si
					fin para
					Escribir "                                      ----------------------";
					Escribir "                                       El Resultado Es: " l
					Escribir "                                      ----------------------";
				fin si 
				Escribir "                  _______________________________________________________________ ";
				Escribir "";
				Escribir "                   Desea Seguir Dividiendo si/no(por favor escriba en minuscula)"
				Escribir "                  _______________________________________________________________ ";
				Leer QQ
		   Hasta Que QQ<>'si'
		   
		   Escribir "                ____________________________________________________________________ ";
		   Escribir "";
		   Escribir "                 Desea Realizar Otra Operacio si/no (por favor escriba en minuscula) ";
		   Escribir "                ____________________________________________________________________ ";
		 Leer m
		5:
	      Repetir
			Borrar Pantalla
			Escribir "";
			Escribir "";
			Escribir "             ___________________________________________________________________ ";
			Escribir "";
			Escribir "              ######  ######  #######  ###   ###  #####  ####   ######  #######  ";
			Escribir "              ##  ##  ##  ##  ##   ##  ## # # ##  ##     ##  #    ##    ##   ##  ";
			Escribir "              ######  ######  ##   ##  ##  #  ##  #####  ##   #   ##    ##   ##  ";
			Escribir "              ##      ####    ##   ##  ##     ##  ##     ##  #    ##    ##   ##  ";
			Escribir "              ##      ##  ##  #######  ##     ##  #####  ####   ######  #######  ";
			Escribir "             ___________________________________________________________________ ";
			Escribir " ";
			Escribir "                                   Ingrese El Primer Numero";
			Leer d
			Escribir "                                   Ingrese El Segundo Numero";
			Leer c
			Escribir "                                   Ingrese El Tercer Numero";
			Leer k
			Escribir "                                   Ingrese El Cuarto Numero";
			Leer p
			Escribir "                                   Ingrese El Quinto Numero";
			Leer t
			f=d+c+k+p+t
			w=f/5
			Escribir "                                    ----------------------";
			Escribir "                                     El Resultado Es: " w
			Escribir "                                    ----------------------";
			Escribir "            _______________________________________________________________________ ";
			Escribir "";
			Escribir "             Desea Seguir Sacando El promedio si/no(por favor escriba en minuscula)"
			Escribir "            _______________________________________________________________________ ";
			Leer tt
		  Hasta Que tt<>'si'
		  
		  Escribir "              ____________________________________________________________________ ";
		  Escribir "";
		  Escribir "               Desea Realizar Otra Operacio si/no (por favor escriba en minuscula) ";
		  Escribir "              ____________________________________________________________________ ";		 
		  Leer m
	   6:
		  
		   Repetir
			   Borrar Pantalla
			   Escribir "";
			   Escribir "       $$$$$$$$$$$$                                              $$$$$$$$$$$$   ";
			   Escribir "       $$$$$$$$$$$$            _____________________             $$$$$$$$$$$$   ";
			   Escribir "       $$$  $$                                                   $$$  $$        ";
			   Escribir "       $$$$$$$$$$$$             Ingrese Los Dolares              $$$$$$$$$$$$   ";  
			   Escribir "       $$$$$$$$$$$$            _____________________             $$$$$$$$$$$$   ";
			   Escribir "            $$  $$$  (Recuerde Que El Dolar Esta En 2500 Pesos)       $$  $$$   ";
			   Escribir "       $$$$$$$$$$$$                                              $$$$$$$$$$$$   ";
			   Escribir "       $$$$$$$$$$$$                                              $$$$$$$$$$$$   ";
			   Escribir "";
			   leer dolares
			   
			  pesos=0
			  pesos=2500*dolares
			
			  Escribir "                        --------------------------------------";
			  Escribir "                         " dolares " Dolares Equivalen A " pesos " Pesos";
			  Escribir "                        --------------------------------------";
			  Escribir "   ________________________________________________________________________________ ";
			  Escribir "";
			  Escribir "    Desea Seguir Convirtiendo Dolares A Pesos si/no(por favor escriba en minuscula)"
			  Escribir "   ________________________________________________________________________________ ";
			  Leer sss
		  Hasta Que sss<>'si'
		  Escribir "          ____________________________________________________________________ ";
		  Escribir "";
		  Escribir "           Desea Realizar Otra Operacio si/no (por favor escriba en minuscula) ";
		  Escribir "          ____________________________________________________________________ ";
		  Leer m
	   7:
		  Repetir
			
			Borrar Pantalla
			
			Escribir "";
			Escribir "";
			Escribir "             ________________________________________________________________ ";
			Escribir "";
			Escribir "              ######  ##      ######  ##        ##  #######  ####    #######  ";
			Escribir "              ##      ##      ##       ##      ##   ##   ##  ##  #   ##   ##  ";
			Escribir "              ######  ##      ######    ##    ##    #######  ##   #  ##   ##  ";
			Escribir "              ##      ##      ##         ##  ##     ##   ##  ##  #   ##   ##  ";
			Escribir "              ######  ######  ######       ##       ##   ##  ####    #######  ";
			Escribir "             ________________________________________________________________ ";
			Escribir "                                                                              ";
			Escribir "                                Ingrese El Numero A Elevar                    ";
			leer e
			Escribir "                              A Que Potencia Lo Quiere Elevar"
			Leer s 
		    b=e^s
			Escribir "                                  ----------------------";
			Escribir "                                   El Resultado Es: " b
			Escribir "                                  ----------------------";
			Escribir "              _____________________________________________________________ ";
			Escribir "";                
			Escribir "               Desea Seguir Elevando si/no(por favor escriba en minuscula)  ";
			Escribir "              _____________________________________________________________ ";
			Leer aa
		 Hasta Que aa<>'si'
		 Escribir "           ____________________________________________________________________ ";
		 Escribir "";
		 Escribir "            Desea Realizar Otra Operacio si/no (por favor escriba en minuscula) ";
		 Escribir "           ____________________________________________________________________ ";
		   Leer m
	    8:
		   Repetir
			   Borrar Pantalla
			   
			   Escribir "";
			   Escribir "";
			   Escribir "                    _____________________________________________ ";
			   Escribir "";
			   Escribir "                     ######  ######  ###### ###     ###  #######  ";
			   Escribir "                     ##  ##  ##  ##    ##   ## ## ## ##  ##   ##  ";
			   Escribir "                     ######  ######    ##   ##   #   ##  ##   ##  ";
			   Escribir "                     ##      ####      ##   ##       ##  ##   ##  ";
			   Escribir "                     ##      ##  ##  ###### ##       ##  #######  ";
			   Escribir "                    _____________________________________________ ";
			   Escribir "                                                                              ";
			   
			   Escribir "                                   Escriba El Numero"
			 Leer N
			 Si N<>Trunc(N) Entonces
				Escribir "                                El Numero Debe Ser Entero ";
             Sino
				Si N<0  entonces 
					Nu<-N*(-1)
				sino
					Nu<-N
				FinSi
				Si N/2=trunc(Nu/2) Entonces 
					Escribir "                                 ____________________";
					Escribir "";
					Escribir "                                  Numero Primo:",Nu=2
					Escribir "                                 ____________________";
				Sino
					EsPrimo<-Nu<>1 
					Nu<-RC(Nu)
					f<-3
					Mientras f<=Nu Y EsPrimo Hacer
						Si N/F=trunc(N/F) Entonces 
							EsPrimo<-Falso
						FinSi
						f<-f+2
					FinMientras
					Escribir "                                ________________________";
					Escribir "";
					Escribir "                                 Numero Primo:",EsPrimo
					Escribir "                                ________________________";
					Si N>1 Y NO EsPrimo Entonces 
						
					FinSi
				FinSi
			FinSi	
			Escribir "   ";
			Escribir "       __________________________________________________________________________ ";
			Escribir "";     
			Escribir "       Desea Seguir Averiguando Los Primos si/no(por favor escriba en minuscula)"
			Escribir "       __________________________________________________________________________ "; 
			 Leer cc
		 Hasta Que cc<>'si'
		 Escribir "         _____________________________________________________________________ ";
		 Escribir "";
		 Escribir "          Desea Realizar Otra Operacio si/no (por favor escriba en minuscula) ";
		 Escribir "         _____________________________________________________________________ ";
		 Leer m
	   9:
		  Repetir
			  Borrar Pantalla
			  Escribir " ";
			  Escribir "";
			  Escribir "                         ________________________________________ ";
			  Escribir "";
			  Escribir "                          ##  ##  ######  ##     #######  ###### ";
			  Escribir "                          ## ##     ##    ##     ##   ##  ##     ";
			  Escribir "                          ####      ##    ##     ##   ##  ###### ";
			  Escribir "                          ## ##     ##    ##     ##   ##      ## ";
			  Escribir "                          ##  ##  ######  #####  #######  ###### ";
			  Escribir "                         ________________________________________ ";
			  Escribir "";
			  Escribir "                                     Ingrese Los Kilos";
			  Escribir "";
			  leer kilos 
			
			gramos=0
			gramos=1000*kilos
			
			Escribir "                       --------------------------------------------";
			escribir "                             " kilos " Kilos Equivalen A " gramos " Gramos";
			Escribir "                       --------------------------------------------";
			Escribir "";
			Escribir "   __________________________________________________________________________________ ";
			Escribir "";
			Escribir "    Desea Seguir Convirtiendo De Kilos A Gramos si/no(por favor escriba en minuscula)"
			Escribir "   __________________________________________________________________________________ ";
			Leer zz
		 Hasta Que zz<>'si'
		    Escribir "         _____________________________________________________________________ ";
		    Escribir "";
		    Escribir "          Desea Realizar Otra Operacio si/no (por favor escriba en minuscula) ";
		    Escribir "         _____________________________________________________________________ ";
		    Leer m
	   
	  10:
		Repetir
			Borrar Pantalla
			Escribir " ";
			Escribir "";
			Escribir "                         ________________________________________ ";
			Escribir "";
			Escribir "                          ##  ##  ######  ##     #######  ###### ";
			Escribir "                          ## ##     ##    ##     ##   ##  ##     ";
			Escribir "                          ####      ##    ##     ##   ##  ###### ";
			Escribir "                          ## ##     ##    ##     ##   ##      ## ";
			Escribir "                          ##  ##  ######  #####  #######  ###### ";
			Escribir "                         ________________________________________ ";
			Escribir "";
			Escribir "                                     Ingrese Los Kilos";
			Escribir "";
			leer kilos 
			
			libras=0
			libras=2*kilos
			
			Escribir "                       --------------------------------------------";
			escribir "                              " kilos " Kilos Equivalen A " libras " Libras";
			Escribir "                       --------------------------------------------";
			Escribir "";
			Escribir "   __________________________________________________________________________________ ";
			Escribir "";
			Escribir "    Desea Seguir Convirtiendo De Kilos A Libras si/no(por favor escriba en minuscula)"
			Escribir "   __________________________________________________________________________________ ";
			Leer mm
		 Hasta Que mm<>'si'
		 Escribir "         _____________________________________________________________________ ";
		 Escribir "";
		 Escribir "          Desea Realizar Otra Operacio si/no (por favor escriba en minuscula) ";
		 Escribir "         _____________________________________________________________________ ";
		 Leer m
	   11:
		 Repetir
			 Borrar Pantalla
			 Escribir " ";
			 Escribir "";
			 Escribir "           __________________________________________________________________________________ ";
			 Escribir "";
			 Escribir "            ##  ##  ######  ##     ####### ###    ####  ##### ######  ######  ######  ###### ";
			 Escribir "            ## ##     ##    ##     ##   ## ## ## ## ##  ##      ##    ##  ##  ##  ##  ##     ";
			 Escribir "            ####      ##    ##     ##   ## ##   #   ##  #####   ##    ######  ##  ##  ###### ";
			 Escribir "            ## ##     ##    ##     ##   ## ##       ##  ##      ##    ####    ##  ##      ## ";
			 Escribir "            ##  ##  ######  #####  ####### ##       ##  #####   ##    ##  ##  ######  ###### ";
			 Escribir "           __________________________________________________________________________________ ";
			 Escribir "";
			Escribir "                                          Ingrese Los Kilometros"
			leer kilometros
			
			centimetros=0
			centimetros=100000*kilometros
			Escribir "  ";
			Escribir "                          ---------------------------------------------------";
			escribir "                              " kilometros " Kilometros Equivalen A " centimetros " Centimetros";
			Escribir "                          ---------------------------------------------------";
			Escribir "";
			Escribir "     ____________________________________________________________________________________________ ";
			Escribir "";
			Escribir "      Desea Seguir Convirtiendo De Kilometros A Centimetros si/no(por favor escriba en minuscula)"
			Escribir "     ____________________________________________________________________________________________ ";
			Leer www
		Hasta Que www<>'si'
		Escribir "                _____________________________________________________________________ ";
		Escribir "";  
		Escribir "                 Desea Realizar Otra Operacio si/no (por favor escriba en minuscula) ";
		Escribir "                _____________________________________________________________________ ";
		Leer m
			
	   12:
		Repetir
			
			Borrar Pantalla
			
			Escribir "";
			Escribir "";
			Escribir "                          ______________________________________  ";
			Escribir "";
			Escribir "                           #######  ######  ###     ##  #######    ";
			Escribir "                           ##       ##      ## ##   ##  ##   ##    ";
			Escribir "                           #######  ######  ##  ##  ##  ##   ##    ";
			Escribir "                                ##  ##      ##   ## ##  ##   ##    ";
			Escribir "                           #######  ######  ##     ###  #######    ";
			Escribir "                          ______________________________________  ";
			Escribir " ";
			Escribir "                                     Ingrese El Numero";
			Leer va
			
			Escribir "                                     ------------------";
			Escribir "                                     Seno= " Sen(va)
			Escribir "                                     ------------------";
			Escribir "";
			Escribir "             ___________________________________________________________________ ";
			Escribir "";
			Escribir "              Desea Seguir Sacando El Seno si/no(por favor escriba en minuscula)"
			Escribir "             ___________________________________________________________________ ";
			Leer tt
		   Hasta Que tt<>'si'
		   Escribir "                  __________________________________________________________ ";
		   Escribir "";
		   Escribir "                  Desea Seguir Sumando si/no(por favor escriba en minuscula) ";
		   Escribir "                  __________________________________________________________ ";
		  Leer m
		  
		13: EligeSalir<-Verdadero
			
			
		De Otro Modo:
			Escribir "                -------------------------";
			Escribir "                     Opcion No Valida    "; 
			Escribir "                -------------------------";
			Escribir "                 Intente Con Otro Numero "; 
			Escribir "                -------------------------";
			Esperar 2 Segundos
			m='si'
	Fin Segun
		
		Borrar Pantalla
	Hasta Que EligeSalir o  m<>'si'
	
FinProceso
