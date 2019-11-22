
package juego2d;

import java.awt.PopupMenu;
import javax.swing.JFrame;


public class Juego2d extends JFrame {
    
   public  Juego2d(){
       //titulo
       setTitle("Como Crear un juego  en  2d con Java- la base 01 ");
       //CERRAR AL CLICKEAR EN LA CRUZ 
       setDefaultCloseOperation(EXIT_ON_CLOSE);
       //TAMAÑO DE  VENTANA 
       setSize(500,300);
       //LOCACION DE LA VENTANA
       setLocationRelativeTo(null);
       //NO SE REDIMENCIONE LA VENTANA
       setResizable(false);
       //AGREGAR TABLERO
       add(new tablero());
       setVisible(true);
   }
//metodo principal
   


   public static void main(String[] args) {
        new Juego2d();
        // TODO code application logic here
    }
   }
