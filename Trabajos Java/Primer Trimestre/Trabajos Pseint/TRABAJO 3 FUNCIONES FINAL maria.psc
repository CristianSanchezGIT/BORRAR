Proceso PROGRAMA
	
	Repetir
		Borrar Pantalla
		Escribir 'Bienvenido al programa'
		Escribir "";
		Escribir "";
		Escribir 'Que desea hacer ?'
		Escribir '1. Convertir a Mayuscula'
		Escribir '2. Contar las letras'
		Escribir '3. Convertir a Minuscula'
		Escribir '4. Hacer un Relleno'
		Escribir "0. Salir Del Programa";
		Leer TEAMO
		Segun TEAMO  Hacer
			1.:
				Repetir
				
				borrar pantalla
				Escribir "";
				Escribir "";
				Escribir "                                          xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
				Escribir "";
				Escribir "                                          Ingrese Una Frase Numero O Letra ";
				Escribir "";
				Escribir "                                          xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
				Escribir "";
				
				Leer nombre
				Escribir "";
				Escribir "";
				Escribir "               /$$      /$$                                                             /$$             ";
				Escribir "			              | $$$    /$$$                                                            | $$             ";
				Escribir "              | $$$$  /$$$$  /$$$$$$  /$$   /$$ /$$   /$$  /$$$$$$$  /$$$$$$$ /$$   /$$| $$  /$$$$$$    ";
				Escribir "              | $$ $$/$$ $$ |____  $$| $$  | $$| $$  | $$ /$$_____/ /$$_____/| $$  | $$| $$ |____  $$   ";
				Escribir "              | $$  $$$| $$  /$$$$$$$| $$  | $$| $$  | $$|  $$$$$$ | $$      | $$  | $$| $$  /$$$$$$$   ";
				Escribir "              | $$\  $ | $$ /$$__  $$| $$  | $$| $$  | $$ \____  $$| $$      | $$  | $$| $$ /$$__  $$   ";
				Escribir "              | $$ \/  | $$|  $$$$$$$|  $$$$$$$|  $$$$$$/ /$$$$$$$/|  $$$$$$$|  $$$$$$/| $$|  $$$$$$$   ";
				Escribir "              |__/     |__/ \_______/ \____  $$ \______/ |_______/  \_______/ \______/ |__/ \_______/   ";
				Escribir "                                      /$$  | $$/                                                        ";
				Escribir "                                      |  $$$$$$/                                                        ";
				Escribir "                                       \______/                                                                      ";
				Escribir "";
				Escribir "";
				Escribir "";
				a= Mayusculas(nombre)
				Escribir "                                            " nombre  " Escrito En Mayuscula Es "  a ;
				Escribir "";
				Escribir "";
				
				Escribir '                 Oprima 0 si desea Seguir Convirtiendo A MAYUSCULA Si no oprima cualquier numero'
				Leer cant
			Hasta Que cant<>0
			Escribir "                        ____________________________________________________________________ ";
			Escribir "";
			Escribir "                         Desea Realizar Otra Funcion si/no (por favor escriba en minuscula) ";
			Escribir "                        ____________________________________________________________________ ";
			Leer m
		2.:
			Repetir
				borrar pantalla
				Escribir "";
				Escribir "";
				Escribir "                                 xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
				Escribir "";
				Escribir "                                  Ingrese Una Frase Numero O Letra ";
				Escribir "";
				Escribir "                                 xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
				Escribir "";
				
				Leer nombre
				Escribir "";
				Escribir "";
				Escribir "             /$$                                      /$$  /$$                    /$$  ";
				Escribir "            | $$                                     |__/  | $$                   |$$  ";
				Escribir "            | $$        /$$$$$$  /$$$$$$$   /$$$$$$  /$$ /$$$$$$   /$$   /$$  /$$$$$$$ ";
				Escribir "            | $$       /$$__  $$| $$__  $$ /$$__  $$| $$|_  $$_/  | $$  | $$ /$$__  $$ ";
				Escribir "		            | $$      | $$  \ $$| $$  \ $$| $$  \ $$| $$  | $$    | $$  | $$| $$  | $$ ";
				Escribir "            | $$      | $$  | $$| $$  | $$| $$  | $$| $$  | $$ /$$| $$  | $$| $$  | $$ ";
				Escribir "            | $$$$$$$$|  $$$$$$/| $$  | $$|  $$$$$$$| $$  |  $$$$/|  $$$$$$/|  $$$$$$$ ";
				Escribir "            |________/ \______/ |__/  |__/ \____  $$|__/   \___/   \______/  \_______/ ";
				Escribir "                                           /$$  \ $$                                   ";
				Escribir "                                           |  $$$$$$/                                  ";
				Escribir "                                            \______/                                   ";
				Escribir "";
				Escribir "";
				Escribir "";
				d= Longitud(nombre)
				Escribir "                                 El numero de letras o numeros es  " d ""
				Escribir "";
				Escribir "";
				
				Escribir '           Oprima 0 si desea Seguir Sacando La Longitud Si no oprima cualquier numero'
				Leer cant
			Hasta Que cant<>0
			Escribir "              ____________________________________________________________________ ";
			Escribir "";
			Escribir "               Desea Realizar Otra Funcion si/no (por favor escriba en minuscula) ";
			Escribir "              ____________________________________________________________________ ";
			Leer m
				
				
		3.:
			Repetir
				
				borrar pantalla
				Escribir "";
				Escribir "";
				Escribir "                                          xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
				Escribir "";
				Escribir "                                          Ingrese Una Frase Numero O Letra ";
				Escribir "";
				Escribir "                                          xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
				Escribir "";
				
				Leer nombre 
				Escribir "";
				Escribir "";
			    Escribir "          /$$      /$$ /$$                                                   /$$ ";         
				Escribir "         | $$$    /$$$|__/                                                  | $$            ";
				Escribir "         | $$$$  /$$$$ /$$ /$$$$$$$  /$$   /$$  /$$$$$$$  /$$$$$$$ /$$   /$$| $$  /$$$$$$   ";
				Escribir "         | $$ $$/$$ $$| $$| $$__  $$| $$  | $$ /$$_____/ /$$_____/| $$  | $$| $$ |____  $$  ";
				Escribir "         | $$  $$$| $$| $$| $$  \ $$| $$  | $$|  $$$$$$ | $$      | $$  | $$| $$  /$$$$$$$  ";
				Escribir "         | $$\  $ | $$| $$| $$  | $$| $$  | $$ \____  $$| $$      | $$  | $$| $$ /$$__  $$  ";
				Escribir "         | $$ \/  | $$| $$| $$  | $$|  $$$$$$/ /$$$$$$$/|  $$$$$$$|  $$$$$$/| $$|  $$$$$$$  ";
				Escribir "         |__/     |__/|__/|__/  |__/ \______/ |_______/  \_______/ \______/ |__/ \_______/  ";
				Escribir "";
				Escribir "";
				Escribir "";
				
				b= Minusculas(nombre)
				Escribir "                                        " nombre "  escrito En Minuscula Es " b ;
				Escribir "";
				Escribir "";
				
				Escribir 'Oprima 0 si desea Seguir Convirtiendo A minuscula Si no oprima cualquier numero'
				Leer cant
			Hasta Que cant<>0
			Escribir "               ____________________________________________________________________ ";
			Escribir "";
			Escribir "                Desea Realizar Otra Funcion si/no (por favor escriba en minuscula) ";
			Escribir "               ____________________________________________________________________ ";
			Leer m
		4:
			Repetir
				
				borrar pantalla
				Escribir "";
				Escribir "";
				Escribir "                              xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
				Escribir "";
				Escribir "                               Ingrese Una Frase Numero O Letra ";
				Escribir "";
				Escribir "                              xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
				Escribir "";
				
				Leer nombre
				Escribir "";
				Escribir "";
				Escribir "                    /$$$$$$$            /$$ /$$                               ";
				Escribir "                   | $$__  $$          | $$| $$                               ";
				Escribir "                   | $$  \ $$  /$$$$$$ | $$| $$  /$$$$$$  /$$$$$$$   /$$$$$$  ";
				Escribir "                   | $$$$$$$/ /$$__  $$| $$| $$ /$$__  $$| $$__  $$ /$$__  $$ ";
				Escribir "                   | $$__  $$| $$$$$$$$| $$| $$| $$$$$$$$| $$  \ $$| $$  \ $$ ";
				Escribir "                   | $$  \ $$| $$_____/| $$| $$| $$_____/| $$  | $$| $$  | $$ ";
				Escribir "                   | $$  | $$|  $$$$$$$| $$| $$|  $$$$$$$| $$  | $$|  $$$$$$/ ";
				Escribir "                   |__/  |__/ \_______/|__/|__/ \_______/|__/  |__/ \______/  ";
				Escribir "";
				Escribir "";
				Escribir "";
				Escribir 'Escriba la cantidad de veces que quiere que se repita'
				 Leer cant
				Escribir 'Escriba lo que quiere que aparesca en el relleno'
				
				filadesimbolo<-''
				Para columna<-1 Hasta cant Hacer
					filadesimbolo <-concatenar(filadesimbolo ,nombre)
				FinPara
				Para fila<-1 Hasta cant Hacer
					Escribir filadesimbolo
				FinPara
				Escribir 'Oprima 0 si desea Seguir Sacando El Relleno Si no oprima cualquier numero'
				Leer cant
			Hasta Que cant<>0
			Escribir "               ____________________________________________________________________ ";
			Escribir "";
			Escribir "                Desea Realizar Otra Funcion si/no (por favor escriba en minuscula) ";
			Escribir "               ____________________________________________________________________ ";
			Leer m
			0:EligeSalir<-Verdadero
			De Otro Modo:
				Escribir 'Escoja opcion valida'
				Esperar 1 Segundos
		FinSegun
		
	Hasta Que m<>'si' o EligeSalir
FinProceso

