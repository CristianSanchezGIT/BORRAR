Proceso SIN_TITULO
    Repetir
        Escribir 'Escriba 3 numeros';
        Leer Á,B,C;
    Hasta Que Á<>B Y B<>C 
    Si Á>B Y Á>C Entonces
        Si B>C Entonces
            Escribir Á 'ES EL MAYOR';
            Escribir B 'ÉS EL DEL MEDIO';
            Escribir C 'ÉS EL MENOR';
        Sino
            Escribir Á 'ES EL MAYOR';
            Escribir C 'ÉS EL DEL MEDIO';
            Escribir B 'ÉS EL MENOR';
			
        FinSi
    Sino
        Si B>Á Y B>C Entonces
            Si Á>C Entonces
                Escribir B 'ES EL MAYOR';
                Escribir Á 'ÉS EL DEL MEDIO';
                Escribir C 'ÉS EL MENOR';
				
            Sino
                Escribir B 'ES EL MAYOR';
                Escribir C 'ÉS EL DEL MEDIO';
                Escribir Á 'ÉS EL MENOR';
				
            FinSi
        Sino
            Si Á>B Entonces
                Escribir C 'ES EL MAYOR';
                Escribir Á 'ÉS EL DEL MEDIO';
                Escribir B 'ÉS EL MENOR:';
            Sino
                Escribir C 'ES EL MAYOR';
                Escribir B 'ÉS EL DEL MEDIO';
                Escribir Á 'ÉS EL MENOR';
            FinSi
        FinSi
    FinSi
FinProceso
