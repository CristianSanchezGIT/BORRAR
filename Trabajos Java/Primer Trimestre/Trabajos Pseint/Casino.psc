Proceso sin_titulo
	h=0
	teno=0
	Repetir
		
		Borrar Pantalla
		Escribir "";
		Escribir "";
		Escribir "";
		Escribir "  .....................  Cuantas Monedas Desea Ingresar  .....................  ";
		Escribir "  .................  Recuerde Que Cada Moneda Es Un Intento  .................  ";
		Leer mo
	    Si mo=0 Entonces
			
			Escribir "  ............................................................................  ";
		    Escribir "  ......................  Con 0 Monedas No Puede Jugar  ......................  ";
			Escribir "  ............................................................................  ";
			Escribir "  ..                                                                        ..  ";
			Escribir "  ............................................................................  ";
			mo=1
			Escribir "  .. Desea Volver A Ingresar Monedas si/no (por favor escriba en minuscula) ..  ";
			Escribir "  ............................................................................  ";
			Leer s
		Sino
			Repetir
				tno=0
				Repetir
					Borrar Pantalla
					Escribir "  ............................................................................  ";
					Escribir "  ............................................................................  ";
					Escribir "  .......................  Usted Lleva " h " De " mo " Intentos  ......................  ";
					Escribir "  ............................................................................  ";
					Escribir "  ..                                                                        ..  ";
					Escribir "  ..       __                                                               ..  ";
					Escribir "  ..      (  )                                                              ..  ";
					Escribir "  ..       \/                                                               ..  ";
					Escribir "  ..       /\                                                               ..  ";
					Escribir "  ..      /  \    ......................................................    ..  ";
					Escribir "  ..      |—-|    ......  Oprima Una Tecla Para Halar La Palanca  ......    ..  ";
					Escribir "  ..      |—-|    ......................................................    ..  ";
					Escribir "  ..      |—-|                                                              ..  ";
					Escribir "  ..      |—-|                                                              ..  ";
					Escribir "  ..      |—-|                                                              ..  ";
					Escribir "	  ..    /¯/¯¯\¯\                                                            ..  ";
					Escribir "	  ..   /¯/¯¯¯¯\¯\                                                           ..  ";
					Escribir "  ..  /¯/¯¯¯¯¯¯\¯\                                                          ..  ";
					Escribir "  ..                                                                        ..  ";
				    Escribir "  ............................................................................  ";
					Escribir "  ............................................................................  ";
					
					Esperar Tecla
					h=h+1
					Para as<-1 Hasta 10 Con Paso 1 Hacer
						
						Borrar Pantalla
						Escribir "  ............................................................................  ";
						Escribir "  ............................................................................  ";
						Escribir "  .......................  Usted Lleva " h " De " mo " Intentos  ......................  ";
						Escribir "  ............................................................................  ";
						Escribir "  ..                                                                        ..  ";
						Escribir "  ..                                                                        ..  ";
						Escribir "  ..                                                                        ..  ";
						Escribir "  ..                                                                        ..  ";
						Escribir "  ..                                                                        ..  ";
						Escribir "  ..                                                                        ..  ";
						Escribir "  ..                                                                        ..  ";
						Escribir "  ..                                                                        ..  ";
						Escribir "  ..                                                                        ..  ";
						Escribir "  ..                                                                        ..  ";
						Escribir "  ..                                                                        ..  ";
						Escribir "	  ..    /¯(¯¯)¯\                                                            ..  ";
						Escribir "	  ..   /¯/|¯¯|\¯\                                                           ..  ";
						Escribir "  ..  /¯/¯|¯¯|¯\¯\                                                          ..  ";
						Escribir "  ..      |—-|                     _____     _____     _____                ..  ";
						Escribir "  ..      |—-|                    |     |   |     |   |     |               ..  ";
						Escribir "  ..      |—-|                    |  X  |   |  X  |   |  X  |               ..  ";
						Escribir "  ..      |—-|                    |_____|   |_____|   |_____|               ..  ";
						Escribir "  ..      |—-|                                                              ..  ";
						Escribir "  ..      |—-|                                                              ..  ";
						Escribir "  ..      \  /                                                              ..  ";
						Escribir "  ..       \/                                                               ..  ";
						Escribir "  ..       /\                                                               ..  ";
						Escribir "  ..      (__)                                                              ..  ";
						Escribir "  ..                                                                        ..  ";
						Escribir "  ............................................................................  ";
						Escribir "  ............................................................................  ";
						
						Esperar 0.1 Segundos
						
						Borrar Pantalla
						a <- azar(9)+1
						b <- azar(9)+1
						c <- azar(9)+1
						
						Borrar Pantalla
						Escribir "  ............................................................................  ";
						Escribir "  ............................................................................  ";
						Escribir "  .......................  Usted Lleva " h " De " mo " Intentos  ......................  ";
						Escribir "  ............................................................................  ";
						Escribir "  ..                                                                        ..  ";
						Escribir "  ..                                                                        ..  ";
						Escribir "  ..                                                                        ..  ";
						Escribir "  ..                                                                        ..  ";
						Escribir "  ..                                                                        ..  ";
						Escribir "  ..                                                                        ..  ";
						Escribir "  ..                                                                        ..  ";
						Escribir "  ..                                                                        ..  ";
						Escribir "  ..                                                                        ..  ";
						Escribir "  ..                                                                        ..  ";
						Escribir "  ..                                                                        ..  ";
						Escribir "  ..    /¯(¯¯)¯\                                                            ..";
						Escribir "	  ..   /¯/|¯¯|\¯\                                                           ..";
						Escribir "  ..  /¯/¯|¯¯|¯\¯\                                                          ..  ";
						Escribir "  ..      |—-|                     _____     _____     _____                ..  ";
						Escribir "  ..      |—-|                    |     |   |     |   |     |               ..  ";
						Escribir "  ..      |—-|                    |  " a "  |   |  " b "  |   |  " c "  |               .. ";
						Escribir "  ..      |—-|                    |_____|   |_____|   |_____|               ..  ";
						Escribir "  ..      |—-|                                                              ..  ";
						Escribir "  ..      |—-|                                                              ..  ";
						Escribir "  ..      \  /                                                              ..  ";
						Escribir "  ..       \/                                                               ..  ";
						Escribir "  ..       /\                                                               ..  ";
						Escribir "  ..      (__)                                                              ..  ";
						Escribir "  ..                                                                        ..  ";
						Escribir "  ............................................................................  ";
						Escribir "  ............................................................................  ";
					
						Esperar 0.1 Segundos
						
						
					FinPara
					
                    Esperar 2 Segundos
                    
					Si a=b o a=c o b=c Entonces
						Si a=b y a=c Entonces
							Borrar Pantalla
							Escribir "  ............................................................................  ";
							Escribir "  ............................................................................  ";
							Escribir "  .......................  Usted Lleva " h " De " mo " Intentos  ......................  ";
							Escribir "  ............................................................................  ";
							Escribir "  ..                                                                        ..  ";
							Escribir "  ..                                                                        ..  ";
							Escribir "  ..                                                                        ..  ";
							Escribir "  ..                                                                        ..  ";
							Escribir "  ..                                                                        ..  ";
							Escribir "  ..                                                                        ..  ";
							Escribir "  ..                    Gano 10 Monedas ingrese 0 si desea jugarlas O       ..  ";
							Escribir "  ..                        Cualquier Numero Si Desea Guardarlas            ..  ";
							Escribir "  ..                                                                        ..  ";
							Escribir "  ..                                                                        ..  ";
							Escribir "  ..                                                                        ..  ";
							Escribir "  ..    /¯(¯¯)¯\                                                            ..";
							Escribir "	  ..   /¯/|¯¯|\¯\                                                           ..";
							Escribir "  ..  /¯/¯|¯¯|¯\¯\                                                          ..  ";
							Escribir "  ..      |—-|                     _____     _____     _____                ..  ";
							Escribir "  ..      |—-|                    |     |   |     |   |     |               ..  ";
							Escribir "  ..      |—-|                    |  " a "  |   |  " b "  |   |  " c "  |               .. ";
							Escribir "  ..      |—-|                    |_____|   |_____|   |_____|               ..  ";
							Escribir "  ..      |—-|                                                              ..  ";
							Escribir "  ..      |—-|                                                              ..  ";
							Escribir "  ..      \  /                                                              ..  ";
							Escribir "  ..       \/                                                               ..  ";
							Escribir "  ..       /\                                                               ..  ";
							Escribir "  ..      (__)                                                              ..  ";
							Escribir "  ..                                                                        ..  ";
							Escribir "  ............................................................................  ";
							Escribir "  ............................................................................  ";
							
							
							Leer t
							Si t=0 Entonces
								mo=mo+10
							Sino
								tno=tno+10
					        Fin Si
						Sino
							Escribir "";
							Borrar Pantalla
							Escribir "  ............................................................................  ";
							Escribir "  ............................................................................  ";
							Escribir "  .......................  Usted Lleva " h " De " mo " Intentos  ......................  ";
							Escribir "  ............................................................................  ";
							Escribir "  ..                                                                        ..  ";
							Escribir "  ..                                                                        ..  ";
							Escribir "  ..                                                                        ..  ";
							Escribir "  ..                                                                        ..  ";
							Escribir "  ..                                                                        ..  ";
							Escribir "  ..                                                                        ..  ";
							Escribir "  ..                    Gano 3 Monedas ingrese 0 si desea jugarlas O       ..  ";
							Escribir "  ..                        Cualquier Numero Si Desea Guardarlas            ..  ";
							Escribir "  ..                                                                        ..  ";
							Escribir "  ..                                                                        ..  ";
							Escribir "  ..                                                                        ..  ";
							Escribir "  ..    /¯(¯¯)¯\                                                            ..";
							Escribir "	  ..   /¯/|¯¯|\¯\                                                           ..";
							Escribir "  ..  /¯/¯|¯¯|¯\¯\                                                          ..  ";
							Escribir "  ..      |—-|                     _____     _____     _____                ..  ";
							Escribir "  ..      |—-|                    |     |   |     |   |     |               ..  ";
							Escribir "  ..      |—-|                    |  " a "  |   |  " b "  |   |  " c "  |               .. ";
							Escribir "  ..      |—-|                    |_____|   |_____|   |_____|               ..  ";
							Escribir "  ..      |—-|                                                              ..  ";
							Escribir "  ..      |—-|                                                              ..  ";
							Escribir "  ..      \  /                                                              ..  ";
							Escribir "  ..       \/                                                               ..  ";
							Escribir "  ..       /\                                                               ..  ";
							Escribir "  ..      (__)                                                              ..  ";
							Escribir "  ..                                                                        ..  ";
							Escribir "  ............................................................................  ";
							Escribir "  ............................................................................  ";
							Leer t
					        Si t=0 Entonces
								mo=mo+3
					        Sino
								tno=tno+3
					        Fin Si
							
						fin si
						
					Sino
						
						Borrar Pantalla
						Escribir "  ............................................................................  ";
						Escribir "  ............................................................................  ";
						Escribir "  .......................  Usted Lleva " h " De " mo " Intentos  ......................  ";
						Escribir "  ............................................................................  ";
						Escribir "  ..                                                                        ..  ";
						Escribir "  ..                                                                        ..  ";
						Escribir "  ..                                                                        ..  ";
						Escribir "  ..                                                                        ..  ";
						Escribir "  ..                                                                        ..  ";
						Escribir "  ..                                .......................                 ..  ";
						Escribir "  ..                                ..  Siga Intentando  ..                 ..  ";
						Escribir "  ..                                .......................                 ..  ";
						Escribir "  ..                                                                        ..  ";
						Escribir "  ..                                                                        ..  ";
						Escribir "  ..                                                                        ..  ";
						Escribir "  ..    /¯(¯¯)¯\                                                            ..";
						Escribir "	  ..   /¯/|¯¯|\¯\                                                           ..";
						Escribir "  ..  /¯/¯|¯¯|¯\¯\                                                          ..  ";
						Escribir "  ..      |—-|                     _____     _____     _____                ..  ";
						Escribir "  ..      |—-|                    |     |   |     |   |     |               ..  ";
						Escribir "  ..      |—-|                    |  " a "  |   |  " b "  |   |  " c "  |               .. ";
						Escribir "  ..      |—-|                    |_____|   |_____|   |_____|               ..  ";
						Escribir "  ..      |—-|                                                              ..  ";
						Escribir "  ..      |—-|                                                              ..  ";
						Escribir "  ..      \  /                                                              ..  ";
						Escribir "  ..       \/                                                               ..  ";
						Escribir "  ..       /\                                                               ..  ";
						Escribir "  ..      (__)                                                              ..  ";
						Escribir "  ..                                                                        ..  ";
						Escribir "  ............................................................................  ";
						Escribir "  ............................................................................  ";
						
						Esperar 1 Segundos
						
						
					Fin si
					
				Hasta Que h=mo  
				
				Si tno=0 Entonces
					Borrar Pantalla
					Escribir "";
					Escribir "";
					Escribir "";
					Escribir "  ............................................................................  ";
					Escribir "  .......................  Se Le Acabaron Las Monedas  .......................  ";
					Escribir "  ............................................................................  ";
					Escribir "  ............................................................................  ";
					h=0
					
				Sino
					
				    Borrar Pantalla
					Escribir "";
					Escribir "";
					Escribir "";
					Escribir "  ............................................................................  ";
					Escribir "    Aun Tiene " tno " Monedas Desea Jugarlas si/no (por favor escriba en minuscula)   ";
					Escribir "  ............................................................................  ";
					Leer ww
					mo=tno
			        h=0
					
					yy=tno/3
					Si ww='no' Entonces
						
				     
				       Para oo<-1 Hasta yy Con Paso 1 Hacer
				      
					      Borrar Pantalla
					      Escribir "";
					      Escribir "   ooooo      ooooo      ooooo    ";
					      Escribir "  ooooooo    ooooooo    ooooooo   ";
					      Escribir " ooooooooo  ooooooooo  ooooooooo  ";
					      Escribir "  ooooooo    ooooooo    ooooooo   ";
					      Escribir "   ooooo      ooooo      ooooo    ";
					      Escribir "";
					      Esperar 1 Segundos
					      Borrar Pantalla
					      
					      Escribir "";
					      Escribir "";
					      Escribir "";
					      Escribir "   ooooo      ooooo      ooooo    ";
					      Escribir "  ooooooo    ooooooo    ooooooo   ";
					      Escribir " ooooooooo  ooooooooo  ooooooooo  ";
					      Escribir "  ooooooo    ooooooo    ooooooo   ";
					      
					      Esperar 1 Segundos
					      Borrar Pantalla
					      
					      Escribir "";
					      Escribir "";
					      Escribir "";
					      Escribir "";
					      Escribir "   ooooo      ooooo      ooooo    ";
					      Escribir "  ooooooo    ooooooo    ooooooo   ";
					      Escribir " ooooooooo  ooooooooo  ooooooooo  ";
					      Esperar 1 Segundos
					      Borrar Pantalla
					      
					      Escribir "";
					      Escribir "";
					      Escribir "";
				          Escribir "";
					      Escribir "";
					      Escribir "   ooooo      ooooo      ooooo    ";
					      Escribir "  ooooooo    ooooooo    ooooooo   ";
					      Esperar 1 Segundos
					      Borrar Pantalla
					     
					      Escribir "";
					      Escribir "";
					      Escribir "";
				          Escribir "";
					      Escribir "";
					      Escribir "";	
					      Escribir "   ooooo      ooooo      ooooo    ";
					      Esperar 1 Segundos
					      Borrar Pantalla
					     
					      Escribir "";
					      Escribir "";
					      Escribir "";
				          Escribir "";
					      Escribir "";
					      Escribir "";
					      Escribir "";
					      Esperar 1 Segundos
					      Borrar Pantalla
					      
					   FinPara
				   sino
					   
				   FinSi
				   
				Fin Si
				
			Hasta Que ww<>'si'
			Escribir "  ............................................................................  ";
			Escribir "  .  Desea Volver A Ingresar Monedas si/no (por favor escriba en minuscula)  .  ";
			Escribir "  ............................................................................  ";
			Leer s
		Fin Si 
	Hasta Que s<>'si'
	
FinProceso