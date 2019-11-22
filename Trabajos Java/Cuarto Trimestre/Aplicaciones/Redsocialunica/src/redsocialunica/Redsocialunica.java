/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package redsocialunica;

import java.awt.*;
import java.applet.*;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;

public class Redsocialunica extends Applet{
    
    
     int entrar=1; 
     int var,i;
       
Button b1;

    public void init() {
        b1 = new Button("Entrar");
        b1.setBackground(Color.blue);

        new Redsocialunica();
        
        
        setLayout(new BorderLayout());
        setFont(new Font("Arial Black", Font.PLAIN, 20)); //Establece tipo, tamano de 

          add(b1, BorderLayout.NORTH); 
        
      b1.addMouseListener(new MouseAdapter() {
            public void mousePressed(MouseEvent e){               
                
               entrar=entrar+1; 
               
            }
            
        });
    
        }
  

    
   private Image google;
   private Image app;
   private Image face;
   private Image pio;
   private Image ree;
   private Image i11;
   private Image i22;
   private Image i33;
   private Image i44;
   private Image i55;
   private Image i66;
   private Image i77;
   private Image i88;
   private Image i99;
   private Image i1010;
   private Image i1111;
   private Image i1212;
   private Image i1313;
   private Image i1414;
   private Image i1515;
   
   
    @Override
    
    public void paint(Graphics g)
{
    

    
    //el valor de 1 mostrar el cuadro de entrar
    // Cualquier Otro Valor No Mostrara El Cuadro
    
    
    //...................Parte Suoperior..................
  g.setColor(Color.black); 
  g.drawRect(5,0, 1000, 80);
  g.fillRect(5,0, 1000, 80);
 

 g.setColor(Color.white);
 g.setFont(new Font("Arial Black",Font.BOLD + Font.ITALIC,40));
 g.drawString("ask",100,60);
 g.setFont(new Font("Batang",Font.BOLD + Font.ITALIC,40));
 g.setColor(Color.green);
 g.drawString(".fm",185,60);
 
 g.setFont(new Font("Arial Black",Font.BOLD + Font.ITALIC,12));
 g.setColor(Color.blue);
 g.drawString("¿Ya tienes una cuenta?",700,50);
 
 

  
     //...................Parte Central..................
  
    g.setColor(Color.blue);
    g.drawRect(5,80, 1000, 500);
    g.fillRect(5,80, 1000, 500);
 

g.setColor(Color.white);
 g.setFont(new Font("Arial Black",Font.BOLD + Font.ITALIC,50));
 g.drawString("Preguntar y responder",100,230);
 
  g.setColor(Color.green);
  g.drawRect(100,260, 280, 60);//CUADRO VERDE
  g.fillRect(100,260, 280, 60);
  
  g.setColor(Color.white);
  g.setFont(new Font("Arial Black",Font.BOLD + Font.ITALIC,25));
  g.drawString("Crear una cuenta",110,300);  
  

  
  if(entrar%2==var){
  
  //Cuadro blanco De Ingreso
  g.setColor(Color.white);
  g.drawRect(700, 80, 260, 280);
  g.fillRect(700, 80, 260, 280);
  g.setColor(Color.LIGHT_GRAY);
  g.drawRect(698, 78, 264, 284);
  g.setColor(Color.black);
  g.drawRect(696, 76, 268, 288);
  
  g.setColor(Color.black);
   
  g.drawRect(730, 90, 200, 40);
  g.setFont(new Font("Arial Black",Font.BOLD + Font.ITALIC,12));
  g.drawString("Nombre de usuario",740,110);
  g.drawRect(730, 130, 200, 40);
  g.drawString("Contraseña",740,150);
  
  g.setColor(Color.green);
  g.drawRect(730,180, 200, 30);//CUADRO VERDE
  g.fillRect(730,180, 200, 30);
  
  g.setColor(Color.white);
  g.drawString("Iniciar Sesion",780,200);
  
  g.setColor(Color.gray);
  g.drawString("Iniciar Sesion Con ",755,240);
  

    
    
    face= getImage(getDocumentBase(),"face.jpg");
    g.drawImage(face,750,250, 40, 40, this);
  

    pio= getImage(getDocumentBase(),"pio.jpg");
    g.drawImage(pio,805,250, 40, 40, this);
  

    ree= getImage(getDocumentBase(),"ree.jpg");
    g.drawImage(ree,860,250, 40, 40, this);
  
  
  //olvidar contraseña
  
  g.setColor(Color.blue);
  g.drawString("¿ Olvidaste tu contraseña o tu ",710,320);
  g.drawString(" nombre de Usuario?  ",745,340);
  
  }else{
      
  }
  
  //parte De Abajo
  g.setColor(Color.white);
  g.drawString("Mira quien esta aqui",100,550);

 


  
         google= getImage(getDocumentBase(),"google.jpg");
 g.drawImage(google,710,440, 110, 40, this);
 

  
     app= getImage(getDocumentBase(),"app.jpg");
 g.drawImage(app,840,440, 110, 40, this);
 

  
       //...................Parte Inferior..................
  
  

    i11= getImage(getDocumentBase(),"i11.jpg");
    g.drawImage(i11,100,580, 45, 45, this);
 

    i22= getImage(getDocumentBase(),"i22.jpg");
    g.drawImage(i22,155,580, 45, 45, this);
   
 
    i33= getImage(getDocumentBase(),"i33.jpg");
    g.drawImage(i33,210,580, 45, 45, this);
   

    i44= getImage(getDocumentBase(),"i44.jpg");
    g.drawImage(i44,265,580, 45, 45, this);
   

    i55= getImage(getDocumentBase(),"i55.jpg");
    g.drawImage(i55,320,580, 45, 45, this);
   

    i66= getImage(getDocumentBase(),"i66.jpg");
    g.drawImage(i66,375,580, 45, 45, this);
   

    i77= getImage(getDocumentBase(),"i77.jpg");
    g.drawImage(i77,430,580, 45, 45, this);
   

    i88= getImage(getDocumentBase(),"i88.jpg");
    g.drawImage(i88,485,580, 45, 45, this);
   

    i99= getImage(getDocumentBase(),"i99.jpg");
    g.drawImage(i99,540,580, 45, 45, this);
   

    i1010= getImage(getDocumentBase(),"i1010.jpg");
    g.drawImage(i1010,595,580, 45, 45, this);
   

    i1111= getImage(getDocumentBase(),"i1111.jpg");
    g.drawImage(i1111,650,580, 45, 45, this);
   

    i1212= getImage(getDocumentBase(),"i1212.jpg");
    g.drawImage(i1212,705,580, 45, 45, this);
   

    i1313= getImage(getDocumentBase(),"i1313.jpg");
    g.drawImage(i1313,760,580, 45, 45, this);
   

    i1414= getImage(getDocumentBase(),"i1414.jpg");
    g.drawImage(i1414,815,580, 45, 45, this);
    
    i1515= getImage(getDocumentBase(),"i1515.jpg");
    g.drawImage(i1515,870,580, 45, 45, this);
    
   
   //Textos
   g.setFont(new Font("",Font.BOLD + Font.ITALIC,14));
   g.setColor(Color.blue);
   g.drawString("- English",100,660);
   
   g.setColor(Color.black);
   g.drawString("- Español",175,660);
   
   g.setColor(Color.blue);
   g.drawString("- Francais",250,660);
   g.drawString("- Deutsch",325,660);
   g.drawString("- Italiano",400,660);
   g.drawString("- Turkce",475,660);
   g.drawString("- Polski",550,660);
   g.drawString("- Pycnñ",625,660);
   g.drawString("- Todos los idiomas >",700,660);
   g.setColor(Color.darkGray);
   g.drawString("______________________________________________________________________________________________________",100,680);
   
    g.setColor(Color.black);
   g.drawString("Idioma: Español ",800,710);
   
   g.setFont(new Font("Adobe Arabic",Font.BOLD + Font.ITALIC,9));
   g.drawString("@ USA Ask.fm 2013 | Seguridad | Privacidad | Concluciones | Logros | Publicidad | Contactanos ",100,710);
   
   
   //Bordes De La Pagina
  g.setColor(Color.black);
  g.drawRect(4, 1, 1001, 780);
  g.setColor(Color.darkGray);
  g.drawRect(3, 2, 1002, 781);
}

    
}
