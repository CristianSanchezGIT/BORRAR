/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package redsocial;

import java.awt.*;
import java.applet.*;

public class superior extends Applet{

public void paint(Graphics g)
{
   
 setBackground(Color.black);   
 
 g.setColor(Color.white);
 g.drawString("ask",100,30);
 g.setColor(Color.green);
 g.drawString(".fm",120,30);
 
 g.setColor(Color.white);
 g.drawString("¿Ya tienes una cuenta?",450,30);
 
  g.setColor(Color.blue);
  g.drawRect(590,15, 60, 30);
  g.fillRect(590,15, 60, 30);
   g.setColor(Color.white);
  g.drawString("Entrar",605,35);

}
}
