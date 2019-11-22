/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package ejemploguia2;

/**
 *
 * @author SALA_111_08
 */


import java.awt.BorderLayout;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JTextField;
import java.awt.Color;
import javax.swing.*;

public class Ejemploguia2 extends JFrame {

    /**
     * @param args the command line arguments
     */
    
    JPanel panel_principal;
    JPanel panel_botones;
    JTextField caja;
    JButton boton[];
    double op1=0, op2=0;
    String operacion="";
    boolean nueva=true;
   
    Ejemploguia2 (String nombre)
{ super(nombre);
       

}
      public Ejemploguia2(){
        
        
      //Titulo
      setTitle("Saludo");
      //Tamaño
      setSize(700,600);
      //Dimencionable O No
      setResizable(false);
      //Location
      setLocationRelativeTo(null);
      //Salir Al Cliklear KLa Cruz
      setDefaultCloseOperation(EXIT_ON_CLOSE);
      //Icono De La Calculadora
      setVisible(true);
      milo();
      }
      
    public void milo(){
       //Interfaz Y Funcionalidad
       //Creamos Panel Pincipal Con Layout BorderLayout 
       panel_principal = new JPanel();
       panel_principal.setLayout(new BorderLayout());
       
       //En El Norte Ira La Caja Del Texto
       caja = new JTextField();
       panel_principal.add("North",caja);
       
       
       //En El Centro Ira El Panel De Botones
       panel_botones = new JPanel();
       
       //El Gridlayout Recibe Como Parametros:
       //Filas, Columnas, Espaciado Entre Filas,
       //Espaciado Entre Columnas
       panel_botones.setLayout(new GridLayout(1,2,8,8));
       agregarbotones();
       panel_principal.add("Center",panel_botones);
       
       //Agregamos Todo El Contenido Que Acabamos De Hacer En
       //PANEL_PRINCIPAL A EL PANEL DE FORMULARIO
       getContentPane().add(panel_principal); 
    }
    
        public void agregarbotones(){
        
        
           boton = new JButton[2];
        
      //Inicializamos Los Botones
      boton[0]=new JButton("1");
      boton[1]=new JButton("2");
      
       //Agregamos Los Botones Al Panel Botones
      for(int i=0; i<2; i++){
        panel_botones.add(boton[i]);
      }
      boton[0].addActionListener(new ActionListener(){
   @Override
   public void actionPerformed(ActionEvent evt){
       caja.setText("Hola");
   }
   });
      
      boton[1].addActionListener(new ActionListener(){
   @Override
   public void actionPerformed(ActionEvent evt){   
       caja.setText("Adios");
   }
   });
      
      
    }
    
    public static void main(String[] args) {
        // TODO code application logic here
        
        new Ejemploguia2();
    }
    
}
