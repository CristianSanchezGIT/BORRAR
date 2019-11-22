/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package formass;

/**
 *
 * @author Administrador
 */
import java.awt.*;
import java.applet.*;

public class Formass extends Applet {

 public void paint(Graphics g)
{
g.drawString("Hola", 100, 100);
g.drawLine(10,10, 100, 100);
g.drawRect(0, 0, 150, 150);
g.drawOval(100, 100, 100, 100);
}
}
