Proceso SIN_TITULO
    Repetir
        Escribir 'Escriba 3 numeros';
        Leer �,B,C;
    Hasta Que �<>B Y B<>C 
    Si �>B Y �>C Entonces
        Si B>C Entonces
            Escribir � 'ES EL MAYOR';
            Escribir B '�S EL DEL MEDIO';
            Escribir C '�S EL MENOR';
        Sino
            Escribir � 'ES EL MAYOR';
            Escribir C '�S EL DEL MEDIO';
            Escribir B '�S EL MENOR';
			
        FinSi
    Sino
        Si B>� Y B>C Entonces
            Si �>C Entonces
                Escribir B 'ES EL MAYOR';
                Escribir � '�S EL DEL MEDIO';
                Escribir C '�S EL MENOR';
				
            Sino
                Escribir B 'ES EL MAYOR';
                Escribir C '�S EL DEL MEDIO';
                Escribir � '�S EL MENOR';
				
            FinSi
        Sino
            Si �>B Entonces
                Escribir C 'ES EL MAYOR';
                Escribir � '�S EL DEL MEDIO';
                Escribir B '�S EL MENOR:';
            Sino
                Escribir C 'ES EL MAYOR';
                Escribir B '�S EL DEL MEDIO';
                Escribir � '�S EL MENOR';
            FinSi
        FinSi
    FinSi
FinProceso
