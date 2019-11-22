/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package calculadoracompleta;

/**
 *
 * @author CIDCA
 */

import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JTextField;
     
public class Calculadoracompleta extends JFrame {
    /**
     * @param args the command line arguments
     */
        
    //Declarar Variables
        
    JPanel panel_principal;
    JPanel panel_botones;
    JTextField caja;
    JButton boton[];
    double op1=0, op2=0;
    String operacion="";
    boolean nueva=true;
    
    public Calculadoracompleta(){



        
      //Titulo
      setTitle("Mi Calculadora");
      //Tamaño
      setSize(700,700);
      //Dimencionable O No
      setResizable(false);
      //Location
      setLocationRelativeTo(null);
      //Salir Al Cliklear KLa Cruz
      setDefaultCloseOperation(EXIT_ON_CLOSE);
      //Icono De La Calculadora
      setIconImage(new ImageIcon(getClass().getResource("/calculadoracompleta2/fondo.jpg")).getImage());
      //Metodo Para Crear Interfaz Y Agregar Eventos A Botones
      init();
      //Hacemos Visible La Aplicacion
      setVisible(true);
       //Color JFrame
      

    }
    
    public void init(){
   
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
       panel_botones.setLayout(new GridLayout(5,4,8,8));
       agregarBotones();
       panel_principal.add("Center",panel_botones);
       
       //Agregamos Todo El Contenido Que Acabamos De Hacer En
       //PANEL_PRINCIPAL A EL PANEL DE FORMULARIO
       getContentPane().add(panel_principal);   
    }
    
    public void agregarBotones(){

      //Inicializamos El Arreglo De Botones
        boton = new JButton[20];
        
      //Inicializamos Los Botones
      boton[0]=new JButton("CE");
      boton[1]=new JButton("");
      boton[2]=new JButton("");
      boton[3]=new JButton("");
      boton[4]=new JButton("7");
      boton[5]=new JButton("8");
      boton[6]=new JButton("9");
      boton[7]=new JButton("/");
      boton[8]=new JButton("4");
      boton[9]=new JButton("5");
      boton[10]=new JButton("6");
      boton[11]=new JButton("*");
      boton[12]=new JButton("1");
      boton[13]=new JButton("2");
      boton[14]=new JButton("3");
      boton[15]=new JButton("-");
      boton[16]=new JButton("0");
      boton[17]=new JButton(".");
      boton[18]=new JButton("=");
      boton[19]=new JButton("+");
      
      //Agregamos Los Botones Al Panel Botones
      for(int i=0; i<20; i++){
        panel_botones.add(boton[i]);
      }
      
      //Eventos De Los Botones
      //Operaciones
      
    
    
   boton[19].addActionListener(new ActionListener(){
       @Override     
      public void actionPerformed(ActionEvent evt){   
         try{   
            if(op1!=0)
              op1=op1+Double.parseDouble(caja.getText());
            else
              op1=Double.parseDouble(caja.getText());
              operacion="suma";
              caja.setText("");
         }catch(Exception err){}
      }
});
      
   boton[15].addActionListener(new ActionListener(){
       @Override     
      public void actionPerformed(ActionEvent evt){ 
         try{   
            if(op1!=0)
              op1=op1-Double.parseDouble(caja.getText());
            else
              op1=Double.parseDouble(caja.getText());
              operacion="resta";
              caja.setText("");
         }catch(Exception err){}
      }
});

  boton[11].addActionListener(new ActionListener(){
      @Override    
      public void actionPerformed(ActionEvent evt){   
         try{   
            if(op1!=0)
              op1=op1*Double.parseDouble(caja.getText());
            else
              op1=Double.parseDouble(caja.getText());
              operacion="multiplicacion";
              caja.setText("");
         }catch(Exception err){}
      }
});

   boton[7].addActionListener(new ActionListener(){
      @Override     
      public void actionPerformed(ActionEvent evt){   
         try{   
            if(op1!=0)
              op1=op1/Double.parseDouble(caja.getText());
            else
              op1=Double.parseDouble(caja.getText());
              operacion="divicion";
              caja.setText("");
         }catch(Exception err){}
         
      }
});
 
   //Numeros Y Punto Decimal
   boton[4].addActionListener(new ActionListener(){
   @Override
   public void actionPerformed(ActionEvent evt){
       if(nueva){caja.setText("");nueva=false;}
       caja.setText(caja.getText()+"7");
   }
   });
   
   
   boton[5].addActionListener(new ActionListener(){
   @Override
   public void actionPerformed(ActionEvent evt){
       if(nueva){caja.setText("");nueva=false;}
       caja.setText(caja.getText()+"8");
   }
   });
   
   
   boton[6].addActionListener(new ActionListener(){
   @Override
   public void actionPerformed(ActionEvent evt){
       if(nueva){caja.setText("");nueva=false;}
       caja.setText(caja.getText()+"9");
   }
   });
   
   
   boton[8].addActionListener(new ActionListener(){
   @Override
   public void actionPerformed(ActionEvent evt){
       if(nueva){caja.setText("");nueva=false;}
       caja.setText(caja.getText()+"4");
   }
   });
   
   
   boton[9].addActionListener(new ActionListener(){
   @Override
   public void actionPerformed(ActionEvent evt){
       if(nueva){caja.setText("");nueva=false;}
       caja.setText(caja.getText()+"5");
   }
   });
   
   
   boton[10].addActionListener(new ActionListener(){
   @Override
   public void actionPerformed(ActionEvent evt){
       if(nueva){caja.setText("");nueva=false;}
       caja.setText(caja.getText()+"6");
   }
   });
   
   
   boton[12].addActionListener(new ActionListener(){
   @Override
   public void actionPerformed(ActionEvent evt){
       if(nueva){caja.setText("");nueva=false;}
       caja.setText(caja.getText()+"1");
   }
   });
   
   
   boton[13].addActionListener(new ActionListener(){
   @Override
   public void actionPerformed(ActionEvent evt){
       if(nueva){caja.setText("");nueva=false;}
       caja.setText(caja.getText()+"2");
   }
   });
   
   
   boton[14].addActionListener(new ActionListener(){
   @Override
   public void actionPerformed(ActionEvent evt){
       if(nueva){caja.setText("");nueva=false;}
       caja.setText(caja.getText()+"3");
   }
   });
   
   
   boton[16].addActionListener(new ActionListener(){
   @Override
   public void actionPerformed(ActionEvent evt){
       if(nueva){caja.setText("");nueva=false;}
       caja.setText(caja.getText()+"0");
   }
   });
   
   boton[17].addActionListener(new ActionListener(){
   @Override
   public void actionPerformed(ActionEvent evt){
       if(nueva){caja.setText("");nueva=false;}
       caja.setText(caja.getText()+".");
   }
   });
   
   //Igual
   boton[18].addActionListener(new ActionListener(){
   @Override
   public void actionPerformed(ActionEvent evt){
       try{
           op2=Double.parseDouble(caja.getText());
       }catch(Exception err){}
       if(operacion.equals("suma")){
           double res=op1+op2;
           caja.setText(String.valueOf(res));
           op1=op2=0;
           operacion="";
       }else if(operacion.equals("resta")){
           double res=op1-op2;
           caja.setText(String.valueOf(res));
           op1=op2=0;
           operacion="";    
       }else if(operacion.equals("multiplicacion")){
           double res=op1*op2;
           caja.setText(String.valueOf(res));
           op1=op2=0;
           operacion="";  
       }else if(operacion.equals("divicion")){
              if (op2==0){
                caja.setText("...Error No Se Puede Dividir Por Cero...");
              }else{
                double res=op1/op2;
                caja.setText(String.valueOf(res));
                op1=op2=0;
                operacion="";  
              }
       }
       nueva=true;
   }
   });
   //CE
   boton[0].addActionListener(new ActionListener(){
   @Override
   
   public void actionPerformed(ActionEvent evt){
      caja.setText("");
      op1=op2=0;
      operacion="";
   }
   });
}
    
    public static void main(String[] args) {
        // TODO code application logic here
        
        //Creamos Un Nuevo Objeto Calculadorarcompleta
        new Calculadoracompleta();
  

        
    }
    
}
