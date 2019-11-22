/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package redsocial;

import java.awt.*;
import java.applet.*;


public class Redsocial extends Applet{

public void paint(Graphics g)
{
    
setBackground(Color.BLUE);

g.setColor(Color.white);
 g.drawString("Preguntar y responder",100,100);
 
  g.setColor(Color.green);
  g.drawRect(100,110, 110, 40);//CUADRO VERDE
  g.fillRect(100,110, 110, 40);
  
  g.setColor(Color.white);
  g.drawString("Crear una cuenta",110,130);  
  
  
  
  //Cuadro blanco De Ingreso
  g.setColor(Color.white);
  g.drawRect(500, 20, 180, 260);
  g.fillRect(500, 20, 180, 265);
  
  g.setColor(Color.black);
   
  g.drawRect(520, 30, 140, 40);
  g.drawString("Nombre de usuario",530,50);
  g.drawRect(520, 70, 140, 40);
  g.drawString("Contraseña",530,90);
  
  g.setColor(Color.green);
  g.drawRect(520,120, 140, 30);//CUADRO VERDE
  g.fillRect(520,120, 140, 30);
  
  g.setColor(Color.white);
  g.drawString("Iniciar Sesion",530,140);
  
  g.setColor(Color.gray);
  g.drawString("Iniciar Sesion Con ",545,190);
  
   g.setColor(Color.black);
  g.drawRect(540,200, 30, 30);
  g.fillRect(540,200, 30, 30);
  
    g.setColor(Color.blue);
  g.drawRect(580,200, 30, 30);
  g.fillRect(580,200, 30, 30);
  
    g.setColor(Color.black);
  g.drawRect(620,200, 30, 30);
  g.fillRect(620,200, 30, 30);
  
  
  //olvidar contraseña
  
  g.setColor(Color.blue);
  g.drawString("¿ Olvidaste tu contraseña o tu ",505,260);
  g.drawString(" nombre de Usuario?  ",530,280);
  //parte De Abajo
  g.drawString("Mira quien esta aqui",100,400);
  g.drawLine(110,420, 130, 405);
  g.drawLine(150,420, 130, 405);
  
  g.setColor(Color.white);
  g.drawOval(600, 400, 20, 10);
  g.fillOval(600, 400, 20, 10);
  
}
}
