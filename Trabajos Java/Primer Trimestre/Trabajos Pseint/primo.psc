Proceso determinar_numeros_primos
Repetir	
	Escribir "Cuantos Numeros Primos Quiere Mostrar"
	Leer primos
	
	Escribir "1" 
	contador = 1
	sos= 3           
	Mientras contador<primos Hacer
		es_primo <- Verdadero 
		Para i<-3 hasta rc(sos) con paso 2 Hacer 
			Si sos MOD i = 0 entonces 
				es_primo <- Falso  
			FinSi
		FinPara
		
		Si es_primo Entonces
			contador <- contador + 1
			Escribir sos
		FinSi
		sos <- sos + 2 
	FinMientras
	Escribir "Desean volver al inicio si/no(Por Favor Escriba En Minuscula)"
	Leer continuar
Hasta Que continuar<>'si'
FinProceso