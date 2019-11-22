

package juego2d;

import java.awt.Color;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.Image;
import java.awt.Toolkit;
import static java.lang.Thread.sleep;
import static javax.management.Query.gt;
import javax.swing.ImageIcon;
import javax.swing.JPanel;


public class tablero extends JPanel implements Runnable {
    private Image background;
    private Image angrybird;
    private Thread hilo;
    private int x,y;
    private final int DELAY=5;
    private long sleep;
    /*construir panel 
  
    */
    public tablero(){
     setBackground(Color.WHITE);
     setDoubleBuffered(true);
     background = new ImageIcon(this.getClass().getResource("/img/background.jpg")).getImage();   
     angrybird = new ImageIcon(this.getClass().getResource("/img/angrybird.jpg")).getImage();
    x=70;
    y=200;
    
     //inicializaciones
     
    }
    
    @Override
    public void addNotify() {
        super.addNotify();
        //
        hilo= new Thread(this);
        hilo.start();
    }

    /**
     *
     * @param g
     */
    @Override
    public void paint(Graphics g){
        super.paint(g);
        g2.drawImage( background, 0 , 0 , null);
        g2.drawImage(angrybird, x , y , null);
        Toolkit.getDefaultToolkit().sync();
        g.dispose();
        
        //
        //
        g.dispose();

        
    }
    
    //
    public void ciclo(){
        x += 1;
        y += 1;
               
    }
    //
    @Override
    public void run(){
        while(true){
            ciclo();
            repaint();
            try{
                Thread.sleep(sleep);
            }catch(InterruptedException err){
                System.out.println(err);
            }
        }
    }
    
}
