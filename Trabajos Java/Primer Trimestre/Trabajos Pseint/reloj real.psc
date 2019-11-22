Proceso reloj_dijital 
	
	Repetir
		digito=0
		
		Escribir "Ingrese Las Horas Entre 0 y 23: (100 para finalizar)"
		Leer n
		
	 Mientras n<24 Hacer
			
		 cont <- 0 
		 aux <- n
		 Mientras aux>0 hacer 
			cont <- cont + 1 
			aux <- trunc(aux/10) 
		FinMientras
		aux<-n
		Para i<-1 hasta cont Hacer
			b=digito;
			pot <- 10^(cont-i) 
			digito <- trunc (aux / pot) 
			aux <- aux - digito*pot 
			a=digito;
			
		Fin Para	
		
	  terible=b;
	  nombre=a;
	  horas=0
	  min=0
	  seg=0
	  cosa=0
	  
	 	
	  Mientras terible<2 Hacer
		Mientras nombre<10  Hacer
			Mientras cosa<6  Hacer
		        Mientras horas<10 Hacer 
			        Mientras min<6 Hacer 
						Mientras seg<10 Hacer 
							
					     Borrar Pantalla 
						 
					     Escribir "";
					     Escribir "";
					     Escribir "                      --------------------------------------";
					     Escribir "";  
					     Escribir "                      °°°°°   °°°°°  °      °°°°°°   °°°°°°° ";
					     Escribir "                      °   °   °      °      °    °      °    ";
					     Escribir "                      °°°°°   °      °      °    °      °    ";
					     Escribir "                      °°      °°°°   °      °    °      °    ";
					     Escribir "                      ° °     °      °      °    °      °    ";
					     Escribir "                      °  °    °      °      °    °      °    ";
					     Escribir "                      °   °   °°°°°  °°°°°  °°°°°°  °°°°°    ";
					     Escribir "";
					     Escribir "           [°]                                                    [°]     ";
					     Escribir "         [°   °]          °°°°°°°°°°°°°°°°°°°°°°°°°°°°°         [°   °]    "; 
					     Escribir "        [°     °]         °       °         °         °        [°     °]   "; 
					     Escribir "       [°       °]        ° Horas ° Minutos ° Segundos°       [°       °]  ";
					     Escribir "        [°     °]         °       °         °         °        [°     °]   ";  
					     Escribir "         [°   °]          °°°°°°°°°°°°°°°°°°°°°°°°°°°°°         [°   °]    ";
					     Escribir "           [°]  ´         °       °         °         °        ´  [°]     "; 
					     Escribir "                          °  ",terible,"" nombre,"   °   ",cosa,"" horas,"    °    ",min,"",seg,"   ° "; 
					     Escribir "                  ´       °       °         °         °       ´            "; 
					     Escribir "                   ´      °°°°°°°°°°°°°°°°°°°°°°°°°°°°°      ´             ";
					     Escribir "                    ´  ´                                 ´  ´              ";
						 
						 
					        seg<-seg+1  
					       Esperar 0.1 Milisegundos
				       FinMientras 
				       min<-min+1 
					   seg<-0 
					   
			       FinMientras 
			       horas<-horas+1 
			       min<-0 
		       FinMientras 
		       cosa<-cosa+1 
			   horas=0
	       FinMientras
	       nombre=nombre+1
	       cosa<-0 
		 
		FinMientras
		terible=terible+1
	    nombre=0
		
	  FinMientras
	  
	  
	  horas=0
	  min=0
	  seg=0
	  cosa=0
	  

		  
		  Mientras terible<3 Hacer
			  Mientras nombre<4  Hacer
				  Mientras cosa<6  Hacer
					  Mientras horas<10 Hacer 
						  Mientras min<6 Hacer 
							  Mientras seg<10 Hacer 
								  
								  Borrar Pantalla 
								  
								  Escribir "";
								  Escribir "";
								  Escribir "                      --------------------------------------";
								  Escribir "";  
								  Escribir "                      °°°°°   °°°°°  °      °°°°°°   °°°°°°° ";
								  Escribir "                      °   °   °      °      °    °      °    ";
								  Escribir "                      °°°°°   °      °      °    °      °    ";
								  Escribir "                      °°      °°°°   °      °    °      °    ";
								  Escribir "                      ° °     °      °      °    °      °    ";
								  Escribir "                      °  °    °      °      °    °      °    ";
								  Escribir "                      °   °   °°°°°  °°°°°  °°°°°°  °°°°°    ";
								  Escribir "";
								  Escribir "           [°]                                                    [°]     ";
								  Escribir "         [°   °]          °°°°°°°°°°°°°°°°°°°°°°°°°°°°°         [°   °]    "; 
								  Escribir "        [°     °]         °       °         °         °        [°     °]   "; 
								  Escribir "       [°       °]        ° Horas ° Minutos ° Segundos°       [°       °]  ";
								  Escribir "        [°     °]         °       °         °         °        [°     °]   ";  
								  Escribir "         [°   °]          °°°°°°°°°°°°°°°°°°°°°°°°°°°°°         [°   °]    ";
								  Escribir "           [°]  ´         °       °         °         °        ´  [°]     "; 
								  Escribir "                          °  ",terible,"" nombre,"   °   ",cosa,"" horas,"    °    ",min,"",seg,"   ° "; 
								  Escribir "                  ´       °       °         °         °       ´            "; 
								  Escribir "                   ´      °°°°°°°°°°°°°°°°°°°°°°°°°°°°°      ´             ";
								  Escribir "                    ´  ´                                 ´  ´              ";
								  
								  
								  seg<-seg+1  
								  Esperar 0.1 Milisegundos
							  FinMientras 
							  min<-min+1 
							  seg<-0 
							  
						  FinMientras 
						  horas<-horas+1 
						  min<-0 
					  FinMientras 
					  cosa<-cosa+1 
					  horas=0
				  FinMientras
				  nombre=nombre+1
				  cosa<-0 
				  
			  FinMientras
			  terible=terible+1
			  nombre=0
			  
		  FinMientras
		   n=25
	   FinMientras
	   
 Hasta Que n=100 
FinProceso