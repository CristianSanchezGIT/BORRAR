/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package dibujo;

import java.awt.*;
import java.applet.*;


public class Dibujo extends Applet{

 public void paint(Graphics g)
{
  
 int Hola=42;
 // Valor 0(Casa)
 // Valor 1(Cubo)
 // Valor 2(Cilindro)
 // Otro Numero Las 3 Figuras
 
 setBackground(Color.gray);  
 
 if(Hola == 0){
//CASA
 g.setColor(Color.white);
g.drawLine(175,10, 100, 130);//lINEA 1 DE LA CASA
g.drawLine(175,10, 250, 130);// LINEA 2 DE LA CASA

g.setColor(Color.red);
g.drawRect(100,130, 150, 150);//CUADRADO DE LA CASA
g.fillRect(100,130, 150, 150);

g.setColor(Color.white);
g.drawRect(100,130, 40, 40);//VENTANA IZQUIERDA
g.drawRect(210,130, 40, 40);//VENTANA DERECHA
g.drawRect(150,200, 50, 80);//PUERTA
 }else{
     if(Hola == 1){
//CUBO
g.setColor(Color.blue);
g.drawRect(400,130, 100, 100);//CUADRADO DE ATRAS
g.drawLine(400,130, 450, 180);//LINEA SUPERIOR IZQUIERDA
g.drawLine(400,230, 450, 280);//LINEA SUPERIOR DERECHA
g.drawRect(450,180, 100, 100);//CUADRADO DE ADELANTE
g.drawLine(500,130, 550, 180);//LINEA INFERIOR IZQUIERDA
g.drawLine(500,230, 550, 280);//LINEA INFERIOR DERECHA

     }else{
        if(Hola == 2){ 
//CILINDRO
g.setColor(Color.green);
g.drawOval(100, 350, 100, 50);//CIRCULO SUPERIOR
g.drawLine(100 ,375, 100, 475);//LINEA IZQUIERDA
g.drawLine(145 ,350, 145, 450);//LINEA CENTRO ATRAS
g.drawLine(155 ,400, 155, 500);//LINEA CENTRO ADELANTE
g.drawLine(200 ,375, 200, 475);//LINEA DERECHA
g.drawOval(100, 450, 100, 50);//CIRCULO INFERIOR

        }else{
//CASA
 g.setColor(Color.white);
g.drawLine(175,10, 100, 130);//lINEA 1 DE LA CASA
g.drawLine(175,10, 250, 130);// LINEA 2 DE LA CASA

g.setColor(Color.red);
g.drawRect(100,130, 150, 150);//CUADRADO DE LA CASA
g.fillRect(100,130, 150, 150);

g.setColor(Color.white);
g.drawRect(100,130, 40, 40);//VENTANA IZQUIERDA
g.drawRect(210,130, 40, 40);//VENTANA DERECHA
g.drawRect(150,200, 50, 80);//PUERTA


//CUBO
g.setColor(Color.blue);
g.drawRect(400,130, 100, 100);//CUADRADO DE ATRAS
g.drawLine(400,130, 450, 180);//LINEA SUPERIOR IZQUIERDA
g.drawLine(400,230, 450, 280);//LINEA SUPERIOR DERECHA
g.drawRect(450,180, 100, 100);//CUADRADO DE ADELANTE
g.drawLine(500,130, 550, 180);//LINEA INFERIOR IZQUIERDA
g.drawLine(500,230, 550, 280);//LINEA INFERIOR DERECHA


g.setColor(Color.green);
g.drawOval(100, 350, 100, 50);//CIRCULO SUPERIOR
g.drawLine(100 ,375, 100, 475);//LINEA IZQUIERDA
g.drawLine(145 ,350, 145, 450);//LINEA CENTRO ATRAS
g.drawLine(155 ,400, 155, 500);//LINEA CENTRO ADELANTE
g.drawLine(200 ,375, 200, 475);//LINEA DERECHA
g.drawOval(100, 450, 100, 50);//CIRCULO INFERIOR

        }
     }
 }
}
}
