Proceso reloj_10_minutos
	
Escribir "Desea Iniciar El Reloj si/no?  (Por Favor Escriba En Minuscula)"; 
Leer res; 
Mientras res="si" Hacer 
	    min=0
	    seg=0
		Mientras min<10 Hacer 
			Mientras seg<60 Hacer 
				Escribir min,"m - ",seg,"s "; 
				
				seg<-seg+1 
				Esperar 0.1 segundos
			FinMientras 
			min<-min+1 
			seg<-1 
			Escribir min " minutos";
			Esperar 1 segundos
			Borrar Pantalla
		FinMientras 
		 
	Escribir "Desea Iniciar De Nuevo El Reloj si/no?  (Por Favor Escriba En Minuscula)"; 
	Leer res; 
FinMientras 
FinProceso 