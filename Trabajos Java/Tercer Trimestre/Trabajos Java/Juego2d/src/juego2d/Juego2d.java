/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package juego2d;


import java.awt.Color;
import javax.swing.*;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;



/**
 *
 * @author CIDCA
 */
public class Juego2d extends JFrame{
     
public Juego2d(){
    
    //Titulo
    setTitle("Como Crear Un Juuego 2D Con Java - La Base 01");
    //Cerrar Al Clikear En La Cruz
    setDefaultCloseOperation(EXIT_ON_CLOSE);
    //Tamaña De La Venttana
    setSize(500,500);
    //Localizacion De la Ventana (Centro)
    setLocationRelativeTo(null);
    //No Se Redimenciona La Ventana
    setResizable(false);
    //Objeto Tablero
    add(new tablero());
    //Hacemos Visible La Ventana
    setVisible(true);
    
}

    public static void main(String[] args) {
        new Juego2d();
        // TODO code application logic here
    }
    
}
