Proceso reloj_dijital 
	
     horas=0
     min=0
	 seg=0


	Mientras horas<25 Hacer 
		Mientras min<60 Hacer 
			Mientras seg<60 Hacer 
				Borrar Pantalla 
				
				Escribir "";
				
				Escribir "                                                            ";
				Escribir "                    °°°°°°°°°°°°°°°°°°°°°°°°°°°°°           "; 
				Escribir "                    °       °         °         °           "; 
				Escribir "                    ° Horas ° Minutos ° Segundos°           ";
				Escribir "                    °       °         °         °           ";  
				Escribir "                    °°°°°°°°°°°°°°°°°°°°°°°°°°°°°           ";
				Escribir "                    °       °         °         °          "; 
				Escribir "                        " horas,"        ",min,"         ",seg,"     "; 
				Escribir "                    °       °         °         °                    "; 
				Escribir "                    °°°°°°°°°°°°°°°°°°°°°°°°°°°°°                    ";
				Escribir "                                                                     ";
				
				seg<-seg+1  
				Esperar 1 segundos
			FinMientras 
			min<-min+1 
			seg<-0 
			Escribir "";
			Escribir "                       -----------------------------------    ";
			Escribir "                        ¡¡¡ A Psado Un Dia¡¡¡                 ";
			Escribir "                       -----------------------------------    ";
			Escribir "                              ¡¡¡ El Reloj A Finalizado¡¡¡    ";
			Escribir "                       -----------------------------------    ";
		FinMientras 
		horas<-horas+1 
		min<-0 
	FinMientras 
	horas<-0 
FinProceso