Proceso SIN_TITULO
    Repetir
        Escribir 'Escriba 3 Numeros Diferentes';
        Leer �,B,C;
    Hasta Que �<>B Y B<>C Y �<>C
    Si �>B Y �>C Entonces
        Si B>C Entonces
            Escribir 'El Mayor Es: ',�;
            Escribir 'El Del Medio Es: ',B;
            Escribir '�l Menor Es: ',C;
        Sino
            Escribir 'El Mayor Es: ',�;
            Escribir 'El Del Medio Es: ',C;
            Escribir '�l Menor Es: ',B;
        FinSi
    Sino
        Si B>� Y B>C Entonces
            Si �>C Entonces
                Escribir 'El Mayor Es: ',B;
                Escribir 'El Del Medio Es: ',�;
                Escribir '�l Menor Es: ',C;
            Sino
                Escribir 'El Mayor Es: ',B;
                Escribir 'El Del Medio Es: ',C;
                Escribir '�l Menor Es: ',�;
            FinSi
        Sino
            Si �>B Entonces
                Escribir 'El Mayor Es: ',C;
                Escribir 'El Del Medio Es: ',�;
                Escribir '�l Menor Es: ',B;
            Sino
                Escribir 'El Mayor Es: ',C;
                Escribir 'El Del Medio Es: ',B;
                Escribir '�l Menor Es: ',�;
            FinSi
        FinSi
    FinSi
FinProceso
