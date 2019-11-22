/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package controlatracciones;

/**
 *
 * @author CIDCA
 */
public class Atraccion {
    
    String nombre;
    String lugar;
    Boolean encendido;
    int velocidad;
      
 void encender (){
     if (encendido==true){
        System.out.println("  -------------------------------------------------");
        System.out.println("  --     Esta Atraccion Ya Esta Funcionando      --");    
        System.out.println("  -------------------------------------------------");
     }else{  
       encendido=true;
       System.out.println("  -------------------------------------------------");
       System.out.println("  --La Atraccion" + nombre + " Se ha Encendido--");
       System.out.println("  -------------------------------------------------");
     }

 }

 void apagar (){
     if (encendido==false){
        System.out.println("  -------------------------------------------------");
        System.out.println("  --        Esta Atraccion Ya Esta Apagada       --");
        System.out.println("  -------------------------------------------------");
     }else{  
       encendido=false;
       System.out.println("  -------------------------------------------------");
       System.out.println("  -- La Atraccion" + nombre + " Se ha Apagado --");
       System.out.println("  -------------------------------------------------");
     }

 }
  
 void masrapido(){
      System.out.println("  .................................................");
      System.out.println("  ..  Velocidad Anterior De " + nombre + ": " + velocidad+ "  ..");
      velocidad=velocidad+1;
      System.out.println("  ..   Velocidad Actual De " + nombre + ": " + velocidad+ "   ..");
      System.out.println("  .................................................");
 }
 
 void maslento(){
      System.out.println("  .................................................");
      System.out.println("  ..  Velocidad Anterior De " + nombre + ": " + velocidad+ "  ..");
      velocidad=velocidad-1;
      System.out.println("  ..   Velocidad Actual De " + nombre + ": " + velocidad+ "   ..");
      System.out.println("  .................................................");
      
 }
 
 void estado (){
    
     if (encendido==true){
        System.out.println("  .................................................");
        System.out.println("  ..         La Atraccion Esta Encendida         ..");     
        System.out.println("  ..             Su Velocidad Es: " +velocidad+ "              ..");    
        System.out.println("  .................................................");
     }else{  
        System.out.println("  .................................................");
        System.out.println("  ..          La Atraccion Esta Apagada          ..");     
        System.out.println("  ..             Su Velocidad Es: " +velocidad+ "              ..");    
        System.out.println("  .................................................");    
     }

 }
void nombre (){
     System.out.println("\n\n  /////////////////////////////////////////////////"); 
     System.out.println("  // Bienbenido A la Atraccion: " +nombre+  " //");    
     System.out.println("  // Situada En El: " +lugar+ "        //");    
     System.out.println("  /////////////////////////////////////////////////"); 
}
}

 