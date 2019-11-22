/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication1;

import java.awt.*;
import java.applet.*;


public class JavaApplication1 extends Applet{
    
        public void paint(Graphics g)
{
setBackground(Color.BLUE);
g.drawString("Hola", 100, 100);


g.drawOval(100, 100, 100, 100);
g.drawOval(100, 100, 100, 200);
g.drawRect(0, 0, 100, 450);
g.drawRect(0, 0, 200, 420);
g.drawRect(0, 0, 200, 440);
}

}




