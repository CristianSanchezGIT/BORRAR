Proceso resta_n_numeros
	Repetir
		
	   Escribir "Cuantos Numeros Desea Restar"
	   leer canrestados
	   p=0
	   Para u<-1 Hasta canrestados Con Paso 1 Hacer
		   Si p=0 Entonces
			   Escribir "Escriba el numero 1"
			   leer numero
			   p=numero
			   l=numero
		   Sino
			   Escribir "Escriba el numero"
			  leer numero
			  l=l-numero
		   Fin Si
	   Fin Para
	   Escribir "la Resta Es Igual A " l
	   Escribir "desea reiniciar la resta si/no"; 
	   Leer Z;
	   borrar pantalla
	Hasta Que Z<>'si' 
FinProceso
