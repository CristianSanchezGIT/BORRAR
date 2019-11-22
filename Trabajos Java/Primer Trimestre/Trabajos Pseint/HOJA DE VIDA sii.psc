
Proceso hoja
	Repetir
		Borrar Pantalla
		Escribir "";
		Escribir "";
		Escribir "digite su nombre completo";
		leer a
		
		Repetir
			
			Borrar Pantalla
			Escribir "";
			Escribir "";
			Escribir "tipo de documento";
			Escribir "";
		  Escribir "Digite 1 si es T.I";
		  Escribir "Digite 2 si es C.C";
		  Escribir "Digite 3 si es C.E";
		  Leer b
		  Segun b Hacer
			    1:
			 	  Escribir "Digite su numero de T.I" ;
				  Leer b
				  as= 'Tarjeta De Identidad'
				  LL=2
				2:
				  Escribir "Digite su numero de C.C" ;
				  Leer b
				  as= 'Cedula De Ciudadania'
				  LL=2
			    3:
				  Escribir "Digite su numero de C.E" ;
				  Leer b
				  as= 'Cedula De Extranjeria'
				  LL=2
			  De Otro Modo:
				  LL=1
				  Escribir "Opcion invalida digite otro numero" ;
				  Esperar 1 segundos
				  
			Fin Segun
		Hasta Que LL<>1	
		Borrar Pantalla
		Escribir "";
		Escribir "";
		Escribir "introduzca su fecha de nacimiento" ;
		Leer f
		Borrar Pantalla
		Escribir "";
		Escribir "";
		Escribir "introduzca su lugar de nacimiento" ;
		Leer g
		Repetir
			Borrar Pantalla
			Escribir "";
			Escribir "";	
		 
		 Escribir "introduzca su estado civil" ;
		 Escribir "   1. Casad@"
		 Escribir "   2. Soltero@"
		 Escribir "   3. Divorsiad@"
		 Escribir "   4. Viud@"
		 Escribir "Elija una opción (1-4): " ;
		 Leer OP
		 
		   Segun OP Hacer 
			   1:
			 	  cas='Casad@'
				  LL=2
			    2:
					cas='Solter@'
				   LL=2
			    3:
					cas='Divorsiad@'
				  LL=2
			  4:
				  cas='Viud@'
				  LL=2
				  
			  De otro modo:
				  LL=1
				  Escribir "Opción no válida" ;
				  Esperar 1 Segundos
				
				
		    FinSegun
		Hasta Que LL<>1
		Borrar Pantalla
		Escribir "";
		Escribir "";
		Escribir "Ciudad natal" ;
		Leer LA
		Borrar Pantalla
		Escribir "";
		Escribir "";
		Escribir "Direccion de la residencia" ;
		Leer JU
		
		Repetir
			
		
		Borrar Pantalla
		Escribir "";
		Escribir "";
		Escribir "Digite su numero telefonico";
		Escribir "Digite 1 si es celular";
		Escribir "Digite 2 si es fijo";
		Escribir "Digite 3 si es celular y fijo";
		Leer tt
		Segun tt Hacer
			1:
				ll=2
			 	Escribir "Digite su numero de celular" ;
				Leer t
			2:
				ll=2
				Escribir "Digite su numero fijo" ;
				Leer t
			3:
				ll=2
				Escribir "Digite Su Numero Celular" ;
				Leer t
				Escribir "Digite Su Numero Fijo" ;
				Leer www
				
			De Otro Modo:
				ll=1
				Escribir "Opcion invalida digite otro numero" ;
				Esperar 1 Segundos
				
			Fin Segun
			
		Hasta Que LL<>1
		Borrar Pantalla
		Escribir "";
		Escribir "";
			Escribir "ingrese su EMAIL" ;
		    Leer em
			Borrar Pantalla
			Escribir "";
			Escribir "";
			Escribir "Estudios Primarios" ;
			Leer te
			Borrar Pantalla
			Escribir "";
			Escribir "";
			Escribir "Estudios Secundarios" ;
			Leer se
			Borrar Pantalla
			Escribir "";
			Escribir "";
			Escribir "Estudios Universitarios" ;
			Leer uni
			Borrar Pantalla
			Escribir "";
			Escribir "";
			Escribir "Describa su experiencia laboral" ; 
			Leer ok
			Borrar Pantalla
			Escribir "";
			Escribir "";
			Escribir "Describa sus referencias";
			Leer re
			Borrar Pantalla
			Escribir "";
			Escribir "";
		
	   Escribir  "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo" ;
	   Escribir  "o                                       HOJA DE VIDA                                                      " ;
	   Escribir  "o                                                                                                         " ;
	   Escribir  "o                                                                                                         " ;
	   Escribir  "o                                          FOTO                                                           " ;
	   Escribir  "o                                                                                                         " ;
	   Escribir  "o                                                                                                         " ;
	   Escribir  "o                                        ªªªªªªªªªªª                                                      " ;
	   Escribir  "o                                        ª         ª                                                      " ; 
	   Escribir  "o                                        ª         ª                                                      " ;
	   Escribir  "o                                        ª         ª                                                      " ;
	   Escribir  "o                                        ª         ª                                                      " ;
	   Escribir  "o                                        ª         ª                                                      " ; 
	   Escribir  "o                                        ªªªªªªªªªªª                                                      " ;
	   Escribir  "o                                                                                                         " ;
	   Escribir  "o                                                                                                         " ; 
	   Escribir  "o                                                                                                         " ;
	   Escribir  "o                                                                                                         " ;
	   Escribir  "o                              DATOS PERSONALES                                                           " ;
	   escribir  "o                                                                                                         " ;
	   escribir  "o                                                                                                         " ;
	   escribir  "o                                                                                                         " ;
	   escribir  "o                                                                                                         " ;
	   Escribir  "o                                                                                                         " ;
	   Escribir  "o               *Nombre:  " a "                                                                           " ; 
	   Escribir  "o                                                                                                         " ;
	   escribir  "o               *Tipo De Documento: " as "                                                                " ;	
	   Escribir  "o                                                                                                         " ;
       Escribir  "o               *Documento de identidad:   " b "                                                          " ; 
	   Escribir  "o                                                                                                         " ; 
	   Escribir  "o               *Fecha de Nacimiento:   " f "                                                             " ;
	   Escribir  "o                                                                                                         " ;
	   Escribir  "o               *Lugar de nacimiento: " g "                                                               " ;
	   Escribir  "o                                                                                                         " ;
	   Escribir  "o               *Estado Civil: " cas "                                                                    " ;
	   Escribir  "o                                                                                                         " ;
	   Escribir  "o               *Ciudad: " LA "                                                                           " ;
	   Escribir  "o                                                                                                         " ;
	   Escribir  "o               *Direccion: " JU "                                                                        " ;
	   escribir  "o                                                                                                         " ;
	   si www=0 Entonces
	      Escribir  "o               *Telefono Celular:  " t "     ";
	      Escribir  "o                                                                                                      " ;
		Sino   
	      Escribir  "o               *Telefono Fijo:  " www "                                                               " ;
	      Escribir  "o               *Telefono Celular:  " t "     ";
	   FinSi

	   Escribir  "o                                                                                                         " ;
	   Escribir  "o               *EMAIL:  " em "                                                                           " ;
	   Escribir  "o                                                                                                         " ;
	   escribir  "o                                                                                                         " ;
	   escribir  "o                                                                                                         " ;
	   Escribir  "o                                    ESTUDIOS                                                             " ;
	   escribir  "o                                                                                                         " ;
	   escribir  "o                                                                                                         " ;
	   escribir  "o                                                                                                         " ;
	   Escribir  "o                                                                                                         " ;
	   Escribir  "o               *Estudios primarios: " te "                                                               " ;
	   Escribir  "o                                                                                                         " ;
	   escribir  "o                                                                                                         " ;
	   Escribir  "o                                                                                                         " ;
	   Escribir  "o               *Estudios secundarios: " se "                                                             " ;
	   Escribir  "o                                                                                                         " ;
	   escribir  "o                                                                                                         " ;
	   Escribir  "o                                                                                                         " ;
 	   Escribir  "o                *Universitarios: " uni "                                                                 " ;
	   Escribir  "o                                                                                                         " ;
	   escribir  "o                                                                                                         " ;
	   Escribir  "o                                                                                                         " ;
	   Escribir  "o                                     Experiencias Laborales                                              " ;
       Escribir  "o                                                                                                         " ;
	   escribir  "o                   " ok "                                                                                " ;
	   escribir  "o                                                                                                         " ;
	   escribir  "o                                Referencias                                                              " ;
	   escribir  "o                                                                                                         " ;
	   escribir  "o                                                                                                         " ;
	   escribir  "o                    " re "                                                                               " ;
	   escribir  "o                                                                                                         " ;
		
		//Esperiencias laborales y referencias
		
	   Escribir  "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo" ;
	   Escribir "DESEA VOLVER HACER LA HOJA DE VIDA SI (1) O NO (0)" ;
	   Leer Z
   Hasta Que Z<>1
FinProceso

