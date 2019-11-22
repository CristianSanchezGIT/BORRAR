Proceso SIN_TITULO
    Repetir
        Escribir 'Escriba 3 Numeros Diferentes';
        Leer Á,B,C;
    Hasta Que Á<>B Y B<>C Y Á<>C
    Si Á>B Y Á>C Entonces
        Si B>C Entonces
            Escribir 'El Mayor Es: ',Á;
            Escribir 'El Del Medio Es: ',B;
            Escribir 'Él Menor Es: ',C;
        Sino
            Escribir 'El Mayor Es: ',Á;
            Escribir 'El Del Medio Es: ',C;
            Escribir 'Él Menor Es: ',B;
        FinSi
    Sino
        Si B>Á Y B>C Entonces
            Si Á>C Entonces
                Escribir 'El Mayor Es: ',B;
                Escribir 'El Del Medio Es: ',Á;
                Escribir 'Él Menor Es: ',C;
            Sino
                Escribir 'El Mayor Es: ',B;
                Escribir 'El Del Medio Es: ',C;
                Escribir 'Él Menor Es: ',Á;
            FinSi
        Sino
            Si Á>B Entonces
                Escribir 'El Mayor Es: ',C;
                Escribir 'El Del Medio Es: ',Á;
                Escribir 'Él Menor Es: ',B;
            Sino
                Escribir 'El Mayor Es: ',C;
                Escribir 'El Del Medio Es: ',B;
                Escribir 'Él Menor Es: ',Á;
            FinSi
        FinSi
    FinSi
FinProceso
