/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package aritmeticafacil;
import java.util.Scanner;

/**
 *
 * @author Nueva Cuenta
 */
public class Aritmeticafacil {

    /**
     * @param args the command line arguments
     */
    
    public static void main(String[] args) {
        
        // Instancia De Scanner
        Scanner in=new Scanner(System.in);
        
        int numero1, numero2;
	int op;
	int re=0;
	float resultado;

	do{
            
	System.out.println("\n\t Seleccione El Numero Que Desee");
        System.out.println("\n-------------------------");
        System.out.println("|  1 Para Sumar         |");
        System.out.println("|  2 Para Restar        |");
        System.out.println("|  3 Para Multiplicar   |");
        System.out.println("|  4 Para Dividir       |");
        System.out.println("|  0 Para Salir         |");
        System.out.println("-------------------------");
	op=in.nextInt();
	
	switch(op){
	  case 1:

		  System.out.println("\t SUMA");
                  System.out.println("\n  --------------------");
                  System.out.println("  Ingrese El Numero 1   ");
                  System.out.println("  --------------------  ");
		  numero1=in.nextInt();
                  System.out.println("  --------------------  ");
                  System.out.println("  Ingrese El Numero 2   ");
                  System.out.println("  --------------------  ");
		  numero2=in.nextInt();
                  
		  resultado=numero1+numero2;
                  System.out.println("\n  ...........");
                  System.out.println("   Resultado");
                  System.out.println(numero1+ " + "+numero2+" = " +resultado);
            
	  break;
	  case 2:
                
		  System.out.println("\t Resta");
                  System.out.println("\n  --------------------");
                  System.out.println("  Ingrese El Numero 1   ");
                  System.out.println("  --------------------  ");
		  numero1=in.nextInt();
                  System.out.println("  --------------------  ");
                  System.out.println("  Ingrese El Numero 2   ");
                  System.out.println("  --------------------  ");
		  numero2=in.nextInt();
                  
		  resultado=numero1-numero2;
                  System.out.println("\n  ...........");
                  System.out.println("   Resultado");
                  System.out.println(numero1+ " - "+numero2+" = " +resultado);
	  break;
	  case 3:
                                
		  System.out.println("\t Multiplicacion");
                  System.out.println("\n  --------------------");
                  System.out.println("  Ingrese El Numero 1   ");
                  System.out.println("  --------------------  ");
		  numero1=in.nextInt();
                  System.out.println("  --------------------  ");
                  System.out.println("  Ingrese El Numero 2   ");
                  System.out.println("  --------------------  ");
		  numero2=in.nextInt();
                  
		  resultado=numero1*numero2;
                  System.out.println("\n  ...........");
                  System.out.println("   Resultado");
                  System.out.println(numero1+ " * "+numero2+" = " +resultado);
	  break;
	  case 4:
                  
		  System.out.println("\t Divicion");
                  System.out.println("\n  --------------------");
                  System.out.println("  Ingrese El Numero 1   ");
                  System.out.println("  --------------------  ");
		  numero1=in.nextInt();
                  System.out.println("  --------------------  ");
                  System.out.println("  Ingrese El Numero 2   ");
                  System.out.println("  --------------------  ");
		  numero2=in.nextInt();
                  
		  resultado=numero1/numero2;
                  System.out.println("\n  ...........");
                  System.out.println("   Resultado");
                  System.out.println(numero1+ " / "+numero2+" = " +resultado);
	  break;
	  case 0:
		  re=1;
	  break;
	  default: 
                 System.out.println(".................................");
		 System.out.println("..   Esta Opcion Es Invalida   ..");
                 System.out.println("..    Intentelo De Nuevo XD    ..");
	         System.out.println(".................................");
        }
	
	}while(re==0);
    }
}
