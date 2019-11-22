/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package applet.web;

import java.awt.*;
import java.applet.*;



public class AppletWeb extends Applet{
 public void paint(Graphics g)
{
    
  setBackground(Color.yellow);  
  
  
g.drawString("Mi Applet", 100, 100);
g.drawLine(10,10, 200, 200);
g.drawRect(0, 0, 300, 300);
g.drawOval(200, 200, 200, 200);
}

}
