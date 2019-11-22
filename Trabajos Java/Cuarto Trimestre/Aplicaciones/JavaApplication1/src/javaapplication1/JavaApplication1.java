/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication1;

import java.awt.*;
import java.applet.*;


public class JavaApplication1 extends Applet{
    
    private Image milo; 
    
        public void paint(Graphics g)
{
    

    
    
    
setBackground(Color.white);
    


g.setColor (Color.GRAY);
g.drawRect(0, 0, 900, 400);
g.fillRect(0, 0, 900, 800);



g.setColor (Color.blue);
g.drawRect(700, 30, 100,100);
g.fillRect(700, 30, 100, 100);



g.setColor (Color.white);
g.drawOval(700, 30, 100,100);
g.fillOval(700, 30, 100, 100);

g.setFont(new Font("Blackadder ITC",Font.BOLD + Font.ITALIC,55));
g.drawString("Instagram", 340, 260);

g.setColor (Color.blue);
g.drawRect(0, 0, 400, 200);
g.fillRect(0, 0, 400, 200);


g.setColor (Color.green);
g.drawRect(0, 0, 300, 200);
g.fillRect(0, 0, 300, 200);  

 
g.setColor (Color.yellow);
g.drawRect(0, 0, 200, 200);
g.fillRect(0, 0, 200, 200);


g.setColor (Color.red);
g.drawRect(0, 0, 100, 200);
g.fillRect(0, 0, 100, 200);

g.setColor(Color.pink);
g.drawRect(0, 400, 900,400);
g.fillRect(0, 400, 900, 400); 



 g.setColor(Color.black);
g.drawOval(300, 300, 300,300);
g.fillOval(300, 300, 300, 300);
   
g.setColor(Color.white);
g.drawOval(400, 400, 100,100);
g.fillOval(400, 400, 100, 100);

   milo= getImage(getDocumentBase(),"milo.jpg");
 g.drawImage(milo,250,625,400,175, this);

 
 
 //Cuadro blanco De Ingreso
  g.setColor(Color.white);
  g.drawRect(700, 80, 180, 265);
  g.fillRect(700, 80, 180, 265);
  
  g.setColor(Color.black);
   
  g.drawRect(720, 90, 140, 40);
  g.drawString("Nombre de usuario",730,110);
  g.drawRect(720, 130, 140, 40);
  g.drawString("Contraseña",730,150);
  
  g.setColor(Color.green);
  g.drawRect(720,180, 140, 30);//CUADRO VERDE
  g.fillRect(720,180, 140, 30);
  
  g.setColor(Color.white);
  g.drawString("Iniciar Sesion",750,200);
  
  g.setColor(Color.gray);
  g.drawString("Iniciar Sesion Con ",745,240);
  
   g.setColor(Color.black);
  g.drawRect(740,250, 30, 30);
  g.fillRect(740,250, 30, 30);
  
    g.setColor(Color.blue);
  g.drawRect(780,250, 30, 30);
  g.fillRect(780,250, 30, 30);
  
    g.setColor(Color.black);
  g.drawRect(820,250, 30, 30);
  g.fillRect(820,250, 30, 30);
}

}




