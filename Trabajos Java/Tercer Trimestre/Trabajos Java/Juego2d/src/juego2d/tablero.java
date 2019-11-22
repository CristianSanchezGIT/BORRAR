/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package juego2d;


import java.awt.Color;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.Image;
import java.awt.Toolkit;
import static java.lang.Thread.sleep;
import static javax.management.Query.gt;
import javax.swing.*;
import javax.swing.ImageIcon;
import javax.swing.JFrame;
import javax.swing.JPanel;

/**
 *
 * @author CIDCA
 */
public class tablero extends JPanel implements Runnable{
  private Image imagen;
  private Image imagen1;
  private Image ima1;
  private Thread hilo;
  private int x,y;
  private final int DELAY=5;
    
  
public tablero(){
  setBackground(Color.WHITE);
  setDoubleBuffered(true);
  imagen = new ImageIcon(this.getClass().getResource("/imagen/imagen.gif")).getImage();
  imagen1 = new ImageIcon(this.getClass().getResource("/imagen/imagen1.gif")).getImage();
  ima1 = new ImageIcon(this.getClass().getResource("/imagen/ima1.jpg")).getImage();
  x=70;
  y=200;
}  
  
  @Override   
 public void addNotify(){
     super.addNotify();
    hilo=new Thread(this);
    hilo.start();
 }
   @Override   
  public void paint(Graphics g){
      super.paint(g);
      Graphics2D g2=(Graphics2D)g;
      g2.drawImage(imagen, 0,0, null);
      g2.drawImage(imagen1, x,y, null);
      g2.drawImage(ima1, x,x, null);   
      Toolkit.getDefaultToolkit().sync();
      g.dispose();
      
  }
 
  public void ciclo(){
      x += 2; //Esta Es La Velocidad e La Imagen
      if ( x == (500-70)){
      x=-70;
  } 
  }
  
  @Override  
  public void run(){
      while(true){
          ciclo();
          repaint(); 
          try{
              Thread.sleep(DELAY);
          }catch(InterruptedException err){
              System.out.println(err);
          }
      }
  }
}
